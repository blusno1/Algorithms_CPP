//
// Created by root on 16-5-15.
//

//利用宏求数组的长度
#include <cstdio>

#define LENGTH(s) (sizeof(s) / sizeof(int))


bool sort( int a, int const b[],int* index){
    int j=(*index);
    for(;j<LENGTH(b);j++){
        puts("index:");
        printf("%d\n",j);
        puts("第一个数组中的值为：");
        printf("%d\n",a);
        puts("第二个数组中的值为：");
        printf("%d\n",b[j]);
        if(a==b[j]){
            j++;
            *index = j;
            return true;
        }
    }
    *index = j;
    return false;
}

int main(){
    int c[]={0};
    int a[4]={2,5,5,5};
    int b[6]={2,3,4,5,5,7};
    int index = 0;
    int cIndex =0;
    for (int i = 0; i < LENGTH(a); ++i) {
        int t = a[i];
        if (sort(t,b,&index)){
            c[cIndex]=t;
            cIndex++;
        }
    }
    for (int j = 0; j <LENGTH(c) ; ++j) {
        puts("两个数组中相等的元素为：");
        printf("%d\n",c[j]);
    }
    return 0;
}