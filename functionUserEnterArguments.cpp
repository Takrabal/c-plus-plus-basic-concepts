#include <iostream>
using namespace std;

int sum(int x, int y)  // formal arguments
	{
	 return(x+y);
    }

int main() {

    int n1, n2;
    cout<<"Enter number 1:";
    cin>>n1;
    cout<<"Enter number 2:";
    cin>>n2;

    int result=sum(n1,n2);      //Actual Arguments
    cout<<"Result is: "<<result;
    //cout<<"Result is: "<<sum(5,6); 
    return 0;
}