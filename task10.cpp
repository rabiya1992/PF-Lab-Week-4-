#include <iostream>
using namespace std;

void totalAmount(string day, int amount);

main()
{string day;
 int amount;
 cout << "Enter day: ";
 cin >> day;
 cout << "Enter amount: ";
 cin >> amount;
 totalAmount(day, amount);
}

void totalAmount(string day, int amount)
{int output1;
 int output2;
 
 if( day == "sunday")
{
  output1 = amount - ((amount*10)/100);
  cout << "Payable amount is: " <<output1 <<endl;
}

 if( day != "sunday")
{
  output2 = amount - ((amount*5)/100);
  cout << "Payable amount is: " <<output2 <<endl;
}

}