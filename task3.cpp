#include <iostream>
using namespace std;

void ifPass(int marks);

main()
{
 int marks;
 while(true)
 { cout << "Enter quiz marks: ";
   cin >> marks;
   ifPass(marks);
 }
}

void ifPass(int marks)
{
 if ( marks > 50 )
 {   cout << "You have passed first quiz of PF" <<endl;

 }

 if ( marks == 50)
 {    cout << "You barely passed the quiz, Work hard" <<endl;

 }

 if ( marks < 50)

 {     cout << "You have failed the quiz" <<endl;

 }

}