/******************************************************************************

            UAS Stuktur data dan algoritma
            Amirullah Rizqan Majid Airenanta
            NIM 220401010208
            IT-204


Saya buat  menggunakan Linear Search karena untuk binary search, array harus disort terlebih dahulu dan hasil akan beda dgn test case di soal UAS

*******************************************************************************/

#include <iostream>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }

    return -1; 
}

int main() {
    int arr[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int n = sizeof(arr)/ sizeof(arr[0]); ;
    int target;
    std::cout << "Masukan Angka yang Akan Dicari dalam Indeks: ";
    std::cin >> target;

    int result = linearSearch(arr, n, target);
    if (result != -1) {
        std::cout << "Angka "<< target <<" ada di indeks ke " << result + 1 ;
        for (int j = result + 1; j < n; j++) {
            if (arr[j] == target) {
                std::cout << " dan  " << j + 1 ;
            }
        }
    } else {
        std::cout << "Angka " << target <<" tidak ada dalam array" << std::endl;
    }

    return 0;
}
