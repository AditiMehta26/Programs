#include<iostream>
using namespace std;

int main()
{
    int n1, n2, n3, max=0;
    cout << "Enter the three numbers - ";
    cin>>n1>>n2>>n3 ;
    if(n1>n2 && n1>n3)
        max=n1;
    else if(n2>n1 && n2>n3)
        max=n2;
    else if(n3>n1 && n3>n2)
        max=n3;
    cout<<"The greatest number is:"<<max<<"\n";
    return 0;
}
