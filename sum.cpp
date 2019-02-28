/*Write a do loop that reads integers and computes their sum.
Stop when a zero is read or the when the same value
is read twice in a row. For example,
if the input is 1 2 3 4 4,
then the sum is 14 and the loop stops.
*/

#include <iostream>

using namespace std;

int main()
{
   int previous;
   int sum = 0;
   int number;
   do
   {
     previous = number;
     cout<<"Enter a number: ";
     cin>>number;
     sum = sum + number;
   }
   while (number != 0 && number != previous);
   cout << "Sum: " << sum << endl;
   return 0;
}
