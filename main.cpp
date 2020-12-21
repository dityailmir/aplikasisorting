#include <iostream>
#include "bubbbleselect.h"

using namespace std;

int main()
{
    string pil;
    cout << "===================================" << endl;
    cout << "S O R T I N G   A L G O R I T M A" << endl;
    cout << "===================================" << endl;
    cout << " 1. Algoritma Bubble Sort " << endl;
    cout << " 2. Algoritma Selection Sort " << endl;
    cout << " pilihan : " << endl;
    cin >> pil;
    while (pil != "0"){
        if (pil == "1"){
            cout << " " << endl;
            cout<<"ALGORITMA BUBBLE SORT"<<endl;
            cout<<"----------------------"<<endl;
            int array[100], n, i, j;
            cout << "Masukkan banyak elemen: ";
            cin >> n;
            cout << "Masukkan nilai: \n";
            for (i = 0; i < n; i++){
                cout<<"Masukan Data Ke-"<<i+1<<" = ";
                cin >> array[i];
            }
            cout << " " << endl;
            cout << "Data sebelum diurut:\n";
            for (i = 0; i < n; i++){
                cout << array[i] << " ";
            }
            cout << " " << endl;
            bubbleSort(array, n);
            cout << "Hasil setelah pengurutan:\n";
            for (i = 0; i < n; i++){
                cout << array[i] << " ";
            }
            cout << "\n";
        } else if (pil == "2"){
            cout << " " << endl;
            cout<<"ALGORITMA SELECTION SORT"<<endl;
            cout<<"----------------------"<<endl;
            int array[100], n, i, j;
            cout << "Masukkan banyak elemen: ";
            cin >> n;
            cout << "Masukkan nilai: \n";
            for (i = 0; i < n; i++){
                cout<<"Masukan Data Ke-"<<i+1<<" = ";
                cin >> array[i];
            }
            cout << " " << endl;
            cout << "Data sebelum diurut:\n";
            for (i = 0; i < n; i++){
                cout << array[i] << " ";
            }
            cout << " " << endl;
            cout << "Proses Pengurutan: " << endl;
            selectionSort(array, n);
            cout << " " << endl;
            cout << "Hasil setelah pengurutan:\n";
            for (i = 0; i < n; i++){
                cout << array[i] << " ";
            }
            cout << "\n";

            system("pause");
        } else {
            cout << "inputan tidak valid" << endl;
        }
        cout << " pilihan : " << endl;
        cin >> pil;
    }

    return 0;
}
