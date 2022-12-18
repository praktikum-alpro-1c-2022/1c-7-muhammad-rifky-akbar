#include <iostream>
using namespace std;

int main (){
    int i, j, m , n ;

    cout << "Masukkan Baris: ";
    cin >> m;
    cout << "Masukkan Kolom: ";
    cin >> n;
    int matriks1[m][n], matriks2[m][n], hasil[m][n];


    cout << "Masukkan elemen matrik pertama: \n";
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                cin >> matriks1[i][j];
    }
  }
    cout << "Masukkan elemen matrix kedua: \n";
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                cin >> matriks2[i][j];
    }
  }
    cout << "hasil penjumlahan matrix: \n";
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
        hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}

