//
//  main.cpp
//  C++
//
//  Created by Taha Bozkurt on 24.02.2024.
//

#include <iostream>

using namespace std;

int main() {
    int sayilar[4];
    int toplam = 0;
    int carpim = 1;
    float bolum;

    cout << "Lutfen 4 sayi giriniz:\n";
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". sayi: ";
        cin >> sayilar[i];
        toplam += sayilar[i];
        carpim *= sayilar[i];
    }

    bolum = static_cast<float>(toplam) / static_cast<float>(carpim);

    cout << "Toplam: " << toplam << endl;
    cout << "Carpim: " << carpim << endl;
    cout << "Bolum: " << bolum << endl;

    return 0;
}
