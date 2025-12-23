#include <stdio.h>
int main()
{
    int n,remainder,reverse=0,palindrome;
    printf("enter n value:");
    scanf("%d",&n);
    palindrome=n;
    while (n!=0)
    {
        remainder = n % 10;
        reverse=reverse*10+remainder;
        n = n / 10;
    }
    if(palindrome==reverse)
     printf("%d is palindrome number",palindrome);
     else
     printf("%d is not  palindrome number",palindrome);
     return 0;
}
