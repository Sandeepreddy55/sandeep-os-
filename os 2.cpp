#include <stdio.h>
#include <stdlib.h>
int main(){
 FILE *f1,*f2;
 char filename[100],c;
 f1=fopen(“C:\\Users\\LOKESH\\OneDrive\\Documents\\Github\\desktop-tutorial\\os 2.cpp\\a.txt”,”r”);
 f2=fopen(“C:\\Users\\VENKATA VARUN\\OneDrive\\Documents\\College\\1st yr\\dbms\\C\\DevCpp\\b.txt”,”w”);
 c=fgetc(f1);
 while(c!=EOF){
 fputc(c,f2);
 c=fgetc(f1);
 }
 printf(“THE CONTENT HAS BEEN COPIED SUCCESFULLY”);
 fclose(f1);
 fclose(f2);
return 0;
} 