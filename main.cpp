#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std; 

int get_guess(){ 
  int guess; 
  cout << "Guess a number from 1 to 100!" <<endl; 
  cin >> guess; 
  while (guess < 1 || guess > 100)
      {
        cout << "Expected value from 1 to 100. " <<endl; 
      }
  return guess; 
}


void play_game() {
 int guess;
 int count =0; 
 int number;  
 
 number= rand() %100 +1; 
 
 cout << endl;
 cout << "The Guessing Game" <<endl; 
 cout << "Guess a number from 1 to 100! " <<endl;
 cout << "You may have up to 10 guesses." <<endl; 

 do { 
   guess= get_guess();  
   count++; 
   if (guess>number)
      cout << "Too high! Guess Lower!" <<endl; 
  if (guess < number)
    cout << "Too Low ! Guess Higher!" <<endl; 
  if (guess == number)
    cout << "You Guessed the number in " << count << " tries" <<endl;
 } while (guess != number && count < 10);

 if (count >= 10)
{     cout << "You have exhausted all your attempts!"; 
    cout << "The correct number was " <<number <<"." <<endl;} 
}

int main ()  { 
  char response; 
  srand(time(0)); 
  do {
    play_game(); 
    cout << "Do you want to play the game again ? (y/n) " <<endl; 
    cin >> response; 
  } while (response == 'y'); 

  return 0; 
}