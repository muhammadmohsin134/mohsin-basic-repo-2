#include <iostream>

using namespace std;

int main()
{
    int a=5, b=10,temp;
    cout<<"before swapping"<<endl;
    cout<<"a"<<a<<",b"<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping"<<endl;
    cout<<"a"<<a<<",b"<<b;
return 0;
}
