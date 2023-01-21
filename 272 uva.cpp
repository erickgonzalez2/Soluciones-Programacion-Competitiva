#include<stdio.h>
int main() {
 char s[10001];
 int i, b= 0;
 while(gets(s)) {
  for(i = 0; s[i]; i++) {
   if(s[i] == '\"') {
    if(!b) {
     printf("``");
    } else
     printf("''");
    b= 1 - b;
   } else
    putchar(s[i]);
  }
  puts("");
 }
    return 0;
}
