#include <iostream>
#include <string>
#include <locale.h>
#include <vector>

using namespace std;
int main() {
    setlocale(LC_ALL, "");
    int dano1 = 0, dano2 = 0, vida1 = 0, vida2 = 0;
    int turno = 1;
    int vida = 0;
    int acao1, acao2;
    string personagem1, personagem2;
    string user1, user2;
    int acao, players;
    vector<string> nomes;
    int aumentarVida = 10;
    string certeza;


    cout << "\n ---Bem vindo ao jogo---\n : " << endl;
    cout << "\n Quantos players haverá :\n ";
    cin >> players;
    while (players < 2) {
        cout << "É necessário pelo menos 2 jogadores. Digite novamente: ";
        cin >> players;
    }

    for (int i = 0; i < players; i++) {
        string nome;
        cout << "Digite o nome do jogador " << (i + 1) << ": ";
        cin >> nome;
        nomes.push_back(nome);
    }
    cout << "\nJogadores cadastrados:" << endl;
    for (int i = 0; i < nomes.size(); i++) {
        cout << "Jogador " << (i + 1) << ": " << nomes[i] << endl;
    }
    cout << "A partir será entre " << user1 << " e " << user2 << endl;
    cout << user1 << "Escolha seu personagem : 1 - Naruto, 2 - Sasuke, 3 - Sakura, 4 - Kakashi ou 5 - Sair " << endl;
    cin >> acao1;
    switch (acao1) {
    case 1:
        personagem1 = "Naruto";
        dano1 = 10;
        vida1 = 50;
        break;
    case 2:
        personagem1 = "Sasuke";
        dano1 = 12;
        vida1 = 45;
        break;
    case 3:
        personagem1 = "Sakura";
        dano1 = 8;
        vida1 = 60;
        break;
    case 4:
        personagem1 = "Kakashi";
        dano1 = 11;
        vida1 = 48;
        break;
    case 5:
        cout << "Saindo do jogo..." << endl;
        return 0;
    default:
        cout << "Opção inválida!" << endl;
        return 0;

    }

    cout << user2 << ", escolha seu personagem: 1 - Naruto, 2 - Sasuke, 3 - Sakura, 4 - Kakashi, 5 - Sair" << endl;
    cin >> acao2;

    switch (acao2) {

    case 1:
        personagem2 = "Naruto";
        dano2 = 10;
        vida2 = 50;
        break;
    case 2:
        personagem2 = "Sasuke";
        dano2 = 12;
        vida2 = 45;
        break;
    case 3:
        personagem2 = "Sakura";
        dano2 = 8;
        vida2 = 60;
        break;
    case 4:
        personagem2 = "Kakashi";
        dano2 = 11;
        vida2 = 48;
        break;
    case 5:
        cout << "Saindo do jogo..." << endl;
        return 0;
    default:
        cout << "Opção inválida!" << endl;
        return 0;
    }

    cout << "\n" << user1 << " escolheu " << personagem1 << " com " << vida1 << " de vida e " << dano1 << " de dano." << endl;
    cout << user2 << " escolheu " << personagem2 << " com " << vida2 << " de vida e " << dano2 << " de dano." << endl;

    // logica real entrará por aqui 

    while (vida1 > 0 && vida2 > 0) {
        cout << "Turno : " << turno;
        if (turno % 2 == 1) {
            cout << "\n 1 - Atacar, 2 - Aumentar vida +10 3 - Passar rodada. \n " << endl;
            cin >> acao;
            switch (acao) {
            case 1:
                vida2 = vida2 - dano1;
                cout << user1 << "Causou: " << vida2 << "Proximo turno" << endl;
                break;
            case 2:
                vida1 = vida1 + aumentarVida;
                cout << user1 << "Aumentou a vida em: " << vida1 << "Proximo turno" << endl;
                break;
            case 3:
                cout << "Tem certeza? y/n :";
                cin >> certeza;
                if (certeza == string("y")) {
                    cout << "Passou a rodada ";
                }
                else {
                    cout << "\n 1 - Atacar, 2 - Aumentar vida +10 3 - Passar rodada. \n " << endl;
                    cin >> acao;
                }

            }
        }
        if (turno % 2 == 0) {
            cout << "\n 1 - Atacar, 2 - Aumentar vida +10 3 - Passar rodada. \n " << endl;
            cin >> acao;
            switch (acao) {
            case 1:
                vida1 = vida1 - dano2;
                cout << user2 << "Causou: " << vida1 << "Proximo turno" << endl;
                break;
            case 2:
                vida2 = vida2 + aumentarVida;
                cout << user2 << "Aumentou a vida em: " << vida2 << "Proximo turno" << endl;
                break;
            case 3:
                cout << "Tem certeza? y/n :";
                cin >> certeza;
                if (certeza == string("y")) {
                    cout << "Passou a rodada ";
                }
                else {
                    cout << "\n 1 - Atacar, 2 - Aumentar vida +10 3 - Passar rodada. \n " << endl;
                    cin >> acao;
                }

            }



        }
        turno++;

    }









    return 0;
}
