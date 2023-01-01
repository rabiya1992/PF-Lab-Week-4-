#include <iostream>
using namespace std;

void isEven(int number);

main()
{int number;
 cout << "Enter a number: ";
 cin >> number;
 isEven(number);
}

void isEven(int number)
{
 if(number%2==0)
 { cout << "The number is Even: ";
 }

 if(number%2!=0)
 { cout << "The number is Odd: ";
 }
}
  
  