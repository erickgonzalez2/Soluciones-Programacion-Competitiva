#include <stdio.h>
int main(){
  long long int a,b,c;
  scanf("%lld %lld %lld",&a,&b,&c);
  int d=a*b;
  int f;
  f=c-d;
  if(f<0)f=0;
  int final;
  if(d>c)final=c;
  else final=d;
  printf("%lld %lld\n",final,f);
  return 0;
         }
