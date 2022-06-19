#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter Your Choice : ";
    cin>>button;
    switch (button)
    {
    case 'a': 
        cout<<"Hello"<<endl;
        break;
    case 'b': 
        cout<<"Hola"<<endl;
        break;
    case 'c': 
        cout<<"Namaste"<<endl;
        break;
    case 'd': 
        cout<<"SIa"<<endl;
        break;
    case 'e': 
        cout<<"Cios"<<endl;
        break;    
    default:
        cout<<"Choice Is Not Found"<<endl;
        break;
    }
}