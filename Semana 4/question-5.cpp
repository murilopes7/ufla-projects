/*
    Em muitos programas é muito útil ter os dados em uma determinada ordem: números do menor para o maior, palavras em ordem alfabética, etc. Nesse exercício você deve criar um programa que recebe três números inteiros em ordem crescente, ou seja, o usuário fornecerá os números garantindo que o segundo é maior que o primeiro e o terceiro é maior que o segundo. O programa deverá receber também um quarto número inteiro qualquer e, deve exibir os quatro números em ordem crescente. Atente para o caso em que o quarto número pode ser igual a um dos demais.

    Entradas:

        Três números inteiros informados em ordem crescente. Um número inteiro qualquer. Cada dado de entrada será fornecido em uma linha diferente.

    Saídas:

        Os quatro números inteiros informados exibidos em ordem crescente.

    Exemplo de entrada:

    3 
    6 
    9
    4

    Exemplo de saída:

    3 4 6 9

    Exemplo de Entrada:

    1
    5
    7
    11

    Exemplo de Saída:

    1 5 7 11

    Exemplo de Entrada:

    3
    6
    12
    2

    Exemplo de Saída:

    2 3 6 12
*/

/*
    #include <iostream>
    using namespace std;

    int main() {
        int number1, number2, number3, number4;
        cin >> number1 >> number2 >> number3 >> number4;

        //3 6 9 4
        if (number2 > number1){

            // 3 6 9 4
            if (number3 > number2){

                // 3 6 9 12
                if (number4 >= number3)
                    cout << number1 << endl << number2 << endl << number3 << endl << number4 << endl;

                // 3 6 9 6
                else if (number4 >= number2)
                    cout << number1 << endl << number2 << endl << number4 << endl << number3 << endl; 

                // 3 6 9 3
                else if (number4 >= number1)
                    cout << number1 << endl << number4 << endl << number2 << endl << number3 << endl; 
            }

            // 3 6 6 12
            // 3 6 5 9
            else {

                // 3 6 5 5
                if (number4 >= number3)
                    cout << number1 << endl << number2 << endl << number3 << endl << number4 << endl; 

                // 3 6 5 6
                else if (number4 >= number2)
                    cout << number1 << endl << number3 << endl << number2 << endl << number4 << endl; 


                // 3 6 5 3
                else if (number4 >= number1)
                    cout << number1 << endl << number4 << endl << number3 << endl << number2 << endl; 
            }
        }

        // 3 2 5 6 
        else {

            // 3 2 5 6 
            if (number3 > number2){
                // 3 2 5 6 
                if (number4 >= number3)
                    cout << number2 << endl << number1 << endl << number3 << endl << number4 << endl; 

                // 3 2 5 2 
                else if (number4 >= number2)
                    cout << number2 << endl << number4 << endl << number1 << endl << number3 << endl; 

                // 3 2 5 3 
                else if (number4 >= number1)
                    cout << number2 << endl << number1 << endl << number4 << endl << number3 << endl; 

            }

            // 3 2 2 5
            // 2 <= 1 and 2 >= 3 => 3 <= 2 <= 1 
            else {
                // 3 2 1 3
                if (number4 >= number3)
                    cout << number3 << endl << number2 << endl << number1 << endl << number4 << endl; 

                // 3 2 1 2
                else if (number4 >= number2)
                    cout << number3 << endl << number2 << endl << number4 << endl << number1 << endl; 

                // 3 2 1 3 
                else if (number4 >= number1)
                    cout << number3 << endl << number2 << endl << number1 << endl << number4 << endl; 

            }
        }
            
        return 0;
    }
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;
    
    // Lê os três primeiros números (já em ordem crescente)
    cin >> num1 >> num2 >> num3;
    
    // Lê o quarto número
    cin >> num4;
    
    // Encontra a posição correta para inserir o quarto número
    if (num4 <= num1) {
        // Inserir no início: num4, num1, num2, num3
        cout << num4 << " " << num1 << " " << num2 << " " << num3 << endl;
    }
    else if (num4 <= num2) {
        // Inserir entre o primeiro e segundo: num1, num4, num2, num3
        cout << num1 << " " << num4 << " " << num2 << " " << num3 << endl;
    }
    else if (num4 <= num3) {
        // Inserir entre o segundo e terceiro: num1, num2, num4, num3
        cout << num1 << " " << num2 << " " << num4 << " " << num3 << endl;
    }
    else {
        // Inserir no final: num1, num2, num3, num4
        cout << num1 << " " << num2 << " " << num3 << " " << num4 << endl;
    }
    
    return 0;
}