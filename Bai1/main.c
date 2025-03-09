#include<stdio.h>
void main()
{
	int mang[5] = { 5,2,3,49,5};
	int tong = 0;
	int max = mang[0];
	for (int i = 0; i < 5; i++)
	{
		if (mang[i] >= max)
		{
			max = mang[i];
		}
	}
	printf("%d", max);
}