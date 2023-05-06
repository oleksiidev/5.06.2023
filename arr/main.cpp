#include <iostream>

using namespace std;

template <typename Typ>
void sortArray(Typ myArray[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (myArray[j] > myArray[j+1]) {
                Typ temp = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j+1] = temp;
            }
        }
    }
}

template <typename Typ>
void removeElement(Typ myArray[], int count, int indexElement) {
    if (indexElement >= count) return;
    for (int i = indexElement; i < count - 1; i++) {
        myArray[i] = myArray[i+1];
    }
    myArray[count-1] = Typ();
}

template <typename Typ>
void printArray(Typ myArray[], int count) {
    for (int i = 0; i < count; i++) {
        cout << myArray[i] << " ";
    }
}

int main(int argc, const char * argv[]) {
    int arrayOne[] = {1, 33, 5, 6, 78, 99, 4, 23};
    double arrayTwo[] = {3.4, 66.7, 234.6, 45.3, 12.5, 6.6};
    string arrayThree[] = {"car", "one", "using", "array", "main", "return", "two", "file"};

   cout << "Before sorting: ";
    printArray(arrayOne, 8);
    cout << endl;
    sortArray(arrayOne, 8);
    cout << "After sorting: ";
    printArray(arrayOne, 8);
    cout << endl << endl;

    cout << "Before sorting: ";
    printArray(arrayTwo, 6);
    cout << endl;
    sortArray(arrayTwo, 6);
    cout << "After sorting: ";
    printArray(arrayTwo, 6);
    cout << endl << endl;

    cout << "Before removing element: ";
    printArray(arrayTwo, 6);
    cout << endl;
    removeElement(arrayTwo, 6, 4);
    cout << "After removing element: ";
    printArray(arrayTwo, 5);
    cout << endl << endl;

    cout << "Before sorting: ";
    printArray(arrayThree, 8);
    cout << endl;
    sortArray(arrayThree, 8);
    cout << "After sorting: ";
    printArray(arrayThree, 8);
    cout << endl << endl;

    cout << "Before removing element: ";
    printArray(arrayThree, 8);
    cout << endl;
    removeElement(arrayThree, 8, 3);
    cout << "After removing element: ";
    printArray(arrayThree, 7);
    cout << endl << endl;
    return 0;
}
