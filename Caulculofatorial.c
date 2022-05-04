#include <stdio.h>

int main(){
    
    int n,s,c,f;
    int resp1,resp2,resp3;
    
    scanf("%d", &n);
    scanf("%d", &s);
    c=n-s;
    resp1=1,resp2=1,resp3=1;
    
for(f=1; f<=n; f++)
    resp1 *=f;

for(f=1; f<=s; f++)
    resp2 *=f;

for(f=1; f<=c; f++)
    resp3 *=f;

//teste = resp1/(resp2*resp3);
printf("%d\n", resp1/(resp2*resp3));
    
    return 0;
}
