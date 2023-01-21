#include <stdio.h>
int main()
{
	int N, K, i = 0, j = 0;
	
	scanf("%d %d",&N,&K);
	int D[N];
	for (i = 0; i < N; i++)
	{
		scanf("%d",&D[i]);
	}
	int M = 0, S = 0;
	for (i = 0; i <= N - K; i++)
	{
		S = 0;
		for (j = i; j < i + K; j++)
		{
			S += D[j];
		}
		if (S > M)
		{
			M = S;
		}
	}
	printf("%d \n",M);
	return 0;
}

