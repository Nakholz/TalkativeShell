echo test 1 :
./client/client $1 "Test this."


echo test 2 :
./client/client $69 "wrong PID"
echo wrong PID

echo test 3 ls -R /home :
./client/client $1 "`ls -R /home`"
