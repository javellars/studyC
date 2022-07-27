#include <stdio.h>
#include <math.h>

float volume_esfera(){
        float volume,p,r;
        scanf("%f", &r);
        p = 3.14;
        volume = (4*(3.14)*(pow(r,3)))/3 ;
    return volume;      
}

int main()
{
    printf("o volume é:%f", volume_esfera());
    

    return 0;
}
