#include<iostream>
using namespace std;

int main()
{
    int a[20],n,i,j,temp;
    cout<<"Size of array"<<"\n";
    cin>>n;
    cout<<"Enter element of array"<<"\n";
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Second maximum number- \n"<<a[1];
    cout<<"\nSecond minimum number- "<<a[n-2];
    return 0 ;
}
