/*escreva um programa que imprima os números de 1 a 10 usando um loop while*/
int main(){

    int i;
    i = 0;

    while( i <= 10 ){
    printf("%d ", i );
    i++;
    }
}
/*faça um programa que conte de 0 a 20, mas só imprima os números pares*/
int main(){

    int i;
    i = -1;

    while (i < 20){
        i = i + 1;
        if( i%2 == 0 ){
            printf("%d ", i );
        }
    }
}
/*crie um programa que imprima os números de 10 a 1 em ordem decrescente*/
int main(){

    int i;
    i = 10;

    while( i >= 1 ){
    printf("%d ", i );
    i--;
    }
}
/*escreva um programa que solicite a idade do usuário e informe se ele é uma criança, adolescente, adulto ou idoso*/
int main(){
    int i;
    printf("digite sua idade: ");
    scanf("%d", &i );
    while( i < 0 ){
        printf("você tá no saco do seu pai");
        scanf("%d", &i );
    }
    if( i < 14 ){
        printf("você é uma criança desgraçada");
    }else if( i < 18 ){
        printf("já dá pra brincar de fazer neném");
    }else if( i < 60 ){
        printf("acorda, trabalha, come, dorme, trabalha, come, dorme, acorda...");
    }else{
        printf("tá com o pé na cova né véio filha da puta");
    }
}
