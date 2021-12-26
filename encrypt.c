#include<stdio.h>
int main()
{
    char a[5000];
    int i,j;
    printf("\n Enter any sentence to encrypt:");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        j=a[i]+3;
        printf("%c",j);
    }
    return 0;
}
