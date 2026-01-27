#include <iostream>
using namespace std;
int main()
{
    float distance,speed,time;
    int choice;

    cout << "1. Calculate Speed\n";
    cout << "2. Calculate Distance\n";
    cout << "3. Calculate Time\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice==1) {
        cout<<"Enter distance: ";
        cin >>distance;
        cout<<"Enter time: ";
        cin >>time;
        cout<<"Speed = "<<distance/time;
    }
    else if(choice==2){
        cout<<"Enter speed: ";
        cin>>speed;
        cout<<"Enter time: ";
        cin>>time;
        cout<<"Distance = "<<speed*time;
    }
    else if(choice==3){
        cout<<"Enter distance: ";
        cin>>distance;
        cout<<"Enter speed: ";
        cin>>speed;
        cout<<"Time = "<<distance/speed;
    }
    else{
        cout<<"Invalid choice";
    }

    return 0;
}
