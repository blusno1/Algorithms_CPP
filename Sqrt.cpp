//
// Created by root on 16-5-13.
//

#include <cstdio>
#include <cfloat>
#include <cmath>

//神奇算法
float cal(float x){
    float xhalf = 0.5f*x;
    int i = *(int*)&x; // get bits for floating VALUE
    i = 0x5f375a86- (i>>1); // gives initial guess y0
    x = *(float*)&i; // convert bits BACK to float
    x = x*(1.5f-xhalf*x*x); // Newton step, repeating increases accuracy
    return 1/x;
}

//常规牛顿迭代法
float NewtonSqrt(float x){
    if (x < 0) {
        printf("负数没事开什么方");
        return -1;
    }
    if (x == 0)
        return 0;

    float _avg = x;
    float last_avg = FLT_MAX;
    static float _JINGDU = 1e-6;

    while (fabs(_avg-last_avg)>_JINGDU){
        last_avg = _avg;
        _avg = (_avg + x / _avg) / 2;
    }
    return _avg;
}

int main()
{
    printf("%lf",cal(3));
    printf("%lf",NewtonSqrt(3));
    return 0;
}

