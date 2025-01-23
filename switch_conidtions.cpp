#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int d;
	cout<<"enter value for d:";
	cin>>d;
	switch(d){
		case 1:
			cout<<"monday";
			break;
		case 2:
			cout<<"tuesday";
			break;
		case 3:
			cout<<"wednesday";
			break;
		case 4:
			cout<<"thursday";
			break;
		case 5:
			cout<<"friday";
			break;
		case 6:
			cout<<"saturday";
			break;
		case 7:
			cout<<"sunday";
			break;
		default:
			cout<<"invalid case";
				
	}
	return 0;
}
