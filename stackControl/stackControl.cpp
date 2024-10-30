#include <iostream>
using namespace std;

struct Popa {
    int data;

    Popa* next;


    Popa* top{ NULL };

    void push(int value) {
        Popa* ptr = new Popa();
        ptr->data = value;
        ptr->next = top;
        top = ptr;
    }

    void show() {
        Popa* ptr = top;

        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }

    }

    void pop(int value) {

        for (int i{ 0 }; i < value; i++) {

            Popa* ptr = top;
            top = top->next;
            delete(ptr);
        }
    }
    void arr() {
        Popa* ptr = top;
        int n{ 0 };
        int medium{ 0 };
        while (ptr != nullptr) {
            medium += ptr->data;
            ptr = ptr->next;
            n++;
        }
        medium = medium / n;
        cout << "Среднее арифметическое: " << medium;
    }
};


int main() {
    setlocale(LC_ALL, "");

    Popa Stack;

    int x{ 0 };
    int y;
    cout << "Введите кол-во элементов в стэке: ";
    cin >> x;



    for (int i{ 1 }; i <= x; i++) {
        cout << "Введите элемент: ";
        cin >> y;
        Stack.push(y);
    }
    int z;
    cout << "Введите кол-во срезаемых элементов ";
    cin >> z;


    Stack.show();

    Stack.pop(z);

    cout << endl;
    Stack.show();

    cout << endl;
    Stack.arr();

}
