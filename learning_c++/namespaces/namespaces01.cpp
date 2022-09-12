#include <iostream>
using std::cout;
/*
Vários tipos, funções, variáveis, etc, são declarados em diferentes
escopos de bibliotecas, ao usar o using namespace std, estamos dizendo que
estamos usando esses objetos do escopo da biblioteca standard,
resumindo estamos declarando o escopo dos identificadores que estamos usando
para todo o resto do programa.

Isso tira a necessidade de escrever o escopo dos objetos na função main. ex: std::cout
*/

int main() {

    int n1;

    std::cin >> n1;
    cout << n1;
  
  
    return 0;
}
