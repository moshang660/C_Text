#include <stdio.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

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

//������������ֵ
void Exchange(int a, int b)
{
    printf("����ǰ\ta=%d\tb=%d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("������\ta=%d\tb=%d\n", a, b);
}

//int main()
//{
//    Multiplication(10);
//    Exchange(20, 30);
//
//    int arr[10];
//
//}