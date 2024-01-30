#include <stdio.h>
int main(){
    float gastocliente, gastototal, txg;
    printf("Digite o valor de consumação:\n");
    scanf("%f", &gastocliente);
    txg = (gastocliente * 0,10);
    gastototal = gastocliente + txg;
    printf("O valor total é: %2.f", gastototal);
return 0;
}
