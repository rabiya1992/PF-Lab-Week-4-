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
{int output;
 
 if( day == "sunday")
{
  output = amount - ((amount*10)/100);
  cout << "Payable amount is: " <<output <<endl;
}

 if( day != "sunday")
{
  output = amount - ((amount*10)/100);
  cout << "Payable amount is: " <<amount <<endl;
}

}
  
 