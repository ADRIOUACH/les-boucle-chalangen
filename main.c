#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,c;
    printf("entre le nombre n");
    scanf("%d",&n);
    printf("table de multiplication de 1 a 10 et\n");
     for(i=0;i<=10;i++){
       c = i *n;
     printf("%d * %d = %d\n",n,i,c);
     }
    return 0;
}
