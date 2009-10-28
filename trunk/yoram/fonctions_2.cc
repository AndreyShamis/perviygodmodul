//-------------- include section -----------------------------------------------
#include <iostream>

//-------------- using section -------------------------------------------------
using std::cout;
using std::cin;
using std::endl;

//-------------- void section --------------------------------------------------
void sum1();
void sum2();
void sum3(int n1, int n2);
void sum_dif(int n1, int n2, int sum, int dif);

//-------------- global int section --------------------------------------------
int num1, num2, sum //this variables is good for the hall program, but we col'd use it.

//-------------- main ----------------------------------------------------------
int main ()
{
dobble x;  //this variable is good only here (and not to the fonctions)
bla
bla
bla
sum1();     //calling fonction "sum1".
bla
bla
bla
sum1();     //calling fonction "sum1" - it forget from the last time.
bla
bla
bla
sum2();     //calling fontion "sum2".
bla
bla 
bla

int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
bla
bla
bla
    sum3(num1, num2); //calling fontion "sum3" and puting inside the variables. (the variables names are argoments).
cout << num1 << num2; //it will cout what it's in his memory fron int section.
bla
bla
bla
    sum3(num2, 17); //calling fontion "sum3" and puting inside a variables and 17...
bla
bla
bla
    sum_dif(num1, 17, num2, num3) //calculate sum and rest.
cout << num2 << num3; //it will cout what he do in the fonction.
bla
bla
bla
return (EXIT_SUCCESS);
}
//-------------- void sum1 -----------------------------------------------------
void sum1()         //definition fonction "sum1".
{
    int num1,num2;     //this variables are good only in this section (not in the main); 
    cin >> num1 >> num2;
    cout << num1+num2;
}
//-------------- void sum2 -----------------------------------------------------
void sum2()         //definition fonction "sum2".
{
    sum=num1+num2;
}
//-------------- void sum3 -----------------------------------------------------
void sum3(int n1, int n2)         //definition fonction "sum3", n1 n2 are value parameters.
{
    int sum;
    sum=n1+n2;
    cout << sum;
    n1=0;
    n2=0;
    cout << n1 << n2; //it will cout "0" & "0".
}    
//-------------- void sum_dif --------------------------------------------------
void sum_dif(int n1, int n2, int & sum, int & dif)  //the & make them be-directional
{
sum=n1+n2;
dif=n1-n2;
}
