 #include<stdio.h>
int main()
{
   int n1=10,n2=30,max;
   max=(n1>n2)?n1:n2;
   while(1)
   {
       if(max%n1==0&&max%n2==0)
       {
           printf("lcd is %d",max);
           break;
       }
       max=max+1;
    }
}
