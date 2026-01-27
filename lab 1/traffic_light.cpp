#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter colour:";
    cin>>str;
    if(str=="RED")
    cout<<"STOP";
    else if(str=="GREEN")
    cout<<"GO";
    else if(str=="YELLOW")
    cout<<"SLOW DOWN";

}