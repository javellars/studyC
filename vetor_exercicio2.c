#include <stdio.h>

int main()
{
    int valores[10],quantidade[10],i,v,q,pv,ft;
    
for(v=0;v<10;v++){
    scanf("%d", &valores[v]);
}

for(q=0;q<10;q++){
    scanf("%d", &quantidade[q]);
}

for(i=0;i<10;i++){
    ft += quantidade[i]*valores[i];//ft vai armazenar o valor da multiplicação, e depois disso vai somar com o próximo valor da multiplicação, isso até todos os dados serem computados
    pv += quantidade[i];//pv vai armazenar o valor da q[i] e na proxima volta do vetor, vai somar com q na proxima posição
    
}

printf("o faturamento total da loja foi %d\n e o total de produtos vendidos foi %d\n", ft,pv);
    return 0;
}
