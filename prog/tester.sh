#! /bin/sh


clear

if [ ! -e "test" ]
then 
	echo "Creating test folder"
	mkdir "test"
fi

DIR="$1_sol_test/$1$2_test*.in"
RESULTS=""
int=1

    if [ -e "$1sol".tgz ] 
	then 
		echo "TGZ founded."
	else
		echo "Start download "$1"sol.tgz"
		mkdir $1"_sol_test"
		if http://www.hadassah.ac.il/cs/staff/danizobin/modprog1/ex/$1/"$1"sol.tgz 
			then
				echo "Founded."
			else
				wget http://www.hadassah.ac.il/cs/staff/danizobin/modprog1/ex/$1/"$1"sol.tgz
				tar xzf "$1"sol.tgz -C $1"_sol_test"		
		fi

    fi
	
echo "Start compiling...."

g++ -Wall $1/$1$2.cc -o  $1$2	
		#sleep 0.1
		
	if [ $? -eq 0 ] 
		then
			for filename in $DIR
			do
				echo $test " Start $filename"
					./$1$2 < $filename &> "test/test_my.out"
					./$1"_sol_test/"$1$2_sol < $filename &> "test/test_sol.out"
					
				cmp "test/test_my.out" "test/test_sol.out" &> /dev/null  
				if [ $? -eq 0 ]        
					then
					  echo ""
					else
					  echo "Upss Not Passeed! - INPUT::"
					  cat  $filename
					  echo "OUTPUT YOUR"
					  echo "|- - - - - - - - -- - - - - - - - -"
					  cat  'test/test_my.out'
					  echo "SCHOOL SOLUTION"
					  echo "|- - - - - - - - -- - - - - - - - -"
					  cat  'test/test_sol.out'
					  echo "|- - - - - - - - -- - - - - - - - -"
					  echo "________________________________________________________"
				fi
				echo $RESULTS	
			done
			rm $1$2
			rm test/*
		else
			echo "==============================================="
			echo "Compiling ERROR:==============================="
			echo "==============================================="
	fi




rmdir test
#rm $1"_sol_test"/*
#rmdir $1"_sol_test"
#rm "$1"sol.tgz