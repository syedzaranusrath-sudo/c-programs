#include<stdio.h>
int main()
{
 char ch;
 ch=0;
 printf("enter any charecter:");
 scanf("%c",&ch);
 switch(ch)
 {
     case 'a':
     case 'A':
     case 'e':
     case 'E':
     case 'i':
     case 'I':
     case 'o':
     case 'O':
     case 'u':
     case 'U':
     printf("the charecter  %c is vowel",ch);
     break;
     default:
     printf("the charecter %c is consonent",ch);
   }
   return 0;
}

    
    
