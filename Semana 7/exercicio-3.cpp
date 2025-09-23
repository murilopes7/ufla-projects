#include <iostream>
using namespace std;

int main(){
    int numero[10], multiple_of_two[10], multiple_of_three[10];

    // Precisei usar estes contadores para eliminar lixo no array, pois a quantidade de itens em  multiple_of_two e o multiple_of_three é menor ou igual
    // a numero e isto deixaria o vetor com valores aleatórios
    int count_two = 0, count_three = 0;

    // Aqui é somente adicionado nos vetores os valores sem o lixo, e count_two e count_three é o tamanho do array de seu respectivo nome
    for (int i = 0; i < 10; i++){
        cin >> numero[i];
        if (numero[i] % 2 == 0){
            multiple_of_two[count_two] = numero[i];
            count_two++;
        }

        if (numero[i] % 3 == 0){
            multiple_of_three[count_three] = numero[i];
            count_three++;
        }
    }

    int biggest_of_two = multiple_of_two[0];
    int biggest_of_three = multiple_of_three[0];

    for (int i = 0; i < count_two; i++)
        if (multiple_of_two[i] >= biggest_of_two) biggest_of_two = multiple_of_two[i];
    
    for (int i = 0; i < count_three; i++)
        if (multiple_of_three[i] >= biggest_of_three) biggest_of_three = multiple_of_three[i];
    
    for (int i = 0; i < count_two; i++) cout << multiple_of_two[i] << " ";

    cout << endl;
    cout << biggest_of_two << endl;

    for (int i = 0; i < count_three; i++) cout << multiple_of_three[i] << " ";

    cout << endl;
    cout << biggest_of_three << endl;

    return 0;
}