
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>

using namespace std;

#define DEBUG
#define REP(i,a) for(i=0;i<a;i  )
#define FOR(i,a,b) for(i=a;i<=b;i  )
#define VE vector<int>
#define SZ size()
#define PB push_back

#define MAX 10
 char M[MAX][MAX];
 int  n,m;

 int consulta(int i,int j,int k,int l)
 {
     int cont=0;
     int o,p;
        bool band=false;
     FOR(o,i,k)
     {
         FOR(p,j,l)
        {
            if(o>=0&&o<m&&p>=0&&p<m)
            {
                if(M[o][p]=='#')
                {
                    cont  ;

                }
            }
            else
            {
                band=true;
                break;
            }
        }
        if(band)
          break;
     }
    if(band)
      return -1;
    else return cont;

 }
 void atras(int *minx,int *miny,int maxx,int maxy)
 {
    int mx,my;

    mx=*minx;
    my=*miny;

    while(!consulta(mx,my,maxx,maxy))
    {
        mx--;
        my--;
    }
    mx  ;
    my  ;
    *minx=mx;
    *miny=my;

 }
 void adelante(int minx,int miny,int *maxx,int *maxy)
 {
    int mx,my;

    mx=*maxx;
    my=*maxy;
    int r;

    while((r=consulta(minx,miny,mx,my))==0)
    {

        mx  ;
        my  ;

    }
    --mx;
    --my;
    *maxx=mx;
    *maxy=my;

 }
 int area(int x,int y)
 {
    int minx,miny;
    int maxx,maxy;
    minx=maxx=x;
    miny=maxy=y;

    atras(&minx,&miny,maxx,maxy);
    adelante(minx,miny,&maxx,&maxy);

    return maxx-minx 1;
 } int main()
{



    int i=0,j;
    int k,l;
    int max;
    int t;
    int cont;
    scanf("%d",&t);

    REP(i,t)
    {

      scanf("%d",&m);
      REP(j,m)
      {
        scanf("%s",M[j]);

      }
        max=cont=0;
      REP(k,m)
       {

        REP(l,m)
        {

            if(M[k][l]=='.')
            {

                cont=area(k,l);
                if(max<cont)
                    max=cont;

            }
        }

       }
       printf("%d\n",max);

    }

   return 0;
}
