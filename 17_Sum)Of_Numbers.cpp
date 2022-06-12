#include<iostream>
using namespace std;//CHeck Faulty Program
int main()
{
    int i=0,n,sum=0;
    cin>>n;
    while (i<n)
    {
        sum += i;
        i--; 
    }
    cout<<"Sum Is : "<<sum<<endl;
}