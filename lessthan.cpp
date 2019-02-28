#include <iostream>
using namespace std;

/*
Complete this program, prompting the user to to enter two
positive numbers a and b so that a is less than b.
*/

int main()
{
   int a, b;

   do{
     cout << "Enter two positive integers, the first smaller than the second." << endl;
     cout << "First: " << endl;
     cin >> a;
     cout << "Second: " << endl;
     cin >> b;
   }
   while(b <= a);
   if (b > a){
     cout << "You entered " << a << " and " << b << endl;
   }
}
