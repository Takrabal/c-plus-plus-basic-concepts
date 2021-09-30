#include <iostream>
using namespace std;
 
int main () {
   
   int myNum[6]={1,4,3,4,5,6};
   
   for (int number : myNum)
   {
       cout<<number<<endl;
   }
   
 
   return 0;
}