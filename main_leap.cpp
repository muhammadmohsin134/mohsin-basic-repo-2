#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int y;
	cout<<"enter an year";
	cin>>y;
	if(y%4==0){
		cout<<y<<"is leap year";
	}else{
		cout<<y<<"is not leap year";

	}
	return 0;
}
