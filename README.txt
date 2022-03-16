String Parser
==Description==
The program gets strings in a loop from the user and print the number of words in the string. Then split it to words and print the word and there length. 
Functions:
void getTheString(char* str)- This function asks the user to enter the string he wants and receives the input from him.
void countTheWord(char* str)- This function takes the input it received from the user and starts counting when word starts and when a word ends.
And finally returns the number of words in the input
void SplitsTheWords(char* str)- This function takes our input and divides all the words into letters.
Assigns a place in memory for them and finally returns each word in a separate line with the number of letters in each word
==Program Files==
- ex1.c contain the main and their functions.
==How to compile?==
compile: gcc ex1.c -o ex1
run: ./ex1
input:
The user enters a sentence consisting of a number of words to his choose. 
output:
The output will be the amount of words in this sentence.
And a line below each word will appear in a separate line with the amount of letters in it!

