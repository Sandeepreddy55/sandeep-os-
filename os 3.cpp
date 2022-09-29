#include <stdio.h>
#include <stdlib.h>
#define max 100
int main()
{
 int n,i,ii, product,gcd,lcm,arr[max],j=1;
 printf(" N values : ");
 scanf("%d",&n);
 for(i=0;i<n;i++){
 printf("Number %d: ",(i+1));
 scanf("%d",&arr[i]);
 }
 gcd = arr[0];
 while(j<n){
 if(arr[j]%gcd==0){
 j++;
 }
 else{
 gcd=arr[j]%gcd;
 }
 }
 printf("GCD = %d \n", gcd);
 product=1;
 for(ii=0;ii<n;ii++){
 product=product*arr[ii];
 }
 lcm=product/gcd;
 printf("LCM = %d",lcm);
 return 0;
}
