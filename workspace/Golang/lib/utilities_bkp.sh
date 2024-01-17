# Automation utility library
# Last Modified: 29 May 2015
# This file need to be sourced out. 
# Convention: Indentation Four spaces, no tabs.

# Test run id will be filled automatically by check status shell
TEST_SUITE_ID=$1
TEST_RUN_ID=$2
LOGS_DIR=$HOME/workspace/logs
[ ! -d $LOGS_DIR ] && mkdir -p $LOGS_DIR 

LOG_FILE="$LOGS_DIR/nd_debug_trace.log"
DEBUG_LEVEL=1
MAX_LOG_FILE_SIZE=$((100 * 1024)) #100KB Log size

function get_cycle_no(){
    CYCLE_NO=$(grep "Test Cycle Number =" $TEMP_RUN_FILE|awk -F "=" {print $1}|sed 's/^ //')
    echo $CYCLE_NO
}

# Returns the testrun id of the current running test
function get_test_idx() {
    [ -z ${TEST_RUN_ID} ] && echo "NA" && return
    echo ${TEST_RUN_ID}
}


# Returns the current partition of the last ran test
function get_test_partition() {
    partition=$(head -1 $NS_WDIR/logs/TR$(get_test_idx)/.curPartition | cut -d '=' -f2)
    echo $partition
}


# Returns the testname from scenario
function get_test_name() {
    scenario_file="${NS_WDIR}/logs/TR$(get_test_idx)/scenario"
    testname="NA"

    if [ -f ${scenario_file} ] && [ -s ${scenario_file} ]; then
        testname=$(grep "TNAME" ${scenario_file}| awk '{print $2}')
    fi
    echo ${testname}
}

## Returns the Feature name from scenario
get_feature() {
        if [ ! -f $NS_WDIR/logs/TR${TEST_RUN_ID}/scenario ]; then
            echo "-"
            return
        fi
        feature=$(grep -i -e "#Feature" $NS_WDIR/logs/TR${TEST_RUN_ID}/scenario |cut -d ':' -f2-)
        if [ -z ${feature} ]; then
            echo "-"
        else
            echo ${feature}
        fi
    }

# Internal logging purpose
function log_internal(){
    level=${1}
    if [ -z ${level} ]; then
        level="INFO"
    fi
    echo "$(date +"%F %X")|${level}|$(get_test_idx)|$(get_test_name)|$2" >>${LOG_FILE}
    #date=$(date +'%D %H:%M:%S')
    #PID=$$
    #testidx=$(get_test_idx)
    #testname=$(get_test_name)
    #message="$2"
    #printf "[%s #%s(%s)] %5s -- : %s\n" "${date}" ${testidx} ${testname} ${level} "${message}" >> $LOG_FILE
}


# Debug logging. This is exposed to the enduser
function debug() {
    log_internal "DEBUG" "$*"
}


# Debug Level 2
function DL2(){
    if [ $DEBUG_LEVEL -gt 1 ];then
        log_internal "DEBUG-L2" "$*"
    fi
}


# Error logging
function error() {
    log_internal "ERROR" "$*"
}


# To clear out logs at any given moment
function clear_logs() {
    if [ -f ${LOG_FILE} ]; then
        local tstamp=$(date +'%d%m%Y%H%m%S')
        cp ${LOG_FILE} ${LOG_FILE/.log}_${tstamp}.log
        > ${LOG_FILE}
    fi
}

function resetTraceLog() {
    local size
    if [ ! -f $LOG_FILE ]; then
        echo "Not attempting to rotate trace log as file is not present" 
        return 
    fi 
    size=$(stat -c %s ${LOG_FILE})
    if [ $size -gt ${MAX_LOG_FILE_SIZE} ]; then
        echo "Rotating debug trace log as file size ${size} > ${MAX_LOG_FILE_SIZE}"
        clear_logs
    fi
}

function set_log_level(){
    level=$1
    export DEBUG_LEVEL=$level
}


function set_log_file() {
    log_file=${1}
    if [ ! -z $log_file ]; then
        LOG_FILE=${log_file}
    fi 
    export LOG_FILE
}


function log_status_and_exit(){
    agent_type="$1"
    productid="$2"
    componentid="$3"
    status="${4,,}" # Lowercase the status
    reason="$5"
    if [ -z $R_FILE ]; then
        echo "Result file is NULL"
        return
    fi
    echo "${agent_type},$(get_feature),$(get_test_name),$(get_test_idx),${productid},${componentid},${status},${reason}" >> ${R_FILE}
    #echo "${agent_type},$(get_feature),$(get_test_name),$(get_test_idx),${productid},${componentid},${status},${reason}" >> ${R_FILE}

   #if [ ${status} == "pass" ]; then
   	#    exit 0 
    #else
    #    exit -1
    #fi
}

function DL2_SMOKE() {
    DL2 "$*"
}


# Returns the integer value of
# a floating point no by removing
# 0s after decimal places
function intValue() {
    local n
    local intVal
    n=$1
    intVal=$(printf "%.0f" $n) 
    echo ${intVal} 
}
#Check NDFlowpath.csv file presenet in Testrun or not.                                         
#Return flag=0 ,when file present and,                                                         
#Return flag=1 ,when file not present or present with size 0                                   
                                                                                       
#function check_flowpath_csv_size() {                                                              
#    PATH_TO_PARTITION="${NS_WDIR}/logs/TR$(get_test_idx)/$(get_test_partition)"                
#    FLOWPATH_CSV_FILE="${PATH_TO_PARTITION}/nd/csv/AppTier_fedora96_atg/NDFlowPath.csv"        
#    [ -s ${FLOWPATH_CSV_FILE} ] && echo 0 || echo 1
#}
