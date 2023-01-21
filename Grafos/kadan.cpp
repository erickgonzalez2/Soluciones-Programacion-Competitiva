#include <bits/stdc++.h>
using namespace std;
long long int kadane(long long int* arr, long long int* start, long long int* finish, long long int n)
{
    long long int sum = 0, maxSum = INT_MIN, i;

 

    *finish = -1;

 

    long long int local_start = 0;

 

    for (i = 0; i < n; ++i)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
            local_start = i + 1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            *start = local_start;
            *finish = i;
        }
    }

 

    if (*finish != -1)
        return maxSum;

 

    maxSum = arr[0];
    *start = *finish = 0;

 

    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
            *start = *finish = i;
        }
    }
    return maxSum;
}
void findMaxSum(long long int n)
{
    long long int M[n][n];
    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<n;j++){
            cin>>M[i][j];
        }
    }
    long long int maxSum = INT_MIN,finalLeft,finalRight,finalTop,finalBottom;
    long long int left, right, i;
    long long int temp[n], sum, start, finish;
    for (left = 0; left < n; ++left) {
        memset(temp, 0, sizeof(temp));
        for (right = left; right < n; ++right) {
            for (i = 0; i < n; ++i)
                temp[i] += M[i][right];
            sum = kadane(temp, &start, &finish, n);

 

            if (sum > maxSum) {
                finalLeft = left;
                finalRight = right;
                finalTop = start;
                finalBottom = finish;
                maxSum = sum;
            }
        }
    }

 

    cout<< maxSum << endl;
}
int main()
{
    long long int n;
    cin>>n;
    findMaxSum(n);
    return 0;
}
