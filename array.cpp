//ARRAY STATIS// dimana nilai index sudah dideklarasi diawal

// #include <iostream>
// using namespace std;

// int main(){
//     int nilai[3];
    
//     cout << "Masukkan nilai pertama : ";
//     cin >> nilai[0];
    
//     cout << "Masukkan nilai kedua : ";
//     cin >> nilai[1];

//     cout << "Masukkan nilai ketiga : ";
//     cin >> nilai[2];

//     cout << "Nilai pertama " << nilai[0] << endl;
//     cout << "Nilai kedua " << nilai[1] << endl;
//     cout << "Nilai ketiga " << nilai[2] << endl;
//     return 0;
// }

// ARRAY DINAMIS // nilai index sesuai input user
// #include <iostream>
// using namespace std;

// int main()
// {
//     int index, no, jml_data, ur;
    
//     //input jumlah data
//     cout << "Masukkan jumlah data mahasiswa : "; cin >> jml_data;

//     //deklarasi array dengan jumlah elemen dinamis
//     int nilai[jml_data];

//     //menginput sesuai dengan jumlah data
//     cout << "Input nilai mahasiswa : \n";
//     for(index = 0; index < jml_data; index++){
//         no = index + 1;
//         cout << "Mahasiswa ke-" << no << " : ";
//         cin >> nilai[index];
//     }

//     // tampilkan nilai 
//     ur=0;
//     cout << "Nilai mahasiswa yang telah diinput\n";
//     for(index = 0; index < jml_data; index++){
//         cout << nilai[index] << "\n";
//     }

//     return 0;
// }

// ARRAY DUA DIMENSI 

// #include <iostream>
// using namespace std;

// int main()
// {
//     int baris, kolom, matriks[3][4];

//     cout << "Input elemen array : \n";
//     for(baris = 0; baris < 3; baris++){
//         for(kolom = 0; kolom < 4; kolom++){
//             cout << "Matriks[" << baris+1<< "][" << kolom+1 << "] = ";
//             cin >> matriks[baris][kolom];
//         }
//         cout << endl;
//     }

//     cout << "Isi array : \n";
//     for(baris = 0; baris < 3; baris++){
//         for(kolom = 0; kolom < 4; kolom++){
//             cout << " " << matriks[baris][kolom];
//         }
//         cout << endl;
//     }
//     return 0;
// }