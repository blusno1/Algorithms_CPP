//
// Created by root on 16-5-22.
//

#include <stdio.h>
#include <cstdlib>
#include <assert.h>

#define TRUE 1
#define FALSE 0

int find_char(char **pStrings, char value);

int find_char2(char **pStrings, char value);

int main(){
    char *pStrings[]={"arrwerqwe","fdfdfsdfs","xcvbnm"};
    int exist=find_char2(pStrings,'s');
    printf("%d \n",exist);
    for(int i=0;i< sizeof(pStrings);i++){
        printf("%s \n",pStrings[i]);
    }
    return EXIT_SUCCESS;
}

int find_char(char **pStrings, char value){
    char * string;
    while (( string = *pStrings ++) !=NULL){
        while ( *string !='\0'){
            if (*string ++ ==value){
                return TRUE;
            }
        }
    }
    return FALSE;
}

int find_char2(char **pStrings, char value){
    assert( pStrings !=NULL);

    while ( *pStrings != NULL){
        while ( ** pStrings != '\0'){
            if(*(*pStrings)++==value){
                return TRUE;
            }
        }
        pStrings++;
    }
    return FALSE;
}