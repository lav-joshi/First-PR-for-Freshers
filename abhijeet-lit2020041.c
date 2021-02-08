
#include<stdio.h>


int main()
{
    int i,j,k=1,n;
    printf("no to row\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        if((n%2)!=0)
        {
         printf("%d",k);
         k--;   
        }
        

        }
         
    }



}
