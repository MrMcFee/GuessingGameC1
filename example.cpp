#include <iostream>

 using namespace std;

 int main()
 {
     //variables
   srand(time(NULL));
   bool running = true;
   int input = 0;
   int inputNum = 0;
   char input2 = 'n';
   cout << "Guess an integer between 0 and 100: " << endl;
     //while loop keeping game running
   while (running == true) {
     int randNum = rand() % 101;//generates random number
     cout << randNum << endl;
       //checks if the random number is the same as the user input 
     while (randNum != input) {
       cin >> input;
       cout << "You entered: " << input << endl;
         //if input is less than the random number and also in bottom range of the set given
       if (input < randNum && input > -1) {
	 cout << "Your number is too small, try again: " << endl;
	 inputNum++;
       }
         //if input is less than the random number and also in top range of set given
       else if (input > randNum && input < 101) {
	 cout << "Your number is too big, try again: " << endl;
	 inputNum++;
       }
         //if input is equal to the random number
       else if (input == randNum) {
	 inputNum++;
	 cout << "You guessed the number!" << endl;
	 cout << "Number of guesses: " << inputNum << endl;
       }
         //if input is anything other than an integer within the set given
       else {
       cout << "Your number isn't an integer between the range of 0 and 100. " << endl;
       }
     }
     cout << "Play again? (y/n)" << endl;
     cin >> input2;
       //prompts user to type y/n if they want to play again
     if (input2 == 'y') {
       running = true;
       inputNum = 0;
     }
     else {
       running = false;
     }
   }
     return 0;
 }
