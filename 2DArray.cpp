#include <iostream>
using namespace std;
 
int main () {
   // an array with 5 rows and 2 columns.
   int a[5][2] = { 
      {0,0}, 
      {1,2},
      {2,4}, 
      {3,6},
      {4,8}
      
      };
 
   // output each array element's value                      
   
   for ( int r = 0; r < 5; r++ )
   {
      for ( int c = 0; c < 2; c++) 
      {
      
         cout << "a[" << r << "][" << c << "]: ";
         cout <<a[r][c]<< endl;
      
      }
   }
 
   return 0;
}
