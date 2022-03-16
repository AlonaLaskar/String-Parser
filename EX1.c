#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 510

void getTheString(char* str);
void countTheWord(char* str);
void SplitsTheWords(char* str);

int main() {
    char str [LENGTH];
    getTheString(str);
    while ((strcmp(str,"exit\n"))!=0){ //If the word is different from "exit" go into a loop and call the methods
        if((strcmp(str,"\n"))!=0){ //If a space is typed first and that's it
            countTheWord(str);
            SplitsTheWords(str);
        }
            getTheString(str);
    }

    return 0;
}
void getTheString(char* str){//This function getting the input from the user
    printf("please enter a string : ");
    fgets(str,LENGTH,stdin);
}
void countTheWord(char* str){//This function count how many words they have in the input
    int couter=0,i;
    int len=strlen(str);
       for(i=0;i<len;i++){
            if(i==0  && str[i]!= ' ')
                  couter++;
           if(str[i] == ' ' && str[i+1] != ' ' && str[i+1]!='\n')
                 couter++;
    }
    printf("%d words\n", couter);
}

void SplitsTheWords(char* str) {// splits the words into letters counts them and finally allocates a place in memory and prints each word and its number of letters
    int i, countr = 0,statrWord;
    int leni=strlen(str);
    for (i=0;i<leni;i++) {
        if(countr==0){
            statrWord=i;
        }
        if (str[i] != ' '&& str[i]!='\0' && str[i]!='\n') {
            countr++;
        }
        else if (str[i] == ' '|| str[i]=='\n') {
            if (countr > 0) {
                char *p = (char *) malloc(countr * sizeof(char));
                if (p == NULL) {  //Checks if there is place in the memory for allocation
                    printf("Error:could not allocate memory");
                    exit(1);
                }
                strncpy(p,str+statrWord,countr);//copy the words
                printf("%s : %d\n",p,countr);
                free(p);
                countr = 0;
            }
        }
    }
}

