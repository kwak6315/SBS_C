#include <stdio.h>

int main (void) {
    int a = 10;
    int b = 20;
    int c;

    //전위연산자(prrefix)
    // :  변수 앞에 작성하는 증감연산자
    // - 대부분의 연산자보다 연산자 
    // 우선순위가 높다. 
    // 1. ++ 2. +  3. = 

    c=  ++a + b;
    printf("c = %d\n",c):      //c=?

    int x = 10;
    int y = 20;
    int z;

    //후위연산자 
    // : 변수뒤에 작성하는 증감연산자 
    // - 대부분의 연산자보다 연산자 
    //    우선 순위가 낮다. 
    // 1. +   2. =  3. +=ㄱ
    z = x++ + y;
    printf("z" = %ds\n", z);   // z= ?


    return 0;
}