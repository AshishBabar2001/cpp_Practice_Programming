#include<iostream>
using namespace std;
int main()
{
    int savings;
    cin>>savings;

    if (savings>5000)
    {
        if (savings<10000)
        {
            cout<<"Road Trip With Friends"<<endl;
        }
        else
        {
            cout<<"Dinner With Girlfriend";
        }
    }               
    else if (savings>2000)
    {
        cout<<"Rashmmi"<<endl;
    }
    else
    {
        cout<<"Movie With Friends"<<endl;
    }  
}