#include <string>
#include <iostream>
using namespace std;

int main()
{
	int N, K, i = 0, j = 0;
	
	cin>>N;
	cin>>K;
	int D[N];

	for (i = 0; i < N; i++)
	{
		cin>>D[i];
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
	cout<< M<<""<<'\n';
	
	return 0;
}

