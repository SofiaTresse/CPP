#include <iostream>
using namespace std;

int main() {
                                                                             //Variáveis
    int calculadora;//Variável para a pessoa escolher qual tipo de calculadora ela quer usar.
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    int numero = 0; //Variável para definir qual será o número digitado na calculadora de fatorial.
    int resultado = 1;//Resultada da calculadora de fatorial
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    int total1 = 0;//Variável para a pessoa digitar o número total de um conjunto
    int elementos1 = 0; // Variável de elementos a serem organizados
    int resultado1 = 1; // Variável para o resultado de n! no Arranjo Simples
    int resultado2 = 1;//variável para o resultado da conta de n-p em fatorial(n-p)!
    int denominador1 = 0;// é a conta de n-p no Arranjo Simples
    int Anp = 0;//Pega os resultados e faz a conta n!/(n-p)!, mostrando o resultado final
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    int total2 = 0;//Variável para a pessoa digitar o número total de um conjunto
     int elementos2 = 0;// Variável de elementos a serem organizados
    int resultado3 = 1; // Variável para o resultado de n! no Combinação Simples
    int resultado4 = 1;// Variável para o resultado de n-p no Combinação Simples
    int resultado5 = 1;// Variável para o resultado de p! no Combinação Simples
     int para = 0;//Faz o resultados do parenteses (n-p)!
    int denominador2 = 0;//Faz a conta da parte do denominador p!*(n-p)!
    int Cnp = 0;//Junta todos os resultados e faz a operação da Combinação Simples, que é m!/p!*(n-p)!
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    char repetir;//Váriavel para a pessoa colocar um caracter específico para repetir o código se for da sua vontade, no caso "S"
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    do {//loop para repetir a função
                                                 //Escolha das calculadoras
        cout << "Escolha entre três calculadoras.\n1. Calculadora Fatorial.\n2. Calculadora Arranjo Simples.\n3. Calculadora Combinação Simples." << endl;
        cin >> calculadora;//Digitar o numero correspondente ao caso(1, 2 ou 3)
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                //Fatorial
        switch (calculadora) {
        case 1:
            cout << "Calculadora de Fatorial!!!\nOnde n!\nEscolha um número para saber seu Fatorial(n)" << endl; // Solicita ao usuário que insira um número
            cin >> numero; // Lê o número inserido pelo usuário

            if (numero > 0) {
                resultado = 1; // Resetar resultado para o cálculo do fatorial
                for (int i = 1; i <= numero; i++) {
                    resultado *= i; // Multiplica o resultado atual pelo número do loop
                }

                cout << "\nA sua operação é: " << numero << "!" << endl;//Explica como é feito a operação
                cout << "Seu fatorial é: " << resultado << endl;//mostra o resultado da conta

            } else {
                cout << "Número inválido, defina um número maior que zero!" << endl;//caso insera um número que não é possível realizar a conta
            }
            break;
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                   //Arranjo Simples
        case 2:
            cout << "\nCalculadora de Arranjo Simples!!\nOnde An,p = n! / (n-p)!\nVocê deverá escolher o número total de elementos (n)" << endl;
            cin >> total1;// Lê o número inserido pelo usuário

            if (total1 > 0) {
                cout << "Agora você deverá escolher o número de elementos a serem organizados (p)" << endl;
                cin >> elementos1;// Lê o número inserido pelo usuário

                resultado1 = 1; // Resetar resultado1
                for (int i = 1; i <= total1; i++) {
                    resultado1 *= i; // Multiplica o resultado atual pelo número do loop, vai ser o valor n! do numerador
                }

                cout << "O seu valor de n! é: " << resultado1 << endl;//Mostra o valor de n!

                denominador1 = total1 - elementos1;//Faz a conta de todo o denominador

                resultado2 = 1; // Resetar resultado2
                for (int i = 1; i <= denominador1; i++) {
                    resultado2 *= i; // Multiplica o resultado atual pelo número do loop para descobrir o valor de (n - p)!, no caso do denominador
                }

                cout << "O seu valor de (n - p)! é: " << resultado2 << endl;//Mostra apenas o resultado de (n-p)!

                Anp = resultado1 / resultado2; // Agora vai pegar o resultado do fatorial de n e dividir pelo fatorial de (n-p)

                cout << "\nA sua operação é: " << total1 << "! / ( " << total1 << " - " << elementos1 << ")!" << endl;//Explica como foi feita a sua conta
                cout << "O Arranjo Simples é: " << Anp << endl; // Mostra o resultado da conta

            } else {
                cout << "Número inválido, defina um número maior que zero!" << endl;//caso insera um número que não é possível realizar a conta
            }
            break;
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                //Combinação Simples
        case 3:
            cout << "\nCalculadora de Combinação Simples!!\nOnde Cn,p = n! / (p! * (n-p)!)\nVocê deverá escolher o número total de elementos (n)" << endl;
            cin >> total2;// Lê o número inserido pelo usuário

            if (total2 > 0) {
                cout << "Agora você deverá escolher o número de elementos a serem organizados (p)" << endl;
                cin >> elementos2;// Lê o número inserido pelo usuário

                resultado3 = 1; // Resetar resultado3
                for (int i = 1; i <= total2; i++) {
                    resultado3 *= i; // Multiplica o resultado atual pelo número do loop, vai ser o valor n! do numerador
                }

                cout << "O seu valor de n! é: " << resultado3 << endl;//Mostra o valor atual

                para = total2 - elementos2;
                resultado4 = 1; // Resetar resultado
                for (int i = 1; i <= para; i++) {
                    resultado4 *= i; // Multiplica o resultado atual pelo número do loop, vai ser o valor de (n - p)!
                }

                cout << "O seu valor de (n - p)! é: " << resultado4 << endl;//Mostra o valor atual

                resultado5 = 1; // Resetar resultado5
                for (int i = 1; i <= elementos2; i++) {
                    resultado5 *= i; // Multiplica o resultado atual pelo número do loop, vai ser o valor de p!
                }

                cout << "O seu valor de p! é: " << resultado5 << endl;//Mostra o valor atual

                denominador2 = resultado5 * resultado4;
                Cnp = resultado3 / denominador2;

                cout << "\nA sua operação é: " << total2 << "! / (" << elementos2 << "! * (" << total2 << " - " << elementos2 << ")!)" << endl;//Explica como foi feita a sua conta
                cout << "A Combinação Simples é: " << Cnp << endl;//Mostra o resultado final
            } else {
                cout << "Número inválido, defina um número maior que zero!" << endl;//caso insera um número que não é possível realizar a conta
            }
            break;
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        default:
            cout << "Opção inválida!" << endl;//caso não escolha nenhuma das opções da calculadora
            break;
        }
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                   //Repetição
        cout << "\nDeseja fazer outra operação? (s/n):\n ";
        cin >> repetir;

    } while (repetir == 's' || repetir == 'S');//Enquanto a opção for sim, o programa irá repetir

    cout << "Obrigado por usar a calculadora!" << endl;//Caso escolha outra opção que não for sim, vai encerrar o programa

    return 0;
}