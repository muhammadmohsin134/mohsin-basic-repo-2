#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float salary, bonus;
	int grade;
	cout<<"enter your salary";
	cin>>salary;
	cout<<"enter grade";
	cin>>grade;
	if(grade>=17)
		bonus=salary*60/100;
	else
		bonus=salary*30/100;
		salary=bonus+salary;
	cout<<"totale salary of is:"<<salary;
	return 0;
}
