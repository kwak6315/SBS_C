#include <stdio.h>

int main(void) {

    int N;
    printf("������ �Է����ּ��� : ");
    scanf("%d", &N);


    //Ȧ���� �� 
    if(N % 2 == 1)
        printf("�Է��� ������ Ȧ�� �Դϴ�!.\n");
    
    //¦���� ��
    else 
        printf("�Է��� ������ ¦���Դϴ�!.\n");


    //  N % 2 == 1 : Ȧ��
    //  N % 2 == 0 :  ¦�� 


    
    return 0;
}