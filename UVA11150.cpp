#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int result = n, empty = n;
		while(empty>=3)
		{
			int bonus = empty/3;
			result += bonus;
			empty = empty%3 + bonus;
		}
		if(empty==2)
		{
			result++;
		}
		printf("%d\n", result);
	}
	return 0;
}