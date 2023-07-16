#include<iostream>
#include<cstdlib>
#include <ctime>

        //NUMBER GUESSING GAME

  //Create a program that generates a random number and asks the
  //user to guess it. Provide feedback on whether the guess is too
  //high or too low until the user guesses the correct number.
using namespace std;
int main()
{
    //For the generation of random number by seeding rand with starting value we need to initialize srand.
    srand(time(0));  


    
    // It generate the number from 1-10 
    int number = rand() % 10+1;
    int user_guess;
    int tries = 0;


    cout<<"Guess The Number"<<endl;

    cout<<"We have selected a random number between 1-10 . See if you can guess it"<<endl;

    while(user_guess != number)
    {
        tries++;
        cout<<"enter a guess"<<endl;
        cin>>user_guess;

        if(user_guess<number)
        {
            cout<<"TOO LOW!!  Please try a greater number"<<endl;
            
        }

        else if(user_guess>number)
        {
            cout<<"TOO HIGH!!  Please try a smaller number"<<endl;
        }

        else{
            cout<<"CORRECT!!  YOU GUESS THE RIGHT NUMBER"<<endl;
            break;
        }
    }


    return 0;

}