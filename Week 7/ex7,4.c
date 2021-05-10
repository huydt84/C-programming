# include <stdio.h>
# include <math.h>


int main()
{
	int n, i, j;
	printf("Nhap n: ");
	scanf("%d", &n);
	int prime[n+1];
	for(i = 1; i <= n; i++)
	{
		prime[i] = i;
	}
	for(i = 2; i*i <= n; i++)
	{
		if(prime[i] != -1)
		{
			for(j = i*i; j <=n ; j += i)
				prime[j] = -1;
		}
	}
	printf("Day so nguyen to: \n");
	for(i=2; i <= n; i++)
	{
		if(prime[i] != -1)
		{
			printf("%d ", i);
		}
	}
}

