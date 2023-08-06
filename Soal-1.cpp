/******************************************************************************

            UAS Stuktur data dan algoritma
            Amirullah Rizqan Majid Airenanta
            NIM 220401010208
            IT-204

*******************************************************************************/

#include <iostream>
#include <string>

struct nama {
    std::string name;
    std::string asal;
};

void bubleSort(nama arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].name > arr[j + 1].name) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void selectionSort(nama arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].name < arr[minIndex].name) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}
int main() {
    nama alamat[] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };
    int n = sizeof(alamat) / sizeof(alamat[0]);

    std::cout << "List sebelum disort:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << alamat[i].name << " - " << alamat[i].asal << std::endl;
    }

    bubleSort(alamat, n);

    std::cout << "\nList setelah disort menggunakan Buble Sort:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << alamat[i].name << " - " << alamat[i].asal << std::endl;
    }
    selectionSort(alamat, n);

    std::cout << "\nList setelah disort menggunakan Selection Sort:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << alamat[i].name << " - " << alamat[i].asal << std::endl;
    }

    return 0;
}
