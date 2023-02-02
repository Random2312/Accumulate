#include <stdio.h>
#include <windows.h>

int main()
{
    int a = 7;
    int b = 5;
    
    printf("交换前\na=%d\nb=%d\n", a, b);
    //method 1数值大会溢出
    a = a + b;
    b = a - b;
    a = a - b;

    //method 2
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("交换两次后\na=%d\nb=%d\n", a, b);
    
    system("pause");
    return 0;
}