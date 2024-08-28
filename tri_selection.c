 #include<stdio.h>
#define N 10
int main (){
    int i,j,d;
    float min,tab[N],temp;
    printf("Entrez %d nombre:\n",N);
    // Remplissage du tableau
    for(i=0;i<N;i++){
     scanf("%f",&tab[i]);
    }
    // tri
    for(i=0;i<N;i++){
        min=tab[i];
        d=i;
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
    // Tableau trié
    printf(" le tableau trie est: \n");
    for(i=0;i<N;i++){
        printf ("| %f",tab[i]);
    }
    return 0;
}