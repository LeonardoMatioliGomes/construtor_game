#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//definindo a classe do jogo
class JogoAdivinhacao {
    //armazenando valores sem mostrar ao usuario
    private:
    int numeroSecreto;
    int tentativas;
    //escolhendo um numero aleatorio e deixando ele privado
    public:
    JogoAdivinhacao() {
        //100% + 1 pois o rand escolhe numero de 0 a 99
        srand(time(0));
        numeroSecreto = rand() % 100 + 1;
        tentativas = 0;
    }
    //void define qual será o metodo usado
    void jogar() {
        //usando do para falar o palpite e para caso o usuario erre ou acerte o numero
        int palpite;
        do {
            cout << "Digite um número entre 1 e 100: ";
            cin >> palpite;
            tentativas++;
            if (palpite > numeroSecreto) {
                cout << "O número secreto é menor!" << endl;
            } else if (palpite < numeroSecreto) {
                cout << "o número secreto é maior!" << endl;
            } else {
                cout << "Parabéns, você acertou o número em "
                << tentativas << " tentativas!" << endl;
            }
            //caso o palpite seja igual o numero, ou seja, o usuario acerte, a repetição acaba. "tentativas ++" é usado como contador
            } while (palpite != numeroSecreto);
        }
    };
//jogo.jogar é o metodo que esta sendo usado (que se inicia no void), jogoAdivinhacao esta dentro do metodo. o metodo sempre esta sendo rodado, e jogoAdivinhacao faz parte dele para funcionar.
int main () {
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}
/*primeiro é adicionado as bibliotecas: iostream, cstdlib (Registra a função para término do programa. Destrói objetos com thread e armazenamento estático e retorna o controle. Registra a função sem argumentos para término do programa) e ctime (garante que os nomes declarados usando vinculação externa no cabeçalho da biblioteca C Padrão sejam declarados no namespace std).
logo é feito uma classe, chamada JogoAdivinhacao e criamos dois int (numeroSecreto e tentativas). após isso, é feito um numero secreto com rand somado com 1 (pois o rand conta do 0 ao 99, somando 1 fica o nosso objetivo de 0 a 100). então é feito o metodo para colocar o palpite, onde caso seu palpite seja errado ele vai fala se é maior ou menor que seu número, caso acerte, a repeitção DO WHILE para, e antes de encerrar, ele fala quantas tentativas você levou para acertar.*/