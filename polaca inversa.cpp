#include <stdio.h>

bool isOperator(char c)
{
if (c=='+' || c=='-' || c=='*' || c=='/' || c=='^' || c=='(' || c==')')
return true;

return false;
}

int precedencia (char x, char y)
{
int prec1, prec2;

switch(x)
{
case '+':
prec1=1;
break;

case '-':
prec1=2;
break;

case '*':
prec1=3;
break;

case '/':
prec1=4;
break;

case '^':
prec1=5;
}

switch(y)
{
case '+':
prec2=1;
break;

case '-':
prec2=2;
break;

case '*':
prec2=3;
break;

case '/':
prec2=4;
break;

case '^':
prec2=5;
}

return prec1-prec2;
}

int main()
{
char *inf = new char[401];
char *post = new char[401];
char *pila = new char[200];
int ptr=0;

int n, j=0;

scanf("%d", &n);

while(n>0)
{
scanf("%s", inf);

for(int i=0; inf[i]!='\0'; i++)
{
if (!isOperator(inf[i]))
{
post[j]=inf[i];
j++;
}
else if (inf[i]=='(')
{
pila[++ptr]='(';
}
else if (inf[i]==')')
{
while(pila[ptr]!='(' && ptr>0)
{
post[j]=pila[ptr--];
j++;
}
if (pila[ptr]=='(')
ptr--;
}
else
{
while(precedencia(inf[i], pila[ptr]) < 0 && pila[ptr]!='(' && ptr>0)
{
post[j]=pila[ptr--];
j++;
}
pila[++ptr]=inf[i];
}

}

while(ptr>0)
{
post[j]=pila[ptr--];
j++;
}
post[j]='\0';
printf("%s\n", post);

j=0;ptr=0;
n--;
}
return 0;
}
