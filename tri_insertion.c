#include<stdio.h>
#define N 10
int main(){
    int i,j;
    float temp,tab[N];
    //Initialisation
    printf("Entrez %d nombres\n",N);
    for(i=0;i<N;i++){
        scanf("%f",&tab[i]);
    }
    //tri
    for(i=1;i<N;i++){
        temp=tab[i];
        j=i-1;
        // Recherche de la position de l'éléments i parmis les 0 à i-1 éléments
        while(temp<tab[j] && j>=0){
            temp=tab[j+1];
            tab[j+1]=tab[j];
            tab[j]=temp;
            j=j-1;
            }
    }
    //tableau trié
    printf("le tableau trie est:\n");
    for(i=0;i<N;i++){
    printf("|%f",tab[i]);
    }
    return 0;
}
