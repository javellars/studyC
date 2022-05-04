#include <stdio.h>

int main()
{

    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,par=0,impar=0;
    
//for(a=1;a<=10;a++){
    scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    
if(a%2==0)
    par++;

else
    impar++;

if(b%2==0)
    par++;

else
    impar++;

if(c%2==0)
    par++;

else
    impar++;

if(d%2==0)
    par++;

else
    impar++;

if(e%2==0)
    par++;

else
    impar++;

if(f%2==0)
    par++;

else
    impar++;

if(g%2==0)
    par++;

else
    impar++;

if(h%2==0)
    par++;

else
    impar++;

if(i%2==0)
    par++;

else
    impar++;

if(j%2==0)
    par++;

else
    impar++;

    printf("%d pares, %d impares\n" ,par,impar);
    //break;
//}
    return 0;
}
