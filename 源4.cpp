#include<stdio.h>
#include<math.h>
int main()
{
	int n, k, i, m = 0;
	for (i = 101; i <= 200; i = i + 2)
	{
		k = sqrt(i);
		for (n = 2; n <= k; n++)
		{
			if (i % n == 0)
				break;
		}
		if (n >= k + 1)
		{
			printf("%d ", i);
		}
	}
}