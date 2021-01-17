//
// Created by lucas on 01/17/2021.
//

#include "Problem1134.h"

void Problem1134::solve() {
    enum fuel_type {
        alcohol = 1,
        gasoline = 2,
        diesel = 3
    };

    int prefers_alcohol = 0;
    int prefers_gasoline = 0;
    int prefers_diesel = 0;

    int code;

    do {
        cin >> code;

        switch (code) {
            case alcohol:
                prefers_alcohol++;
                break;
            case gasoline:
                prefers_gasoline++;
                break;
            case diesel:
                prefers_diesel++;
                break;
            default:
                break;
        }
    } while (code != 4);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << prefers_alcohol << endl;
    cout << "Gasolina: " << prefers_gasoline << endl;
    cout << "Diesel: " << prefers_diesel << endl;
}

string Problem1134::getName() {
    return "Type of Fuel";
}

int Problem1134::getNumber() {
    return 1134;
}
