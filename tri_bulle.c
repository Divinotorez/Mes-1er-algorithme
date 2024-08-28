#include<stdio.h>
#define N 10
int main (){
    int i,j;
    float tab[N];
    float temp;
    // Remplissage du tableau
    printf("Entrez %d nombre \n",N);
    for(i=0;i<N;i++){
        scanf("%f",&tab[i]);
    }
    // Tri du tableau en comparant a chaque fois deux case successives
    for(i=0;i<N;i++){
        for(j=0;j<N ;j++){
            if(tab[j]>tab[j+1]){
                temp=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=temp;
            }
        }
    }
    // affichage du nouveau tableau
printf("le tableau trie est: \n");
for(i=0;i<N;i++){
    printf("| %f",tab[i]);
}
return 0;
}