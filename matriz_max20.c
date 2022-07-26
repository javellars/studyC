#include <stdio.h>
//#define ml 20
//#define mc 20

int main(){
    
    int nc,nl,l,c;
    
    scanf("%d %d", &nl,&nc);
    
    int M[nl][nc];
    
    if(nl && nc>20){
        printf("digite valores menores que 20:\n");
        scanf("%d %d", &nl,&nc);
        
    }
    
for(l=0;l<nl;l++){
    for(c=0;c<nc;c++){
        scanf("%d", &M[l][c]);
    }
}

for(l=0;l<nl;l++){
    for(c=0;c<nc;c++){
        printf("%d",M[l][c]);
    }

printf("\n");   
    
    
}


    
    return 0;
}
