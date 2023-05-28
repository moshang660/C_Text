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
	printf("请输入数字：");
	scanf("%u", &num);
	print(num);//打印输入数字的每一位
	return 0;
}