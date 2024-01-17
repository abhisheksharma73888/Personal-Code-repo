ls /home/cavisson/workspace/Golang/smoke/ndprof > list.sh
while read -r line; do
        mkdir -p $line
                cp Tier.conf $line
                cp Server.conf $line
                cp Instance.conf $line
done < list.sh

