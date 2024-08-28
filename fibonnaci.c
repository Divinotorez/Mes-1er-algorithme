cd #include<stdio.h>
int main (){
    int i,n,prems,second,terme;
    printf("Entrezble nombre de terme de la suite de fibonnacci que vous souhaiez affichez \n");
    scanf("%d",&n);
    prems=0;
    second=1;
    //affichage des termes de la suiteg
    printf("le premier terme de la suite est %d \n",prems);
    printf("le second terme de la suite est  %d \n",second);
if(n>2){
    for(i=3;i<=n;i++){
        terme=second+prems;
        printf("le %d ieme nombre de la suite est %d \n",i,terme);
        prems=second;
        second=terme;
    }
}
return 0;
}