#include <iostream>
using namespace std;

void add(int number1,int number2);
void multiplication(int number1, int number2);
void subtraction(int number1, int number2);

main()
{int num1;
 int num2;
 cout << "Enter first number: ";
 cin >> num1;
 cout << "Enter second number: ";
 cin >> num2;
 add(num1, num2);
 multiplication(num1, num2);
 subtraction(num1, num2);
}

void add(int number1, int number2)
{
 int sum;
 sum = number1 + number2;
 cout << "Sum is: " <<sum <<endl;
}

void multiplication(int number1, int number2)
{
 int product;
 product = number1 * number2;
 cout << "Product is: " <<product <<endl;
}
void subtraction(int number1, int number2)
{int subtract;
 subtract = number1 - number2;
 cout << "Subtraction is: " <<subtract <<endl;
}

 