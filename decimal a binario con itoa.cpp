#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long long int num;
    char binario[63];
    scanf("%llu", &num);
    ltoa(num, binario, 2);
    printf("%s\n", binario);
    return 0;
}
