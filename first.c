#include<stdio.h>

int main()

{
    int a[4][4]={2,5,3,6,7,2,7,9,0,4,3,6,3,7,8};
    int i,j;

    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        printf("| %d |",a[i][j]);
        printf("\n");


    }


    return 0;
}
