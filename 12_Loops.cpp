#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum=0;
    for (int cnt=1;cnt<=n;cnt++)
    {
        sum = sum + cnt;
    }
    cout<<sum<<endl;
    
}