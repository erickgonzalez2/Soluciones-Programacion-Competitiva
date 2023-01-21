#include<stdio.h>
int main()
{
    int a, b, c,d,e,f,g,h,i,j,t,n;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    for(t=1;t<=n;t++)
    {

        while (scanf("%d %d %d %d %d %d %d %d %d %d",&a, &b, &c,&d,&e,&f,&g,&h,&i,&j)==10)
        {
                if(a>b && b>c && c>d && d>e && e>f && f>g && g>h && h>i && i>j)
                {
                    printf("Ordered\n");
                }
                else if (a<b && b<c && c<d && d<e && e<f && f<g && g<h && h<i && i<j)
                {
                    printf("Ordered\n");
                }
                else
                {
                    printf("Unordered\n");
                }
        }
    }
    return 0;
}
