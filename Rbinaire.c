#include<stdio.h>
// #define N 4

int main(){
    int i,j,milieu,debut,fin,min,d;
    int N=4;
    float tab[4],temp,nbre;

     printf("----------------------------------RECHERCHE BINAIRE---------------------------------------\n");
    //Remplissage du tableau
    printf("Entrez %d nombres\n",N);
    for(i=0;i<N;i++){
        scanf("%f",&tab[i]);
    }



    for(i=0;i<N;i++){
        printf("|%f ",tab[i]);
    }

    // printf("Je suis la\n");
    //tri du tableau dans l'ordre croissant
   for(i=0;i<N;i++){
        min=tab[i];
        d=i;
            // printf("En cours de tri\n");
        for(j=i;j<N;j++){
            if(tab[j]<min){
                min=tab[j];
                d=j;
            }
        }
        temp=tab[i];
        tab[i]=min;
        tab[d]=temp;
    }

    for(i=0;i<N;i++){
        printf("|%f",tab[i]);
    }

    // printf("Tri termine\n");
    //Recherche binaire
    printf("Entrez le nombre que vous cherchez :\n");
    scanf("%f",&nbre);
    debut=1;
    fin=N;
    milieu=(fin + debut)/2;
    while(tab[milieu]!=nbre && debut<fin){
            printf("No condition\n");
        if(tab[milieu]>nbre){
            printf("Condition1\n");
            fin=milieu-1;
        }else{
             if(tab[milieu]<nbre){
            printf("else if \n");
                debut=milieu+1;
            }
        }
        milieu=(fin+debut)/2;
    }

    if(tab[milieu]==nbre){
        printf("Le nombre cherchee %f se trouve a la position %d du tableau",nbre,milieu);
    }else{ 
        printf("le nombre ne se trouve pas dans le tableau");
    }
    return 0;
}