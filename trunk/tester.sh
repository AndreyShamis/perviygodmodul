#! /bin/sh

DIR="$1sol/$1$2_test*.in"
RESULTS=""
int=1

    if [ -e "$1sol".tgz ] 
	then 
		echo "ass"
	else
		mkdir "ex4sol"
		wget http://www.hadassah.ac.il/cs/staff/danizobin/modprog1/ex/$1/"$1"sol.tgz
		tar xzvf "$1"sol.tgz -C ex4sol
    fi
	
	g++ -Wall $1$2.cc -o  $1$2
	
mkdir "test"

#http://www.hadassah.ac.il/cs/staff/danizobin/modprog1/ex/ex4/ex4sol.tgz
for filename in $DIR
do
	echo "Start $filename"

		./$1$2 < $filename &> "test/test_my.out"
		./$1"sol/"$1$2_sol < $filename &> "test/test_sol.out"
			
	cmp "test/test_my.out" "test/test_sol.out" &> /dev/null  

	if [ $? -eq 0 ]        
		then
		  echo ""
		  #echo $'\n' 
		else
		  echo "Upss Not Passeed"
		  cat  $filename
		  echo "________________________________________________________"
		  cat  'test/test_my.out'
		  echo "________________________________________________________"
		  cat  'test/test_sol.out'
		  echo "________________________________________________________"
		  echo "________________________________________________________"
	fi

	echo $RESULTS

done

