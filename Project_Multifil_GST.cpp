#include <iostream>
#include <thread>

using namespace std; 

// Declaracio de la funcio imparells
void printOdds() {
    for (int num = 1; num <= 10; num += 2) {
        cout << "Numeros parells: " << num << endl;
    }
}

// Declaracio de la funcio parells
void printpairs() {
    for (int num = 2; num <= 10; num += 2) {
        cout << "Numeros imparells: " << num << endl;
    }
}

int main() {
    //Creacio fils parells i imparells
    thread oddThread(printOdds);
    thread pairThread(printpairs);

    oddThread.join();
    pairThread.join();

    return 0;
}