#include <iostream>
using namespace std;

void printName(string name);

main()
{

string name = "Jin";
printName(name);

printName("Rabia");

string secondName;
cout << "Enter Name: ";
cin >> secondName;
printName(secondName);

}

void printName(string name)
{
cout << "My Name is: " << name << endl;
}
