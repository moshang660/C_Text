#include <stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

void Multiplication(int n)
{
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            printf("%d*%d=%d\t", y, x, x * y);
        }
        printf("\n");
    }
}

//交换两个数的值
void Exchange(int a, int b)
{
    printf("交换前\ta=%d\tb=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("交换后\ta=%d\tb=%d\n", a, b);
}

//int main()
//{
//    Multiplication(10);
//    Exchange(20, 30);
//
//    int arr[10];
//
//}