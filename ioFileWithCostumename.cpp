#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namefile;


    cout <<"masukan Nama File : ";
    cin >> namefile;
    cin.ignore();

    //membuat objek output file stream.
    ofstream outfile;
    //membuka file untuk ditulisi
    outfile.open(namefile + ".txt");

    cout << ">= Menulis File, \'q'\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu kelas
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;

 }
// selesai dalam menulis sekarang tutup filenya
outfile.close();

//membuat objek input file stream
ifstream infile;
//membuka file yang dituliskan
infile.open(namefile + ".txt ");

cout << endl << ">=membuka dan membaca file " << endl;
//jika file anda maka
if(infile.is_open())
{
    //melakukan perulangan setiap baris
    while(getline(infile, baris))
    {
        //dan tampilkan disini
        cout << baris << '\n';
    }
    //tutup file tersebut setelah selesai
    infile.close();
}
//jika tidak ditemukan file maka akan menampilkan ini
else cout << "unable to opne file";
return 0;

}