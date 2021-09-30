#include<iostream>
using namespace std;

int main() {

int myNum[] ={1,2,3,4,5,6,7};

cout<<"***Array Iteration Using for loop***"<<endl;
cout<<"Size is: "<<sizeof(myNum)/sizeof(int)<<endl;

//for(int i=0; i<sizeof(myNum)/sizeof(int); i++)

for(int i=0; i<7; i++)

{

cout<<myNum[i]<<endl;

}

cout<<"***Array Iteration Using enhanced for loop***"<<endl;

for (int number: myNum)
{
    cout<<number<<endl;
}
  return 0;
  
}  

