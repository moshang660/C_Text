#include <stdio.h>


print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}
int main()
{
	unsigned int num = 0;
	printf("���������֣�");
	scanf("%u", &num);
	print(num);//��ӡ�������ֵ�ÿһλ
	return 0;
}