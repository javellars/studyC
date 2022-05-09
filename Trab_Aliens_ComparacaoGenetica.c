#include <stdio.h>

int main(){
    char letra[12], letra2[12];
    int testes=0, cont=0, cont2=0;
    int a=0,a1=0,b=0,b1=0,c=0,c1=0,d=0,d1=0,e=0,e1=0,f=0,f1=0;
    
    scanf("%d",&testes);
    getchar();
    for(cont=0;cont<testes;cont++){
        scanf("%s", &letra);
        scanf("%s", &letra2);
        
        for(cont2=0;cont2<12;cont2++){
            // for 12
            
            if( letra[cont2] == 'A'){
                a++;
            }    
            
            if( letra[cont2] == 'B'){
                b++;
            }
            
            if( letra[cont2] == 'C'){
                c++;
            }
                 
            if( letra[cont2] == 'D'){
                d++;
            }
            
            if( letra[cont2] == 'E'){
                e++;
            }
            
            if( letra[cont2] == 'F'){
                f++;
            }
            
        }
        // fim do for
        
        
        
        for(cont2=0;cont2<12;cont2++){
            // for 12
            

            if( letra2[cont2] == 'A'){
                a1++;
            }


            if( letra2[cont2] == 'B'){
                b1++;
            }    
            
            
            if( letra2[cont2] == 'C'){
                c1++;
            }
            
            
            if( letra2[cont2] == 'D'){
                d1++;
            }
            
            
            if( letra2[cont2] == 'E'){
                e1++;
            }
            
            if( letra2[cont2] == 'F'){
                f1++;
            }
            
        }
        // fim do for
        
        
        /*printf("A: %d e A2: %d\n", a, a1);
        printf("B: %d e B2: %d\n", b, b1);
        printf("C: %d e C2: %d\n", c, c1);
        printf("D: %d e D2: %d\n", d, d1);
        printf("E: %d e E2: %d\n", e, e1);
        printf("F: %d e F2: %d\n", f, f1);*/
        if(a == a1 && b == b1 && c == c1 && d == d1 && e==e1 && f==f1){
            printf("Caracteristicas Iguais\n");
            
        }
        else{
            printf("Caracteristicas Diferentes\n");
        }
        a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, a1 = 0, b1 = 0, c1 = 0, d1 = 0, e1 = 0, f1 = 0;
    }    
    return 0;
}