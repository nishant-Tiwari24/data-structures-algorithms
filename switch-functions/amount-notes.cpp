#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes;

    switch (notes) {
        case 100:
            int hundred = amount / 100;
            amount = amount - (hundred * 100);
            cout << "Hundred rupee notes: " << hundred << endl;
            break;
        case 50:
            int fifty = amount / 50;
            amount = amount - (fifty * 50);
            cout << "Fifty rupee notes: " << fifty << endl;
            break;
        case 20:
            int twenty = amount / 20;
            amount = amount - (twenty * 20);
            cout << "Twenty rupee notes: " << twenty << endl;
            break;
        case 10:
            int ten = amount / 10;
            amount = amount - (ten * 10);
            cout << "Ten rupee notes: " << ten << endl;
            break;
        case 1:
            int one = amount / 1;
            amount = amount - (one * 1);
            cout << "One rupee notes: " << one << endl;
            break;
        default:
            cout << "Amount is less than 1" << endl;
    }

    return 0;
}
