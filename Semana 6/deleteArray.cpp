//*****************************************************************************************************
//      Delete Repeats in Array
//
//      This program reads a list of characters from the user and then delete all the repeated
//      characters in the list.
//
//*****************************************************************************************************

#include <iostream>
using namespace std;

//*****************************************************************************************************

const int SIZE_LIMIT = 1024;

void readArray(char[], int &);
void deleteRepeats(char[], int &);
void printArray(char[], int);

//*****************************************************************************************************

int main() {
    char array[SIZE_LIMIT];
    char answer;
    int size;

    do {
        size = 0;

        readArray(array, size);
        deleteRepeats(array, size);

        cout << "\n\nThe array after delete repeats";
        printArray(array, size);

        cout << "\n\nRepeat? (y/n): ";
        cin >> answer;
    
    } while (answer != 'n' && answer != 'N');

    return 0;
}

//*****************************************************************************************************

void readArray(char array[], int &size) {
    cout << "\nWhat is the size: ";
    cin >> size;

    while (size > SIZE_LIMIT || size < 0) {
        cerr << "\nInvalid size. Please enter a size between 0 and " << SIZE_LIMIT;

        cout << "\n\nWhat is the size: ";
        cin >> size;
    }

    cout << "Enter the array (one character at a time): " << endl;

    for (int i = 0; i < size; i++)
        cin >> array[i];
}

//*****************************************************************************************************

void deleteRepeats(char array[], int &size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            while (array[i] == array[j]) {
                cout << "\nFound duplicates at " << i + 1
                     << " and " << j + 1 << " : " << array[i]
                     << " and " << array[j] << endl;

                for (int k = j + 1; k < size; k++)
                    array[k - 1] = array[k];

                array[--size] = 0;
                printArray(array, size);
            }
        }
    }
}

//*****************************************************************************************************

void printArray(char array[], int size) {
    cout << "\nUpdated array: ";

    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}