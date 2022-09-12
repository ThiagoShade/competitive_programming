#include <iostream>
using std::cout;
/*
Vários tipos, funções, variáveis, etc, são declarados em diferentes
escopos de bibliotecas, ao usar o using std::cout , estamos dizendo que
estamos usando esse objeto "cout" do escopo da biblioteca standard,
resumindo estamos declarando o escopo do cout nesse programa é sempre std.

Isso tira a necessidade de escrever o escopo desse objeto na função main.
*/

int main() {

    int n1;

    std::cin >> n1;
    cout << n1;
  
  
    return 0;
}
