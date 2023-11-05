#include<stdio.h>
int main () {
	
int n;	
int fact = 1;	
printf("istediðiniz faktoriyel sayýyý giriniz:");	
scanf("%d",&n);	
	
while(n!=0){
printf("%d",n);
fact=fact*n;	
n--;	
}
printf("%d",fact);	
}
	

