#include <stdio.h>

int main() {
    int vetor[6]= {5, 4, 9, 6, 3, 2}; 
    int i, j, temp;


for(i=5;i>0;i--){
    for(j=0;j<i;j++){
        if(vetor[j]>vetor[j+1]){
            temp= vetor[j];
            vetor[j]=vetor[j+1];
            vetor[j+1]=temp;

        }
        
    }
}
for(j=0;j<6;j++){
    printf("%d", vetor[j]);
}
return 0;
}