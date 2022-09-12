#include <iostream>
using namespace std;
/*
Vários tipos, funções, variáveis, etc, são declarados em diferentes
escopos de bibliotecas, ao usar o using namespace std, estamos dizendo que
estamos usando esses objetos do escopo da biblioteca standard,
resumindo estamos declarando o escopo dos identificadores que estamos usando
para todo o resto do programa.

Isso tira a necessidade de escrever o escopo dos objetos na função main. ex: std::cout

Essa notação pode causar problemas quando estamos trabalhando com várias bibliotecas,
pois caso uma biblioteca contenha um objeto com um identificador igual a algum passado
na standard library o programa usará apenas a da std.
*/

int main() {

    int n1;

    cin >> n1;
    cout << n1 << endl;
  
  
    return 0;
}
