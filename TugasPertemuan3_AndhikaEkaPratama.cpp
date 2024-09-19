#include<iostream>
#include <limits>
using namespace std;

int main(){

    //Tugas Pertemuan 3 No.1
    cout<<"___________________Tugas Ke-1________________________\n";
    int nilai;
    cout<<"Masukkan Nilai\n";
    cin>>nilai;

    if (nilai >= 90){
        cout<<"Anda Mendapatkan Nilai A"<<endl;

    }
    else if(nilai >= 80){
    cout<<"Anda Mendapatkan Nilai B"<<endl;
    }else if(nilai >= 70){
    cout<<"Anda Mendapatkan Nilai C"<<endl;
    }else if(nilai >= 60){
    cout<<"Anda Mendapatkan Nilai D"<<endl;
    }
    else{
    cout<<"Anda Mendapatkan Nilai E"<<endl;
    }
    cout<<"_____________________________________________________\n";
    //Selesai

    //Tugas No.2
    cout<<"___________________Tugas Ke-2________________________\n";
    int angka1,angka2,angka3,terbesar;
    cout<<"Masukkan angka ke-1 \n";
    cin>>angka1;
    cout<<"Masukkan angka ke-2 \n";
    cin>>angka2;
    cout<<"Masukkan angka ke-3 \n";
    cin>>angka3;

    if(angka1 >= angka2 && angka1 >= angka3){
        terbesar = angka1;
    }else if(angka2 >= angka1 && angka2 >= angka3){
        terbesar = angka2;
    }else{terbesar = angka3;}

    cout<<"Angka terbesar adalah : "<<terbesar<<endl;
    cout<<"_____________________________________________________\n";
    //Selesai

    //Tugas ke-3
    cout<<"_____________________Tugas Ke-3______________________\n";
    int pilihan;
    float panjang, lebar, alas, tinggi, sisi, luas;

    //Eksperiment perulangan
    //while(true){
    do{
    cout<<"Pilih bentuk untuk menghitung luas:"<<endl;
    cout<<"1. Luas Persegi"<<endl;
    cout<<"2. Persegi Panjang"<<endl;
    cout<<"3. Segitiga"<<endl;
    cout<<"4. Keluar"<<endl;
    cout<<"Masukkan pilihan (1-4): ";
    cin>>pilihan;

    switch (pilihan) {
        // Luas Persegi
        case 1:
            cout<< "Masukkan panjang sisi persegi: ";
            cin>> sisi;
            luas = sisi * sisi;
            cout<<"******************************************\n";
            cout<< "Luas persegi adalah: "<<luas<<endl;
            cout<<"******************************************\n";
            break;

        // Luas Persegi Panjang
        case 2:
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout<<"******************************************\n";
            cout << "Luas persegi panjang adalah: " << luas << endl;
            cout<<"******************************************\n";
            break;

        // Luas Segitiga
        case 3:
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout<<"******************************************\n";
            cout << "Luas segitiga adalah: " << luas << endl;
            cout<<"******************************************\n";
            break;

        case 4: // Keluar
            cout << "Terima kasih telah menggunakan program ini"<<endl;
            //return 0;//return 0 inni digunakan untuk yang while(true)agar ketika kita mencet 4 maka kita akan mengusongkan nilai yg ada/program selesai

        default: // Jika  tidak valid
            cout << "Pilihan tidak valid" << endl;
            return 0; //dikarenakan ada return 0; bakal ke end kalo input selain 1,2,3
            //tapi kalo return 0; dihapus bakal berfungsi loopingnya meskipun diluar 1,2,3
            //tapi kalo input string bakal jadi infinite loop
    }

    //
//}//akhiran dari while | menggunakan while(true) sama dengan akan selalu mengulang tapi ketika ngetik 4 maka program akan selesai,karena ada return 0;yg mengembalikan nilai
    }while(pilihan !=4 );//menggunakan while-do. ketika milih 4 maka program selesai
                         //ketika diinput 1,2,3 di operator maka tidak akan ada perulangan(langsung selesai)kenapa?
                         //karena akan bernilai false jadi bakal selesai,gk ada perulangan
    //Selesai
    return 0;
}
