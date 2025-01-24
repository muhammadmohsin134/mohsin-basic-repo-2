#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Your Marks: ";
    cin>>marks;
    if (marks >= 90 & marks <= 100 ){
        cout<<"Your Grade is A+";
    }
    else if (marks >= 80 & marks < 90){
        cout<<"Your Grade is A";
    }
    else if (marks >= 70 & marks < 80){
        cout<<"Your Grade is B+";
    }
    else if (marks >= 60 & marks < 70){
        cout<<"Your Grade is B";
    }
    else if (marks >= 50 & marks < 60){
        cout<<"Your Grade is C";
    }
    else if (marks >= 40 & marks < 50){
        cout<<"Your Grade is D";
    }
    else if (marks < 40){
        cout<<"Your Grade is E";
    }
    else{
        cout<<"Enter Valid Marks";
    }
    return 0;
}
