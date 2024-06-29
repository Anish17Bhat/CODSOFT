#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    //generating a random number and storing it in random variable
    int random=(rand()%100)+1;          
    int guess;
    //tries=The no of time the player has tried to guess the number(initializing to zero)
    int tries=0;              
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    while(random!=guess){
        cout<<"Guess the random number that has been generated (between 1 to 100): ";
        cin>>guess;
        tries++;
        //checking if the guessed number is out of range(1 to 100)
        if(guess<1 or guess>100){
            cout<<"\"Please enter a number between 1 to 100\""<<endl<<endl;
            continue;
        }
        //If the guessed number is too high
        if(random<guess){
            if(random==(guess-2)||(random==(guess-1))){
                cout<<"\"You are close! Go a little bit low.\""<<endl<<endl;
                continue;
            }
            cout<<"\"The number you guessed is too high. Try Again!\""<<endl<<endl;
            continue;
        }
        //If the guessed number is too low
        else if(random>guess){
            if(random==(guess+2)||(random==(guess+1))){
                cout<<"\"You are  close! Go a little bit high.\""<<endl<<endl;
                continue;
            }
            cout<<"\"The number you guessed is too low. Try Again!\""<<endl<<endl;
            continue;
        }
    }
    // Correct guess
    cout<<"\"Congratulations! You have guessed the correct number.\""<<endl;
    cout<<"Number of tries : "<<tries<<endl;


    return 0;
}