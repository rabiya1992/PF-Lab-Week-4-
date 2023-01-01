#include <iostream>
using namespace std;

void greaterNumber(int firstNumber, int secondNumber);

main()
{
 int firstNumber;
 int secondNumber;
 cout << "Enter first number: ";
 cin >> firstNumber;
 cout << "Enter second number: ";
 cin >> secondNumber;
 greaterNumber(firstNumber, secondNumber);
}

void greaterNumber(int firstNumber, int secondNumber)
{
 if(firstNumber>secondNumber)
{
 cout << "First number is greater" ; 
}
 if(firstNumber<secondNumber)
{
 cout << "Second number is greater" ;
}

}