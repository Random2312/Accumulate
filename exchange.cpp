#include <stdio.h>
#include <windows.h>

int main()
{
    int a = 7;
    int b = 5;
    
    printf("����ǰ\na=%d\nb=%d\n", a, b);
    //method 1��ֵ������
    a = a + b;
    b = a - b;
    a = a - b;

    //method 2
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("�������κ�\na=%d\nb=%d\n", a, b);
    
    system("pause");
    return 0;
}