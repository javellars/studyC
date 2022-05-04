#include <stdio.h>

int
main ()
{

  int a = 0, c=0, par = 0, impar = 0;


//estrutura for


for(c=1;c<=10;c++){ //c=1> representa onde começa a contar | c<=10> representa até onde o laço vai rodar | c++> representa o treco que vai fazer ele ir pra próxima casa
  scanf ("%d", &a);

  if (a % 2 == 0)
    par++;

  else
    impar++;

}

  printf ("%d pares, %d impares\n", par, impar); // aqui ele roda depois de passar da casa 10



//estrutura while


int count=1;
while(count<=10){ //praticamente a mesma estrutura só que bagunçada
    printf("%d\n", count);
    count++;
}

  printf ("%d pares, %d impares\n", par, impar); // mesma coisa

  return 0;
}

