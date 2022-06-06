#include <stdio.h>
#include <math.h>

float volume_esfera(){
    float raio, volume;
    
    scanf("%f", &raio);
    
    volume = (4*(3.14159)*(pow(raio,3)))/3;
    
    return volume;
}


int main(){
    
    printf("%.2f\n", volume_esfera());
    
    return 0;
}