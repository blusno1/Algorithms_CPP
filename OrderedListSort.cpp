//
// Created by root on 16-5-15.
//

//利用宏求数组的长度
#include <cstdio>

#define LENGTH(s) (sizeof(s) / sizeof(int))


bool sort( int a, int const b[],int bSize,int* index){
    for(int j=(*index);j<bSize;j++){
        *index = j;
        if(a==b[j]){
            *index++;
            return true;
        }
    }
    return false;
}

int main(){
    int c[]={0};
    int a[4]={2,5,5,5};
    int b[6]={2,3,4,5,5,7};
    int index = 0;
    int cIndex =0;
    puts("两个数组中相等的元素为：");
    for (int i = 0; i < LENGTH(a); ++i) {
        if (sort(a[i],b,LENGTH(b),&index)){
            c[cIndex]=a[i];
            printf("cIndex: %d\n",cIndex);
            printf("%d\n",c[cIndex]);
            cIndex++;
        }
    }
    return 0;
}