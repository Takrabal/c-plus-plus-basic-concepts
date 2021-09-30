#include <iostream>
using namespace std;

void sum(int x, int y)  // formal arguments
	{
	int sum=x+y;
	cout<<"Result is: "<<sum;
    }

int main() {

    sum(5,6);      //Actual Arguments
    return 0;

}
