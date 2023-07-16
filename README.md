# codsoft
This repository consists  codes and discription of the tasks given by codsoft .
This C++ program is a number guessing game. Here's a description of the code:

The necessary headers iostream, cstdlib, and ctime are included.
The main() function is defined as the entry point of the program.
The srand(time(0)) function is called to seed the random number generator based on the current time. This ensures that the generated random number varies each time the program runs.
The variable number is declared and assigned a random number between 1 and 10 using the expression rand() % 10 + 1.
The variables user_guess and tries are declared to store the user's guess and the number of tries, respectively.
The initial message is displayed to the user using cout.
The program enters a while loop that continues until the user guesses the correct number.
Inside the loop, the user is prompted to enter a guess using cout and cin.
The user's guess is compared with the random number using conditional statements.
If the user's guess is less than the random number, the program displays "TOO LOW!! Please try a greater number" using cout.
If the user's guess is greater than the random number, the program displays "TOO HIGH!! Please try a smaller number" using cout.
If the user's guess is equal to the random number, the program displays "CORRECT!! YOU GUESSED THE RIGHT NUMBER" using cout and breaks out of the loop.
After the loop, the program ends by returning 0 from the main() function.
Overall, this program allows the user to guess a randomly generated number between 1 and 10. It provides feedback on whether the guess is too high or too low and counts the number of tries until the user guesses the correct number.





