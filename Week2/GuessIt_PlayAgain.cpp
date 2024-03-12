#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateNumber(){
    return rand() % 100 + 1;
}
int chooseNumber(){
    int guess;
    cout << "Your number is: ";
    cin >> guess;
    return guess;
}
void printAnswer(int guess, int secretNumber){
    if(guess > secretNumber) cout << "too big" << endl;
    else if(guess < secretNumber) cout << "too small" << endl;
    else cout << "You Win! " << endl;
}
void playGuessIt(){
    int secretNumber = generateNumber();
    int guess;
    do{
        guess = chooseNumber();
        printAnswer(guess, secretNumber);
    } while(guess != secretNumber);
}

int main()
{
    srand(time(0));
    char isContinued;
    do{
        playGuessIt();
        cout << "Do you want to play again(y/n)? ";
        cin >> isContinued;
    } while(isContinued == 'Y' || isContinued == 'y');

    return 0;
}
