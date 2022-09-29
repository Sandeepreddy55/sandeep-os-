#include<stdio.h>
int main()
{
 int n, reverse=0, rem;
 printf("Number: ");
 scanf("%d", &n);
 while(n!=0)
 {
 rem=n%10;
 reverse=reverse*10+rem;
 n/=10;
 }
 printf("Reverse Number: %d",reverse);
 return 0;
}

