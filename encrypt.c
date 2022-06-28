#include<stdio.h>
int main()
{
    char a[5000];
    int i,j;
    printf("\n Enter the message to encrypt:");
    scanf("%[^\t]",&a);
    printf("\n Click on tab button after entering the message");
    for(i=0;a[i]!='\0';i++)
    {
        j=a[i]+3;
        printf("%c",j);
    }
    return 0;
}
