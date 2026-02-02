#include<iostream>
using namespace std;
int main()
{
    int units;
    cout<<"enter units:";
    cin>>units;
    if(units<100)
    cout<<"Free of cost";
    else if(units>=100 && units<300)
    cout<<"total amount"<<units*100;
    else
    cout<<"total amount"<<units*200;
}