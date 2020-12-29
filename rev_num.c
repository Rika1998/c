#include<stdio.h>
void reverse(char *a)
{
    if(*a)
    {
        reverse(a+1);
        printf("%c",*a);
    }
}
int main()
{
    char a[50];
    printf("Enter the number");
    scanf("%[^\n]c",a);
    reverse(a);
    return 0;
}
