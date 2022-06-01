#include <stdio.h>

int main(){
    
    struct retangulos{
        
        int ponto_x_inferior;
        int ponto_y_inferior;
        int ponto_x_superior;
        int ponto_y_superior;
        
    }s1, s2;
    
    scanf("%d %d", &(s1.ponto_x_inferior), &(s1.ponto_y_inferior));
    
    scanf("%d %d", &(s1.ponto_x_superior), &(s1.ponto_y_superior));
    
    scanf("%d %d", &(s2.ponto_x_inferior), &(s2.ponto_y_inferior));
    
    scanf("%d %d", &(s2.ponto_x_superior), &(s2.ponto_y_superior));
    
if(s1.ponto_x_inferior > s1.ponto_x_superior){
    if((s2.ponto_x_inferior <= s1.ponto_x_inferior && s2.ponto_x_inferior >= s1.ponto_x_superior) && (s2.ponto_x_superior >= s1.ponto_x_superior && s2.ponto_x_superior <= s1.ponto_x_inferior) && (s2.ponto_y_inferior >= s1.ponto_y_inferior && s2.ponto_y_inferior <= s1.ponto_y_superior) && (s2.ponto_y_superior <= s1.ponto_y_superior && s2.ponto_y_superior >= s1.ponto_y_inferior) ){
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    
    else{
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
    
}

else{
    if((s2.ponto_x_inferior >= s1.ponto_x_inferior && s2.ponto_x_inferior <= s1.ponto_x_superior) && (s2.ponto_x_superior <= s1.ponto_x_superior && s2.ponto_x_superior >= s1.ponto_x_inferior) && (s2.ponto_y_inferior >= s1.ponto_y_inferior && s2.ponto_y_inferior <= s1.ponto_y_superior) && (s2.ponto_y_superior <= s1.ponto_y_superior && s2.ponto_y_superior >= s1.ponto_y_inferior) ){
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    
    else{
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
}    
    
    
    return 0;
}