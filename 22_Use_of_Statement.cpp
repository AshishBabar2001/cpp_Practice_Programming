#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Input A Character : ";
    cin>>button;

    if(button == 'a' || button == 'A')
    {
        cout<<"Hello"<<endl;
    }
    else if (button == 'b' || button == 'B')
    {
        cout<<"Namaste"<<endl;
    }
    else if (button == 'c' || button == 'C')
    {
        cout<<"Hola"<<endl;
    }
    else if (button == 'd'|| button=='D')
    {
        cout<<"Cios"<<endl;
    }
    else if (button == 'e' || button == 'E')
    {
        cout<<"SI"<<endl;
    }
    else{
        cout<<"Given Character Is Invalid"<<endl;
    } 
}