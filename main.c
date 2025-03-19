/*escreva um programa que imprima os números de 1 a 10 usando um loop while*/
int main(){
    int i = 1;
    while( i <= 10 ){
        printf("%d ", i );
        i++;
    }
}
/*crie um programa que solicite um número ao usuário e imprima se ele é positivo, negativo ou zero*/
int main(){
    int i;
    printf("digite um número: ");
    scanf("%d", &i );
    if( i < 0 ){
        printf("%d é um número negativo", i );
    }else if( i > 0 ){
        printf("%d é um número positivo", i );
    }else{
        printf("%d é ZERO!", i );
    }
}
/*faça um programa que conte de 0 a 20, mas só imprima os números pares*/
int main(){
    int i = -1;
    while (i < 20){
        i = i + 1;
        if( i%2 == 0 ){
            printf("%d ", i );
        }
    }
}
/*crie um programa que imprima os números de 10 a 1 em ordem decrescente*/
int main(){
    int i = 10;
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
/*crie um programa que conte de 1 a 100, mas só imprima os números divisíveis por 7*/
int main(){
    int n = 1;
    while(n <= 100){
        if(n % 7 == 0){
            printf("%d ", n );
            n++;
        }else{
            n++;
        }
    }
}
/*faça um programa que peça dois números ao usuário e imprima o maior deles*/
int main(){
    int i;
    int p;
    printf("digite dois números: ");
    scanf("%d \n %d", &i, &p);
    if(i>p){
        printf("%d é maior que %d, seu cocô", i, p );
    }else if(p>i){
        printf("%d é maior que %d, seu merda", i, p );
    }else{
        printf("os dois números são iguais, seu bosta");
    }
}
/*crie um programa que peça um número ao usuário e imprima se é ímpar ou par*/
int main(){
    int i;
    printf("digite um número: ");
    scanf("%d", &i );
    if(i % 2 == 0){
        printf("%d é par, seu filha da puta miserável", i );
    }else{
        printf("%d é impar, seu bastardo!", i );
    }
}
/*escreva um programa que solicite dois números e informe se são iguais*/
int main(){
    int i;
    int p;
    printf("digite dois números: ");
    scanf("%d \n %d", &i, &p);
    if(i != p){
        printf("%d é diferente de %d, seu burro imprestável", i, p);
    }else{
        printf("%d e %d são números iguais PORRA", i, p);
    }
}
/*crie um programa que imprima a tabuada de multiplicação de um número fornecido pelo usuário*/
int main(){
    int i;
    int mult = 1;
    int rslt;
    printf("digite um número: ");
    scanf("%d", &i);
    while(mult <= 10){
        rslt = mult * i;
        printf("%d ", rslt);
        mult++;
    }
    return 0;
}
/*faça um programa que conte de 1 a 100 e imprima "Fizz" para números divisíveis por 3 e "Buzz" para números divisíveis por 5. para números que são divisíveis por ambos, imprima "FizzBuzz"*/
int main(){
    int i = 1;
    while(i <= 100){
        if(i % 3 == 0 && i % 5 == 0){
            printf("%d:fizzbuzz ", i);
        }else if(i % 5 == 0){
            printf("%d:buzz ", i);
        }else if(i % 3 == 0){
            printf("%d:fizz ", i);
        }else{
            printf("%d ", i);
        }
        i++;
    }
}
/*crie um programa que peça a altura e o peso do usuário e calcule o índice de massa corporal (IMC)*/
int main(){
    int p;
    int a;
    int imc;
    printf("digite seu peso e sua altura: ");
    scanf("%d \n %d", &p, &a);
    imc = p / (a * a);
    if(imc<18,5){
        printf("abaixo do normal");
    }else if(imc<24,9){
        printf("normal");
    }else if(imc<29,9){
        printf("sobrepeso");
    }else if(imc<34,9){
        printf("obesidade grau I");
    }else if(imc<39,9){
        printf("obesidade grau II");
    }else{
        printf("obesidade grau III");
    }
}
/*faça um programa que solicite um número e imprima se é primo ou não*/
