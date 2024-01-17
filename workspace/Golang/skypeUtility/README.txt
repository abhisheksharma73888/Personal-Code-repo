##################################
#				 #
# - By Ashtosh                   #
#				 #
##################################

1. Copy "send_skype_msg" to /usr/bin/
2. Copy ".skypeGroups.conf" to /home/cavisson/ (else you have to edit the location in send_skype_msg file)
3. Add group/Chat names in .skypeGroups.conf to send to messages

------

Problem 1: /usr/bin/env: ‘python’: No such file or directory 
> sudo ln -s /usr/bin/python3 /usr/bin/python

Problem 2: pip is not installed on your machine
> sudo apt-get install python3-pip

--------
