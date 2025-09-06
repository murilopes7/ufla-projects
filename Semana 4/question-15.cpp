/*
    Pedro Álvares Cabral precisa organizar as caravelas para carregarem os cavalos, as vacas e as galinhas necessárias para a viagem para as Índias.

    A caravela possui um limite de carga e você deverá calcular a quantidade máxima de cada tipo de animal que a caravela poderá carregar. 
    Lembre-se que Cabral possui uma quantidade limitada de cada tipo de animal, além disso, ele também informou qual o tipo de animal que é prioritário e 
    que tipo de informação ele precisa para poder finalizar sua tarefa.

    A tabela abaixo apresenta o peso de cada tipo de animal:
    Tipo 	Peso
    Cavalo 	250
    Vaca 	150
    Galinha 	2

    Informações extras:

        O objetivo é colocar o máximo de animais, dessa forma os animais de pequeno porte tem prioridade.
        Ao final do processo é necessário ter como informação a quantidade de cada animal que não pode ser incluído na caravela.

    Entradas:

        Limite de Carga (Inteiro).
        Quantidade de cavalos disponíveis (Inteiro).
        Quantidade de vacas disponíveis (Inteiro).
        Quantidade de galinhas disponíveis (Inteiro).

    Saída:

        Quantidade de animais que NÃO podem ser incluídos numa caravela na seguinte ordem: Cavalos, Vacas e Galinhas.

    Exemplo de entrada:

    3000
    10
    10
    10

    Exemplo de saída:

    5
    0
    0
*/

#include <iostream>
using namespace std;

int main() {
    int limite, horse, cow, chicken;
    cin >> limite >> horse >> cow >> chicken;
    
    int peso_restante = limite;
    int galinhas_carregadas = 0, vacas_carregadas = 0, cavalos_carregados = 0;
    
    // 1. Carregar galinhas primeiro (mais leves - peso 2)
    int galinhas_possiveis = peso_restante / 2;  // Quantas galinhas cabem
    galinhas_carregadas = min(galinhas_possiveis, chicken);  // Não pode exceder disponíveis
    peso_restante -= galinhas_carregadas * 2;
    
    // 2. Carregar vacas (peso 150)
    int vacas_possiveis = peso_restante / 150;  // Quantas vacas cabem
    vacas_carregadas = min(vacas_possiveis, cow);  // Não pode exceder disponíveis
    peso_restante -= vacas_carregadas * 150;
    
    // 3. Carregar cavalos por último (mais pesados - peso 250)
    int cavalos_possiveis = peso_restante / 250;  // Quantos cavalos cabem
    cavalos_carregados = min(cavalos_possiveis, horse);  // Não pode exceder disponíveis
    
    // Calcular quantos animais NÃO podem ser incluídos
    int cavalos_nao_incluidos = horse - cavalos_carregados;
    int vacas_nao_incluidas = cow - vacas_carregadas;
    int galinhas_nao_incluidas = chicken - galinhas_carregadas;
    
    // Saída na ordem: Cavalos, Vacas, Galinhas
    cout << cavalos_nao_incluidos << endl;
    cout << vacas_nao_incluidas << endl;
    cout << galinhas_nao_incluidas << endl;
    
    return 0;
}