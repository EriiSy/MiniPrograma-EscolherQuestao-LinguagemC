#include <stdio.h> 
#include <math.h>
#include <time.h>
#include <math.h> 

//*********************************************************

// Verificador de Entradas válidas
int lerInteiro(const char* mensagem) {
    int valor;
    printf("%s", mensagem);
    while (scanf("%d", &valor) != 1) {
        printf("Entrada inválida!\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        printf("%s", mensagem);
    }
    return valor;
}
float lerFloat(const char* mensagem) {
    float valor;
    printf("%s", mensagem);
    while (scanf("%f", &valor) != 1) {
        printf("Entrada inválida!\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        printf("%s", mensagem);
    }
    return valor;
}

//*********************************************************

//Questões de A até O 
void questaoA(){

    int A,B,C; 

    printf("\na) Efetuar a leitura de dois valores numéricos inteiros"
    " representados pelas variáveis A e B e apresentar o resultado da diferenca do maior valor pelo menor valor.\n");

    A = lerInteiro("\nDigite um valor para A: "); 
    B = lerInteiro("Digite um valor para B: ");
     

    if (A>B){
    C = A-B;
    }else{
    C = B-A;
    }

    printf("O resultado da diferenca do maior valor pelo menor valor e: %d", C);

}
void questaoB(){

    int N,R;
    printf("\nb) Efetuar a leitura de um valor numérico inteiro positivo ou negativo representado pela variável N" 
    " e apresentar o valor lido como sendo positivo."
    " Dica: se o valor lido for menor que zero, ele deve ser multiplicado por –1. \n");

    N = lerInteiro("\nDigite um valor qualquer para N: "); 
    

    if (N<=0){
        R=N*(-1);
    } 
    else{
        R=N; 
    }
    
    printf("O valor positivo desse numero e: %d", R);
}
void questaoC(){

    float N1,N2,N3,N4,MD; 

    printf("\nc) Realizar a leitura dos valores de quatro notas escolares bimestrais de um aluno representadas pelas variaveis N1, N2, N3 e N4."
    " Calcular a media aritmetica (variavel MD) desse aluno e apresentar a mensagem 'Aprovado' se a media obtida for maior ou igual a 5;"
    " caso contrario, apresentar a mensagem 'Reprovado'. Informar tambem, apos a apresentacao das mensagens, o valor da media obtida pelo aluno\n");


    N1 = lerFloat("\nDigite um valor para 1 Nota do aluno: ");
    N2 = lerFloat("Digite um valor para 2 Nota do aluno: ");
    N3 = lerFloat("Digite um valor para 3 Nota do aluno: ");
    N4 = lerFloat("Digite um valor para 4 Nota do aluno: ");
   

    MD = (N1+N2+N3+N4)/4; 
    
    if (MD >= 5){
        printf("O Aluno esta aprovado!");
    }
    else{
        printf("O aluno esta reprovado!"); 
    }

    printf("\nA media do aluno foi respectivamente: %.2f", MD);
}
void questaoD(){
   float N1,N2,N3,N4,NE,MD1,MD2; 

    printf("\nd) Ler os valores de quatro notas escolares bimestrais de um aluno representadas pelas variaveis N1, N2, N3 e N4." 
    " Calcular a media aritmetica (variavel MD1) desse aluno e apresentar a mensagem 'Aprovado' se a média obtida for maior ou igual a 7;" 
    " caso contrario, o programa deve solicitar a quinta nota (nota de exame, representada pela variavel NE) do aluno e calcular uma nova media aritmetica (variável MD2)" 
    " entre a nota de exame e a primeira media aritmetica. Se o valor da nova media for maior ou igual a cinco, apresentar a mensagem 'Aprovado em exame';" 
    " caso contrario, apresentar a mensagem 'Reprovado'. Informar tambem, apos a apresentacao das mensagens, o valor da media obtida pelo aluno.\n");

    N1 = lerFloat("\nDigite um valor para 1 Nota do aluno: ");
    N2 = lerFloat("Digite um valor para 2 Nota do aluno: ");
    N3 = lerFloat("Digite um valor para 3 Nota do aluno: ");
    N4 = lerFloat("Digite um valor para 4 Nota do aluno: ");
 

    MD1 = (N1+N2+N3+N4)/4; 
    
    if (MD1 >= 7){
        printf("Aprovado");
         printf("\nA média do aluno foi: %.2f", MD1); 
    }
    else{
        printf("Nota abaixo de 7, carregando exame...");
        printf("\n Preencha a nota de exame do aluno: ");
        scanf("%f", &NE); 

        MD2 = (MD1+NE)/2;

        if (MD2 >= 5){ 
            printf("Aprovado em exame"); 
        }
        else{
            printf("Reprovado"); 
        }
        printf("\nA media do aluno foi: %.2f",MD2);
    }

    
}
void questaoE(){
    float a,b,c,Delta;
    float x_positivo, x_negativo, x_real;  


    printf("\ne) Efetuar a leitura de tres valores numericos (representados pelas variáveis A, B e C)"
     "e processar o calculo da equaçao completa de segundo grau, utilizando a fórmula de Bhaskara \n");

    printf("\nOla, digite o valor de a, b, c para descobrimos\nse ela possui duas raizes, uma raiz ou nenhuma. ");
    a = lerFloat("a: ");
    b = lerFloat("b: ");
    c = lerFloat("c: ");

    Delta = (pow(b,2)) - (4*a*c); 

    if (Delta > 0){
        x_positivo = (-b +(pow(Delta,0.5)))/(2*a); 
        x_negativo = (-b -(pow(Delta,0.5)))/(2*a);
        printf("\nEssa equacao possui duas raizes reais e diferentes");
        printf("\nA raiz positiva dessa equacao e: %.2f", x_positivo);
        printf("\nA raiz negativa desse equacao e: %.2f", x_negativo);

    }
    if (Delta == 0){
        x_real = -b/(2*a);
        printf ("Essa equacao possui Delta=0, dessa forma\n");
        printf("\nA raiz real dessa equacao e: %.2f", x_real);
    }

    if (Delta < 0){
        printf("Nao ha solucao real para essa equacao");
    }

}   
void questaoF(){
int A,B,C; 
    int troca;

    printf("\nf) Ler tres valores inteiros representados pelas variáveis A, B e C e apresentar os valores lidos dispostos"
    " em ordem crescente. Dica: utilizar tomada de decisao sequencial e as ideias trabalhadas nos exercicios 'g'"
    "(propriedade distributiva) e 'f' (troca de valores) do Capitulo 3.\n");

    A = lerInteiro("\nDigite os valores de A,B e C para que apareça em ordem crescente.\nA: ");
    B = lerInteiro("B: ");
    C = lerInteiro("C: ");

    if (A > B) {
        troca = A;
        A = B;
        B = troca;
    }
    if (A > C) {
        troca = A;
        A = C;
        C = troca;
    }
    if (B > C) {
        troca = B;
        B = C;
        C = troca;
    }
                         
    printf("A Ordem crescente e: %d, %d, %d", A,B,C);
}
void questaoG(){

    int A,B,C,D; 

    printf("\ng) Efetuar a leitura de quatro valores numericos inteiros representados pelas variaveis A, B, C e D." 
    "Apresentar apenas os valores que sejam divisiveis por 2 e 3.\n");

    A = lerInteiro("\nDigite um numero para A,B,C e D.\nA: ");
    B = lerInteiro("B: ");
    C = lerInteiro("C: ");
    D = lerInteiro("D: ");

    if ((A%2== 0)&&(A%3==0)){
    printf("\nO numero %d e divisivel por 2 e 3", A);
    } 
    else{
        printf("\n%d nao e divisivel por 2 e 3 ", A);
    }  
    if ((B%2== 0)&&(B%3==0)){
    printf("\nO numero %d e divisivel por 2 e 3", B);
    } 
    else{
        printf("\n%d nao e divisivel por 2 e 3 ",B);
    } 
    if ((C%2== 0)&&(C%3==0)){
    printf("\nO numero %d e divisivel por 2 e 3", C);
    } 
    else{
        printf("\n%d nao e divisivel por 2 e 3 ", C);
    }
    if ((D%2== 0)&&(D%3==0)){
    printf("\nO numero %d e divisivel por 2 e 3", D);
    } 
    else{
        printf("\n%d nao e divisivel por 2 e 3", D);
    }
}
void questaoH(){

    int A,B,C,D; 


    printf("\nh) Efetuar a leitura de quatro valores numericos inteiros representados pelas variaveis A, B, C e D." 
    "Apresentar apenas os valores que sejam divisiveis por 2 ou 3.\n");

    A = lerInteiro("\nDigite um numero para A,B,C e D.\nA: ");
    B = lerInteiro("B: ");
    C = lerInteiro("C: ");
    D = lerInteiro("D: ");

    if ((A%2== 0)||(A%3==0)){
    printf("\nO numero %d e divisivel por 2 ou 3", A);
    } 
    else{
        printf("\n%d nao e divisivel por 2 ou 3 ", A);
    }  
    if ((B%2== 0)||(B%3==0)){
    printf("\nO numero %d e divisivel por 2 ou 3", B);
    } 
    else{
        printf("\n%d nao e divisivel por 2 ou 3 ",B);
    } 
    if ((C%2== 0)||(C%3==0)){
    printf("\nO numero %d e divisivel por 2 ou 3", C);
    } 
    else{
        printf("\n%d nao e divisivel por 2 ou 3 ", C);
    }
    if ((D%2== 0)||(D%3==0)){
    printf("\nO numero %d e divisivel por 2 ou 3", D);
    } 
    else{
        printf("\n%d nao e divisivel por 2 ou 3", D);
    }

}
void questaoI(){
    int A,B,C,D,E, maior, menor; 


    printf("\ni) Ler cinco valores numéricos inteiros (variaveis A, B, C, D e E), identificar e apresentar o maior e o menor valores informados.\n");

    A = lerInteiro("\nDigite um numero para A,B,C,D e E.\nA: ");
    B = lerInteiro("B: ");
    C = lerInteiro("C: ");
    D = lerInteiro("D: ");
    E = lerInteiro("D: ");

    maior = A;
    menor = A;

    if (B>maior){
        maior=B;
    }
    else{
        menor = B;
    }
    if (C>maior){
        maior = C; 
    }
    else{
        menor = C; 
    }
    if (D>maior){
        maior = D;
    }
    else{
        menor = D; 
    }
    if (E>maior){
        maior = E; 
    }
    else{
        menor = E; 
    }

    printf("Maior e Menor valor foi encontrado!.\nMaior: %d\nMenor: %d", maior,menor);


}
void questaoJ(){
    int A, valor; 

    printf("\nj) Ler um valor numerico inteiro e apresentar uma mensagem informando se o valor fornecido e par ou impar.\n");

    A = lerInteiro("\nDigite um valor para A e descobriremos se e par ou impar: \n:");

    valor = A;
    A = (A%2); 

    if (A == 0) {
        printf("O valor de %d e par",valor);
    }
    else{
        printf("O valor de %d e ímpar",valor);
    }
}  
void questaoK(){
    int A; 

    printf("\nk) Efetuar a leitura de um valor numerico inteiro que esteja na faixa de valores de 1 ate 9." 
    " O programa deve apresentar a mensagem 'O valor esta na faixa permitida', caso o valor informado esteja entre 1 e 9."
    " Se o valor estiver fora da faixa, o programa deve apresentar a mensagem 'O valor está fora da faixa permitida'\n");

    A = lerInteiro("\nDigite um valor para A.\n:");
    

    if ((A >=1 ) && (A<=9)){
        printf("O valor esta na faixa permitida!"); 
    }
    else {
        printf("O valor esta fora da faixa permitida"); 
    }
}
void questaoL(){
    int A; 
    printf("\nl) Fazer a leitura de um valor numerico inteiro qualquer e apresenta-lo caso não seja maior que 3." 
    " Dica ( para a solucao deste problema, utilize apenas o operador logico de negacao.\n");

    A = lerInteiro("\nDigite um valor para A, ele sera liberado ou nao...\n: "); 
   

    if ((!(A>3))){
        printf("O seu numero A: %d foi liberado", A); 
    }
    else{
        printf("TA PRESO HAHAHAHA");
    }

}
void questaoM(){
    char NOME[1000];
    char SEXO; 
    printf("\nm) Efetuar a leitura de um nome (variavel NOME) e o sexo (variavel SEXO) de uma pessoa e apresentar como saida uma das seguintes mensagens: "
    " 'llmo. Sr.', caso seja informado o sexo masculino (utilizar como valor o caractere 'M'), ou 'llma. Sra.', caso seja informado o sexo feminino" 
    " (utilizar como valor o caractere 'F'). Apos a mensagem de saudacao, apresentar o nome informado." 
    " O programa deve, apos a entrada do sexo, verificar primeiramente se o sexo fornecido e realmente valido, ou seja, se e igual a 'M' ou a 'F'." 
    " Nao sendo essa condicao verdadeira, o programa deve apresentar a mensagem 'Sexo informado invalido'\n");


    printf("\nDigite o seu Nome: ");
    scanf(" %s", NOME);

    printf("Digite seu Sexo (M)masculino ou (F)feminino: ");
    scanf(" %c", &SEXO); 

    if ((SEXO == 'M') || (SEXO =='m')){
        printf("Seja bem vindo llmo.Sr %s", NOME);
    }
    else if ((SEXO == 'F') || (SEXO == 'f')){
            printf("Seja bem vinda llmo.Sra %s",NOME); 
    } 
    else{
        printf("Sexo informado Invalido"); 
    }
    
}
void questaoN(){
    int A,B,C,X;

    printf("\nn) Efetuar a leitura de tres valores inteiros desconhecidos representados pelas variaveis A,B e C. Somar os valores" 
    " fornecidos e apresentar o resultado somente se for maior ou igual a 100\n");



    A = lerInteiro("\nDigite um numero para A,B e C\nA: ");
    B = lerInteiro("B: ");
    C = lerInteiro("C: ");


    X = A+B+C; 

    if (X>=100){
        printf("A soma dos valores fornecidos ultrapassaram de 100!\nTotal: %d", X);
    }
    else{
        printf("Valor da soma muito baixo, nao vai saber o resultado...adeus");
    }
}
void questaoO(){
    int A; 

    printf("\no) Ler um numero inteiro qualquer e multiplica-lo por dois." 
    "\nApresentar o resultado da multiplicacao somente se o resultado for maior que 30.\n");

    A = lerInteiro("\nDigite um valor para A: ");
    A = 2*A; 

    if (A>30){
        printf("Parabens, seu resultado multiplicado por 2 esta acima de 30!.\nTotal: %d",A);
    }else{
        printf("Triste...Adeus");
    }
}

//*********************************************************

void menu(){
    printf("\nEscolha a questão que deseja ver a seguir: \n");

        printf("\n(a) Diferenca do Maior valor para o Menor Valor.");
        printf("\n(b) Tornar o valor numero sempre positivo.");
        printf("\n(c) Media bimestral sem exame.");
        printf("\n(d) Media bimestral com exame.");
        printf("\n(e) Calculadora de Bhaskara.");
        printf("\n(f) Colocar os numeros em ordem crescente.");
        printf("\n(g) Valores divisiveis por 2 e 3.");
        printf("\n(h) Valores divisiveis por 2 ou 3."); 
        printf("\n(i) Identificar o maior e menor valor."); 
        printf("\n(j) Par ou impar.");
        printf("\n(k) Permitir um numero na faixa ou nao.");
        printf("\n(l) Permitir numeros menores que 3.");
        printf("\n(m) Ler Nome e o Genero do usuario.");
        printf("\n(n) Somar tres valores e ver se e maior ou igual a 100.");
        printf("\n(o) Apresentar um numero somente se seu numero multiplicado por dois seja maior que 30\n");

    printf("\nDigite apenas a letra da questao: ");
}
// Menu, onde se encontra todo os textos das questões

//*********************************************************

void limparTela() { 
    for (int i = 0; i < 200; i++) {
        printf("\n");
    }
}
// Uma forma de 'limpar' a tela, uma vez que outros sistemas operacionais não consigam 
// rodar alguns comandos como system('cls') no Linux.

//*********************************************************

void page(){
    char escolha;
    int loop=1;
    int voltar;
    int validacao;
    menu();

    do{
        
        scanf(" %c", &escolha);

        while(getchar()!= '\n'); //limpa o buffer de entrada
        if (escolha >= 'a' && escolha <= 'o') {
            limparTela();
            validacao = 1;
        } 
        else {
            validacao = 0;
        }

        switch (escolha) {
            case 'a':
                questaoA();
                break;
            case 'b': 
                questaoB();
                break;
            case 'c': 
                questaoC();
                break;
            case 'd':
                questaoD();
                break;
            case 'e': 
                questaoE();
                break; 
            case 'f': 
                questaoF();
                break;
            case 'g': 
                questaoG(); 
                break;
            case 'h': 
                questaoH();
                break;
            case 'i': 
                questaoI(); 
                break;
            case 'j': 
                questaoJ();
                break;
            case 'k': 
                questaoK();
                break;
            case 'l': 
                questaoL();
                break;
            case 'm': 
                questaoM();
                break;
            case 'n': 
                questaoN();
        
                break;
            case 'o': 
                questaoO();
                break;
            default:
                printf("\nLetra invalida, por favor insira uma correta de (a) a (o): ");
                break;
        }


        if (validacao){ 
        printf("\n\nDeseja voltar ao Menu? (1)-Sim/ (0)-Nao. \n: ");
        scanf(" %d", &voltar);
        while (getchar() != '\n');//limpa o buffer de entrada
        switch(voltar){
                case 0: 
                printf("\nFinalizando o programa...Obrigado pela disponibilidade!");
                    loop = 0; 
                    break;
                case 1: 
                    limparTela();
                    menu();
                    break;
                default: 
                 do{
                    printf("Digíto inválido.\nDeseja voltar ao Menu? (1)-Sim/ (0)-Nao: ");
                    scanf(" %d", &voltar);
                    while(getchar() != '\n');
                    //limpa o buffer...
                  }while(voltar!=0 && voltar!=1);

                  if (voltar==1){
                    limparTela();//limpa a tela
                    menu(); 
                  }
                  else if (voltar==0){
                    printf("\nFinalizando o programa...Obrigado pela disponibilidade!");
                    loop = 0; 
                  }
                break;
            }     
        }
        else if(validacao==0){
            loop = 1;
        }
     voltar = -1; // limpar a variável a cada interação.

    }while(loop==1);
}
  //Toda a funcionalidade do mini-programa se encontra aqui. :)

//*********************************************************

int main(){
    
    page();
    //Chamando a page para a main e assim ser feliz. 
    
    return 0; 
}
