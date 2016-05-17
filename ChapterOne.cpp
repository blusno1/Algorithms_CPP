//
// Created by root on 16-5-17.
//
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MAX_LEN     1001

void QuestionTwo(){
    int line = 0;
    bool AT_FIRST = true;
    int cInput;
    while ((cInput=getchar())!=EOF){
        if (AT_FIRST){
            AT_FIRST = false;
            line++;
            printf("%d\n",line);
        }
        putchar(cInput);
        if (cInput == '\n'){
            AT_FIRST = true;
        }
    }
}

void QuestionThree(){
    char chechsum = -1;
    int cInput;
    while ( (cInput = getchar()) !=EOF ){
        putchar(cInput);
        chechsum += cInput;
    }

    printf("%d\n",chechsum);

}

void QuestionFour(){
    char input[MAX_LEN];
    int length;
    char longest_input[MAX_LEN];
    int longest_length=-1;

    while (gets(input)!=NULL){
        length = (int)strlen(input);
        if (length > longest_length){
            longest_length = length;
            strcpy(longest_input,input);
        }
        if(longest_length > 0) {
            puts(longest_input);
        }
    }
}


int main(){
    QuestionTwo();
    QuestionThree();
    QuestionFour();
    return EXIT_SUCCESS;
}