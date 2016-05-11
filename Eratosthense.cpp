//
// Created by root on 16-5-11.
//
#include <cstdio>
#include <math.h>
#include <cstdlib>

void cal(int m){

    int* intArray;
    intArray = (int*) calloc(m+1,sizeof(int));
    for (int i = 0; i <= m; ++i) {
        intArray[i] = i;
    }
    intArray[1]=0;

    for (int j = 2; j < sqrt(m); j++) {
        for (int i = j+1; i <= m ;i++) {
            if(intArray[i]!=0&&intArray[i]%j==0)
                intArray[i]=0;
        }
    }

    for (int k = 0,n=0; k < m ; k++) {
        if(intArray[k]!=0){
            printf("%d\t", intArray[k]);
            if (++n%10==0)
                printf("\n");
        }
    }
    free(intArray);
}

int main(){
    int num = 1000000;

    cal(num);

    return 0;
}
