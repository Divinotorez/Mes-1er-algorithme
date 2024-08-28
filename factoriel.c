#include<stdio.h>
int main(){
int a,fact,i;
   printf("entrez le nombre que vous souhaitez calculer le factoriel:\n");
   scanf("%d", &a);
   while(a<0){
    printf("entrez un entier positif");
    scanf("%d",&a);
   }
   fact=1;
   for(i=1;i<=a;i++){ 
    fact=fact*i;
   }
   printf( "%d!=%d",a,fact);
 return 0;
}