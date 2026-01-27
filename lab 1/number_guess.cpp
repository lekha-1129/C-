#include<iostream>
using namespace std;
int main()
{
    int real=29,num;
    char choice;
    cout<<"Welcome to number guessing game!\n";
   do{
    do{
        cout<<"Enter your guess: ";
        cin>>num;
        if(num>real)
        cout<<"Too high! Try again\n";
        else if(num<real)
        cout<<"Too low! Try again\n";
        else
        cout<<"Congratulations!! You have successfully guessed the number\n";
    }while(num!=real);
        
        cout<<"Do you want to play again(Y/N)??";
        cin>>choice;
}while(choice=='Y');

}