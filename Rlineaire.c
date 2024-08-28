#include<stdio.h>
#define N 10
int main (){
    float tab[N];
    float nbre;
    int t,i;
    printf('----------------------------------RECHERCHE BINAIRE---------------------------------------');
    printf("entrez %d nombre :",N);
    for(i=0;i<N;i++){
        scanf("%f",&tab[i]);
    }
    printf("entrez le nomre que vous cherchez");
    scanf("%f",&nbre);
    t=0;

    for(i=0;i<N;i++){
        if(nbre==tab[i]){
            printf("%f se trouve à la position %d du tableau ",nbre,i);
        }
        else{
            t=t+1;
        }
    }
    
    if(t==N){
        printf("%f ne se trouve pas dans le tableau ",nbre);
    }
    return 0;
}