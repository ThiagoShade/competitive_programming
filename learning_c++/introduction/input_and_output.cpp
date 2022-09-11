#include <iostream>
/*
Uma standard library que adiciona
fluxos de entrada e saída de dados.
Ela define 2 tipos de dados, "istream",
fluxo de entrada, e "ostream" fluxo de saída.

Além da cin e cout, a iostream também define
outros 2 objetos do tipo "ostream", que são
cerr, que é o fluxo padrão de erro.
clog, que é o fluxo padrão de informações gerais.
*/

int main() {

    int n1 = 0, n2 = 0;

    std::cout << "Digite dois números:" << std::endl;
    /*
    cout é um objeto que representa 
    o fluxo padrão de saída, cout é do tipo
    "ostream"

    endl: Write a newline and flush the stream.
    This manipulator is often mistakenly used when 
    a simple newline is desired, leading to poor 
    buffering performance

    Sempre que mudamos o tipo do que está saindo devemos
    usar o operador << novamente.
    */
    std::cin >> n1 >> n2;
    /*
    cin é um objeto que representa
    o fluxo padrão de entrada, cin é do tipo
    "istream".

    Sempre que mudamos em qual variável um valor vai ficar
    devemos usar o operador >> novamente.
    */
    std::cout << "A soma de " << n1 << " e " << n2 << " é : " << n1+n2 << std::endl;
    
    printf("top\n"); //As funções scanf e printf também podem ser usadas em c++.
    
    
    return 0;
}

/*
Motivo do std::

cout é o objeto de fluxo de saída padrão
que é declarado pela iostream no escopo da
biblioteca "standard", e o :: é o operador de escopo,
ou seja, estamos referenciando o objeto cout que está
no escopo de standard. Mas vamos "tirar" a necessidade
de escrever isso nas próximas vezes usando um namespace.

*/