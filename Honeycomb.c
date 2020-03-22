#include <stdio.h>

void top_row(int);
void sec_row(int);
void rem_row(int,int);

int main(void)
{
    unsigned int n;
    int rows,cols,i;

    printf("Enter positive value of n: ");
    scanf("%u",&n);
    rows=n+2;
    cols=4*n-1;
    top_row(cols);
    sec_row(cols);
    for(i=3;i<=rows;i++)
    {
        rem_row(i,4*n-1);
        n--;
    }
    getchar();
    getchar();
    return 0;
}

void top_row(int cols)
{
    int i,j=1;
    for(i=1;i<=cols;i++)
    {
        if(i==(4*j-2))
        {
            printf("_");
            j++;
        }
        else printf(" ");
    }
    printf("\n");
}

void sec_row(int cols)
{
    int i,j=1;
    for(i=1;i<=cols;i++)
    {
        if(i==4*j)
        {
            printf("_");
            j++;
        }
        else
        {
            printf("/ \\");
            i+=2;
        }
    }
    printf("\n");
}

void rem_row(int rows, int cols)
{
    int i,j=1;
    if(rows>=4)
    {
        for(i=1;i<=2*rows-6;i++)
            printf(" ");
    }
    for(i=1;i<=cols;i++)
    {
        if(i==4*j)
        {
            printf(" ");
            j++;
        }
        else
        {
            printf("\\_/");
            i+=2;
        }
    }
    printf("\n");
}