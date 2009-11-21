/*
 * The char type as representation of letters & numbers
 * =============================================================
 * Writen by: Dani Zobin
 *
 * This program demonstrates work with char variables in it different roles
 * It implementats a simple calculator
 *
 * input: an expression of the form: num1 action num2. 0<= num1 & num2 <=9
 * 
 * output:  the result of the calculated expression.
 * 
 *  
 */


//-------------- include section --------------

#include <iostream>

//-------------- using section --------------

using std::cin;
using std::cout;
using std::endl;

//-------------- const and enum section --------------

const int ILLEGAL_VALUE = 255;

//-------------- Prototypes section --------------

char digitToNumber(char digit);
char calculate(char num1, char action, char num2);
bool myIsDigit(char ch);

//--------------  main --------------

int main()
{
	char digit1, digit2;
	char num1, num2;
	char action;
	
	//input (assuming legality of the action, not of the digits):
	cout << "Enter an expression : ";
	cin >> digit1 >> action >> digit2;
	if(!myIsDigit(digit1) || !myIsDigit(digit2))
	{
		cout << "Only digits please\n";
		return -1;
	}
	
	//converting digits to numbers
	num1=digitToNumber(digit1);
	num2=digitToNumber(digit2);
	
	//output & caculation
	cout << "result: " << (int)calculate(num1, action, num2) << endl;

	return EXIT_SUCCESS ;
}

//------------------------------------------------------------------
// converts a character represnting a digit to it's numerical value
// parameters: 
//		char digit, a character representing a digit 
// returns:
// 		char, it's numerical value

char digitToNumber(char digit)
{
	return digit - '0';
}

//------------------------------------------------------------------

// parsing an action character and calculates the wanted action
// parapeters:
//	 char: num1, num2, action
// return value:
// 	the result of the action

char calculate(char num1, char action, char num2)
{
	char ret;									// The return value
	
	switch(action)
	{
		case '+':
			ret = num1 + num2;
			break;

		case '-':
			ret = num1 - num2;
			break;
		
		case '*':
			ret = num1 * num2;
			break;
		
		case '/':
			ret = num1 / num2;
			break;

		default:
			ret = ILLEGAL_VALUE;
			break;
	}
	
	return ret;
}


//------------------------------------------------------------------

bool myIsDigit(char ch)
{
	return (ch >='0' && ch <='9');
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
