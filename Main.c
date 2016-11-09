#include <stdio.h>
#include <string.h>
int plateau(12,12);
int main()
{

}

int plateau()
{
    int i,j;

    for (i=2;i<=11;i++)
    {
       for (j=2;j<=11;j++)
       {
           plateau(i,j)=0;
       }
    }
	
	for (i=2;i<=11;i++)
    {
		plateau(i,0)=i-1;
		plateau(0,i)=i-1;
    }
	
    return 0;
}

int init_jeu()
{
    int i,j,n;
	n=5;
	 for (i=2;i<=6;i++)
    {
       for (j=0;j<=n;j++)
       {
           plateau(i,j)=1;
       }
	   n--;
    }
	n=1;
	 for (i=7;i<=11;i++)
    {
       for (j=11;j<=n;j--)
       {
           plateau(i,j)=2;
       }
	   n--;
    }
    return 0;
}
