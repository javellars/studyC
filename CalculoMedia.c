#include <stdio.h>

int main() {
   int n1,n2,n3,media;
   scanf("%d %d %d", &n1,&n2,&n3);

media=(n1+n2+n3)/3;


if((media>6)&&(n1>2)&&(n2>2)&&(n3>2)){
    printf("a media foi %d e o aluno foi aprovado!", media);
}

else{
    int ne,mediaexame;
    printf("Digite a nota do exame:");
    
    scanf("%d", &ne);
    mediaexame=(media+ne)/2;
    if(mediaexame>=5){
        printf("aprovado!");
    }
    else{
        printf("reprovado!");
    }
}
   
return 0; 
}
