#include <iostream>
using namespace std;

int main() {
    // Variáveis
    char lado;
    char alternativa;

    // Introdução
    cout << "Nesse castelo há 5 andares com labirintos, quanto mais baixo, maior o seu nível de dificuldade.\n";
    cout << "Você começará no 5º andar, e se conseguir achar a saída, descerá a escada até o próximo nível. Pronto?\n";
    cout << "\nVocê deverá escolher entre dois lados: E para Esquerda ou D para Direita.\n";

    // 5º Andar
    while (true) {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;

        switch (lado) {
            case 'E':
                cout << "\nMuito bem! Você virou para a esquerda e achou a escada descendo para o próximo nível!\n";
                break;

            case 'D':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
                    return 0; // Encerra o programa
                }
                break;

            default:
                cout << "\nOpção inválida. Você esperou a morte chegar.\n";
                return 0; // Encerra o programa
        }
        break; // Sai do loop após a escolha válida
    }

    // 4º Andar
    cout << "\nVocê está agora no 4º andar.\n";
    while (true) {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;

        switch (lado) {
            case 'D':
                cout << "\nMuito bem! Você virou para a direita e achou a escada descendo para o próximo nível!\n";
                break;

            case 'E':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
                    return 0; // Encerra o programa
                }
                break;

            default:
                cout << "\nOpção inválida. Você esperou a morte chegar.\n";
                return 0; // Encerra o programa
        }
        break; // Sai do loop após a escolha válida
    }

    // 3º Andar
    cout << "\nVocê está agora no 3º andar.\n";
    while (true) {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;

        switch (lado) {
            case 'D':
                cout << "\nMuito bem! Você virou para a direita e achou a escada descendo para o próximo nível!\n";
                break;

            case 'E':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
                    return 0; // Encerra o programa
                }
                break;

            default:
                cout << "\nOpção inválida. Você esperou a morte chegar.\n";
                return 0; // Encerra o programa
        }
        break; // Sai do loop após a escolha válida
    }

    // 2º Andar
    cout << "\nVocê está agora no 2º andar.\n";
    while (true) {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;

        switch (lado) {
            case 'E':
                cout << "\nMuito bem! Você virou para a esquerda e achou a escada descendo para o próximo nível!\n";
                break;

            case 'D':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
                    return 0; // Encerra o programa
                }
                break;

            default:
                cout << "\nOpção inválida. Você esperou a morte chegar.\n";
                return 0; // Encerra o programa
        }
        break; // Sai do loop após a escolha válida
    }

    // 1º Andar
    cout << "\nVocê está agora no 1º andar.\n";
    while (true) {
        cout << "\nPara qual lado deseja ir?: ";
        cin >> lado;

        switch (lado) {
            case 'E':
                cout << "\nMuito bem! Você virou para a esquerda e achou outro caminho!\n";
                break;

            case 'D':
                cout << "\nVocê trombou em uma parede.";
                cout << "\nVocê deseja voltar? S ou N: ";
                cin >> alternativa;

                if (alternativa == 'S') {
                    cout << "Você voltou à posição anterior.";
                    // Continua o loop para permitir nova escolha
                } else if (alternativa == 'N') {
                    cout << "Você desistiu e esperou a morte vir te buscar.\nVocê morreu de fome." << endl;
                    return 0; // Encerra o programa
                }
                break;

            default:
                cout << "\nOpção inválida. Você esperou a morte chegar.\n";
                return 0; // Encerra o programa
        }
        break; // Sai do loop após a escolha válida
    }

    return 0;
}
