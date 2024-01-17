#!/usr/bin/env bash
#source ../lib/coreutils.sh 
#source ../lib/utilities.sh 
source /home/cavisson/workspace/Golang/lib/core.sh
source /home/cavisson/workspace/Golang/lib/utilities.sh


function run(){
    # Rotate previous trace log file
    resetTraceLog 
    suite=$1
    NS_WDIR=/home/cavisson/work
    cd $NS_WDIR
    $TS_RUN -n ${suite} | tee $TEMP_FILE 
}

function Environment_details(){
    i=0;
    while read line; 
    do a[$i]=$line;
        echo ${a[$i]};
        i=$(( i+1 ));
    done < /home/cavisson/workspace/Auto_Generate/Env_Details.csv
    size=${#a[@]}
    Env_Home=/home/cavisson/workspace/Auto_Generate/Env_Details.csv
    Profile_Home=/home/cavisson/work/ndprof/smoke/
    Blocked_Tier=$(grep -v "^#" $Env_Home |grep '0$' |cut -d ',' -f1 | xargs |tr  ' ' ',')
    if [ $Blocked_Tier ];then
        cd $Profile_Home
        find . -type f -exec sed -i "s/#AUTO_SCALE_BLOCKED_TIER/AUTO_SCALE_BLOCKED_TIER $Blocked_Tier/g" {} +
    fi
    Project=$(grep -v "^#" $Env_Home |grep '1$' |cut -d ',' -f1|xargs)
    export Project    

}

function bootstrap(){
 	send_skype_msg -u ndteam.cavisson@gmail.com -p Sept@2019 -g 'Netdiagnostics QA Team' -m "<b>GO-AGENT SMOKE REGRESSION | </b>Automation started For <b>NS Build R$(get_major_NS) B$(get_minor_NS) & Agent Build R$(get_major_Agent) B$(get_minor_Agent)</b> , will update here once results will be available<br/><i><b>Note-</b> This is an auto generated message.</i>"

    TS_RUN="$NS_WDIR/bin/ts_run"
    TEMP_FILE="/tmp/nd_ts_run.$$"
    RESULTS_DIR="${HOME}/workspace/Golang/results/$(get_major_NS)/$(get_minor_NS)"
    if [ ! -d $RESULTS_DIR ]; then
        echo "Creating $RESULTS_DIR"
        mkdir -p $RESULTS_DIR
    fi
    
    BASE_RESULT_FILE="result.$(get_cycleno)"
    R_FILE="${RESULTS_DIR}/${BASE_RESULT_FILE}.txt"
    XML_FILE="${RESULTS_DIR}/${BASE_RESULT_FILE}.xml"
    CURRENT_RESULT_FILE="$RESULTS_DIR/.current"
    
    export R_FILE
    export TEMP_FILE
}

function post_process(){
    if [ ! -f $R_FILE ]; then
        echo "Result file is not created"
        exit 1
    fi
    echo "Result File: $R_FILE"
    # TODO Convert to XML and upload to DB
    failures=$(grep -c ",fail," $R_FILE)
    success=$(grep -c ",pass," $R_FILE)
    total=$((failures + success))

        FailureValue=$(echo "scale=3; $failures/$total" | bc)
        FailurePercent=$(echo 100*${FailureValue}|bc)
        SuccessPercent=$( bc <<< "100 - $FailurePercent" )

    echo "Total: $total, Success: $success, Failures: $failures, Failure Percentage(%): $FailurePercent, Success Percentage(%): $SuccessPercent"
    echo "Processing result file and formatting to XML"

    # Moving back to current directory. 
    cd - >/dev/null

    ruby /home/cavisson/workspace/Golang/bin/xml_writer.rb -i $R_FILE -o $XML_FILE -n $(basename $suite) -f $failures -s $success -t $total >/dev/null 
    #ruby ../bin/xml_writer.rb -i $R_FILE -o $XML_FILE -n $(basename $suite) -f $failures -s $success -t $total >/dev/null 
    RC=$?

    if [ $RC -gt 0 ];then
       echo "Error in processing input file"
       exit 1
    fi
    echo $XML_FILE > $CURRENT_RESULT_FILE
    if [ $failures -gt 0 ]; then 
        echo "Automation failed"
	send_skype_msg -u ndteam.cavisson@gmail.com -p Sept@2019 -g 'Netdiagnostics QA Team' -m "<b>GO-AGENT SMOKE REGRESSION | </b>Automation Completed for both <b>NS Build R$(get_major_NS) B$(get_minor_NS) & Agent Build R$(get_major_Agent) B$(get_minor_Agent)</b>,Below are the summary report:</b><br/>------------------------------------------------------------------------------<br/><b>Total Cases:</b> $total<br/><b>Passed Cases:</b> $success<br/><b>Failed Cases:</b> $failures</br><br/><b>Failure Percentage(%):</b> $FailurePercent</br><b>Success Percentage(%):</b>$SuccessPercent</br><br/>---------------------------------------------------------------------------------------------------------------<br/><i><b>Note-</b> This is an auto generated message.</i>"

#	send_skype_msg -u ndteam.cavisson@gmail.com -p Sept@2019 -g 'Netdiagnostics QA Team' -m "<b>GO-AGENT SMOKE REGRESSION | </b>Automation Completed for both <b>NS Build R$(get_major_NS) B$(get_minor_NS) & Agent Build R$(get_major_Agent) B$(get_minor_Agent)</b>,Below are the summary report:</b><br/>------------------------------------------------------------------------------<br/><b>Total Cases:</b> $total<br/><b>Passed Cases:</b> $success<br/><b>Failed Cases:</b> $failures</br><br/><b>Failure Percentage(%):</b> $FailurePercent</br><b>Success Percentage(%):</b>$SuccessPercent</br><br/>---------------------------------------------------------------------------------------------------------------<br/><i><b>Note-</b> This is an auto generated message.</i>"
        exit 1
    fi
}

function main(){
    suite=$1
    bootstrap
    Environment_details
    run $suite
    post_process
}

main "$1"
