#include <stdio.h>


int arr[10];
int sz = sizeof(arr) / sizeof(arr[0]);

// �����ʼ������
void init() {
    for (int i = 0; i < sz; i++) {
        arr[i] = i + 1;
    }
}

// ������麯��
void empty() {
    for (int i = 0; i < sz; i++) {
        arr[i] = 0;
    }
}

// �������ú���
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