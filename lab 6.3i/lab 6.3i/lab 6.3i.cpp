#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// Функція для створення масиву
void create(int* arr, int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

// Функція для виведення масиву
void print(int* arr, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

// Функція для сортування масиву за неспаданням
void sortAscending(int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Шаблонна функція для створення масиву
template <typename T>
void templateCreate(T* arr, const int size, T min, T max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

// Шаблонна функція для виведення масиву
template <typename T>
void templatePrint(T* arr, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << arr[i];
    cout << endl;
}

// Шаблонна функція для сортування масиву за неспаданням
template <typename T>
void templateSortAscending(T* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    srand((unsigned)time(0));

    const int SIZE = 10;
    int MIN = -10;
    int MAX = 10;

    int* arr = new int[SIZE];
    create(arr, SIZE, MIN, MAX);

    print(arr, SIZE);

    // Сортуємо масив за неспаданням
    sortAscending(arr, SIZE);
    print(arr, SIZE);

    // Використовуємо шаблонні функції
    templateCreate(arr, SIZE, MIN, MAX);
    templatePrint(arr, SIZE);

    // Сортуємо масив за неспаданням (шаблонна функція)
    templateSortAscending(arr, SIZE);
    templatePrint(arr, SIZE);

    delete[] arr;
    return 0;
}
