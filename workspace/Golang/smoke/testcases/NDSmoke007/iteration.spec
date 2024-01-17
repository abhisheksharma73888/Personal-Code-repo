#----------------------------------------------------------------------------------------------------#  
#  Iteration file for FlowPath testcases.                                                            #
#  Convention: ALL variables starts with K followed by underscore and appropriate name               #
#  Note: Do not use blank line and spaces. Comments are allowed                                      #
#----------------------------------------------------------------------------------------------------#
$K_TNAME|$K_NUM_USERS|$K_RAMP_UP_TIME|$K_DURATION|$K_RAMP_DOWN_TIME|$K_SCRIPT1|$MONI_SET|$K_SVR_HOST1|$K_RR_MODE|$K_REPORTING|$K_SESSION_PACING|$K_O_THINK_TIME|$K_THINK_TIME|$K_NEW_USER|$K_TRACING|$K_FEATURE

GOLANG-007-001|1|ALL IMMEDIATELY|TIME 00:02:00|ALL IMMEDIATELY|AutoInfluxdScript|GOLANG-007-001|127.0.0.1 192.168.1.21:8086 -|1|ALL 1|ALL 1 0 2000|ALL ALL 1|ALL ALL 3 10 50|ALL 1|ALL 0 0 0 0|#Feature:BT Monitor

GOLANG-007-002|1|ALL IMMEDIATELY|TIME 00:02:00|ALL IMMEDIATELY|AutoInfluxdScript|GOLANG-007-002|127.0.0.1 192.168.1.21:8086 -|1|ALL 1|ALL 1 0 2000|ALL ALL 1|ALL ALL 3 10 50|ALL 1|ALL 0 0 0 0|#Feature:BT Monitor

GOLANG-007-003|1|ALL IMMEDIATELY|TIME 00:02:00|ALL IMMEDIATELY|AutoInfluxdScript|GOLANG-007-003|127.0.0.1 192.168.1.21:8086 -|1|ALL 1|ALL 1 0 2000|ALL ALL 1|ALL ALL 3 10 50|ALL 1|ALL 0 0 0 0|#Feature:IP Monitor

