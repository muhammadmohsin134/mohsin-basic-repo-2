#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	cout<<"enter a number";
	cin>>a;
	if(a>0)
	{
		cout<<"positive number";
	}
	else if(a<0)
	{
		cout<<"negative number";
	}else{
		cout<<"number is zero";
	}
	return 0;
}
