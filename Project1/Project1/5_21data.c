#include <stdio.h>


int arr[10];
int sz = sizeof(arr) / sizeof(arr[0]);

// 数组初始化函数
void init() {
    for (int i = 0; i < sz; i++) {
        arr[i] = i + 1;
    }
}

// 清空数组函数
void empty() {
    for (int i = 0; i < sz; i++) {
        arr[i] = 0;
    }
}

// 数组逆置函数
void reverse() {
    int temp;
    for (int i = 0; i < sz / 2; i++) {
        temp = arr[i];
        arr[i] = arr[sz - i - 1];
        arr[sz - i - 1] = temp;
    }
}

int main()
{
    init();
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

   /* empty();
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");*/

    reverse();
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}