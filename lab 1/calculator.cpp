#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char op;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Enter operator (+ - * /): ";
    cin>>op;

    if(op=='+')
        cout<<"Result = "<<a+b;
    else if(op=='-')
        cout<<"Result = "<<a-b;
    else if(op=='*')
        cout<<"Result = "<<a*b;
    else if(op=='/')
        cout<<"Result = "<<a/b;
    else
        cout<<"Invalid operator";

    return 0;
}
