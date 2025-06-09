#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 3,5; //melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    
}