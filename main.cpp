#include <iostream>

using namespace std;

void trougao(int n) {
    n = 1 << (n + 1);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) cout << " ";
        bool b = false;
        for (int j = 0; j + i < n; j++) {
            if (i & j) cout << "  ";
            else if ((n - i) % 4 == 0) cout << char(196) << " "; // promeniti char(196) u "-" ako ne radi
            else if ((n - i) % 4 == 1) cout << "^ ";
            else {
                if (b) cout << "\\ ";
                else cout << "/ ";
                b = !b;
            }
        }
        cout << endl;
    }
}

int main() {
    // najbolje da n bude manje od 5 da se ne bi prelamao ispis
    int n;
    cout << "Unesite stepen trougla: ";
    cin >> n;
    cout << endl << endl;
    trougao(n);
    return 0;
}