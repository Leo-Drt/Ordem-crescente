#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int sub;
    printf("Numeros em ordem crescente\n");
    printf("Digite 3 numeros quaisquer que logo serao posto em ordem crescente!\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>c){
        sub = c;
        c = a;
        a = sub;
    }
    if(a>b){
        sub = b;
        b = a;
        a = sub;
    }
    if(b>c){
        sub = c;
        c = b;
        b = sub;
    }


    printf("A ordem crescente eh: %d %d %d",a,b,c);

    return 0;
}
