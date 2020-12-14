#include <iostream>
#include <time.h>
#include <ctime>
using namespace std;

string randomMobil () {
    string nama_Mobil[3] = {"Avanza", "Livina", "Kijang"};
    srand(time(0));
    int random_Mobil = 0 + rand() % 3; 
    string kembalian;
    switch (random_Mobil)
    {
    case 0:
        kembalian = nama_Mobil[0];
        break;
    case 1:
        kembalian = nama_Mobil[1];
        break;
    case 2:
        kembalian = nama_Mobil[2];
        break;
    default:
        kembalian = "Tidak teridentifikasi";
        break;
    }
    return kembalian;
}

char randomHuruf1 () {
    char huruf[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    srand(time(0));
    int random_Huruf = 0 + rand() % 26;
    char kembalian;
    switch (random_Huruf)
    {
    case 0:
        kembalian = huruf[0];
        break;
    case 1:
        kembalian = huruf[1];
        break;
    case 2:
        kembalian = huruf[2];
        break;
    case 3:
        kembalian = huruf[3];
        break;
    case 4:
        kembalian = huruf[4];
        break;
    case 5:
        kembalian = huruf[5];
        break;
    case 6:
        kembalian = huruf[6];
        break;
    case 7:
        kembalian = huruf[7];
        break;
    case 8:
        kembalian = huruf[8];
        break;
    case 9:
        kembalian = huruf[9];
        break;
    case 10:
        kembalian = huruf[10];
        break;
    case 11:
        kembalian = huruf[11];
        break;
    case 12:
        kembalian = huruf[12];
        break;
    case 13:
        kembalian = huruf[13];
        break;
    case 14:
        kembalian = huruf[14];
        break;
    case 15:
        kembalian = huruf[15];
        break;
    case 16:
        kembalian = huruf[16];
        break;
    case 17:
        kembalian = huruf[17];
        break;
    case 18:
        kembalian = huruf[18];
        break;
    case 19:
        kembalian = huruf[19];
        break;
    case 20:
        kembalian = huruf[20];
        break;
    case 21:
        kembalian = huruf[21];
        break;
    case 22:
        kembalian = huruf[22];
        break;
    case 23:
        kembalian = huruf[23];
        break;
    case 24:
        kembalian = huruf[24];
        break;
    case 25:
        kembalian = huruf[25];
        break;
    case 26:
        kembalian = huruf[26];
        break;
    default:
        cout << "Tidak terdaftar";
        break;
    }
    return kembalian;
}

char randomHuruf2 () {
    char huruf[27] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    srand(time(0));
    int random_Huruf = 0 + rand() % 26;
    char kembalian;
    switch (random_Huruf)
    {
    case 0:
        kembalian = huruf[0];
        break;
    case 1:
        kembalian = huruf[1];
        break;
    case 2:
        kembalian = huruf[2];
        break;
    case 3:
        kembalian = huruf[3];
        break;
    case 4:
        kembalian = huruf[4];
        break;
    case 5:
        kembalian = huruf[5];
        break;
    case 6:
        kembalian = huruf[6];
        break;
    case 7:
        kembalian = huruf[7];
        break;
    case 8:
        kembalian = huruf[8];
        break;
    case 9:
        kembalian = huruf[9];
        break;
    case 10:
        kembalian = huruf[10];
        break;
    case 11:
        kembalian = huruf[11];
        break;
    case 12:
        kembalian = huruf[12];
        break;
    case 13:
        kembalian = huruf[13];
        break;
    case 14:
        kembalian = huruf[14];
        break;
    case 15:
        kembalian = huruf[15];
        break;
    case 16:
        kembalian = huruf[16];
        break;
    case 17:
        kembalian = huruf[17];
        break;
    case 18:
        kembalian = huruf[18];
        break;
    case 19:
        kembalian = huruf[19];
        break;
    case 20:
        kembalian = huruf[20];
        break;
    case 21:
        kembalian = huruf[21];
        break;
    case 22:
        kembalian = huruf[22];
        break;
    case 23:
        kembalian = huruf[23];
        break;
    case 24:
        kembalian = huruf[24];
        break;
    case 25:
        kembalian = huruf[25];
        break;
    case 26:
        kembalian = huruf[26];
        break;
    default:
        cout << "Tidak terdaftar";
        break;
    }
    return kembalian;
}

int randomNumber1 () {
    int number[10] = {0,1,2,3,4,5,6,7,8,9};
    srand(time(0));
    int random_Number = 0 + rand() % 10;
    int kembalian;
    switch (random_Number)
    {
    case 0:
        kembalian = number[0];
        break;
    case 1:
        kembalian = number[1];
        break;
    case 2:
        kembalian = number[2];
        break;
    case 3:
        kembalian = number[3];
        break;
    case 4:
        kembalian = number[4];
        break;
    case 5:
        kembalian = number[5];
        break;
    case 6:
        kembalian = number[6];
        break;
    case 7:
        kembalian = number[7];
        break;
    case 8:
        kembalian = number[8];
        break;
    case 9:
        kembalian = number[9];
        break;
    case 10:
        kembalian = number[10];
        break;
    default:
        cout << "Tidak terdaftar";
        break;
    }
    return kembalian;
}

int randomNumber2 () {
    int number[10] = {0,2,4,6,8,1,3,5,7,9};
    srand(time(0));
    int random_Number = 0 + rand() % 10;
    int kembalian;
    switch (random_Number)
    {
    case 0:
        kembalian = number[0];
        break;
    case 1:
        kembalian = number[1];
        break;
    case 2:
        kembalian = number[2];
        break;
    case 3:
        kembalian = number[3];
        break;
    case 4:
        kembalian = number[4];
        break;
    case 5:
        kembalian = number[5];
        break;
    case 6:
        kembalian = number[6];
        break;
    case 7:
        kembalian = number[7];
        break;
    case 8:
        kembalian = number[8];
        break;
    case 9:
        kembalian = number[9];
        break;
    case 10:
        kembalian = number[10];
        break;
    default:
        cout << "Tidak terdaftar";
        break;
    }
    return kembalian;
}

int randomNumber3 () {
    int number[10] = {5,6,7,8,9,0,1,2,3,4};
    srand(time(0));
    int random_Number = 0 + rand() % 10;
    int kembalian;
    switch (random_Number)
    {
    case 0:
        kembalian = number[0];
        break;
    case 1:
        kembalian = number[1];
        break;
    case 2:
        kembalian = number[2];
        break;
    case 3:
        kembalian = number[3];
        break;
    case 4:
        kembalian = number[4];
        break;
    case 5:
        kembalian = number[5];
        break;
    case 6:
        kembalian = number[6];
        break;
    case 7:
        kembalian = number[7];
        break;
    case 8:
        kembalian = number[8];
        break;
    case 9:
        kembalian = number[9];
        break;
    case 10:
        kembalian = number[10];
        break;
    default:
        cout << "Tidak terdaftar";
        break;
    }
    return kembalian;
}

int randomNumber4 () {
    int number[10] = {0,9,1,8,2,7,3,6,4,5};
    srand(time(0));
    int random_Number = 0 + rand() % 10;
    int kembalian;
    switch (random_Number)
    {
    case 0:
        kembalian = number[0];
        break;
    case 1:
        kembalian = number[1];
        break;
    case 2:
        kembalian = number[2];
        break;
    case 3:
        kembalian = number[3];
        break;
    case 4:
        kembalian = number[4];
        break;
    case 5:
        kembalian = number[5];
        break;
    case 6:
        kembalian = number[6];
        break;
    case 7:
        kembalian = number[7];
        break;
    case 8:
        kembalian = number[8];
        break;
    case 9:
        kembalian = number[9];
        break;
    case 10:
        kembalian = number[10];
        break;
    default:
        cout << "Tidak terdaftar";
        break;
    }
    return kembalian;
}

int main (){
    // variable pelengkap
    char question = 'n';
    char shutdown = 'n';
    int pesan;
    int masukan = 0;
    int parkiran;
    // variable untuk banner
    string Header = "Selamat Datang di Program Smart Parking";
    string Destinasi = "Terima Kasih Telah Berkunjung di MALL OLYMPIC GARDEN MALANG";
    string Jenis_Mobil = "Jenis Mobil Anda : ";
    string Nomor_Plat = "Nomor Plat Anda  : ";
    // variable untuk waktu
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int Day = ltm->tm_mday;
    int Month = ltm->tm_mon;
    int Year = ltm->tm_year;
    int Hour = ltm->tm_hour;
    int Minute = ltm->tm_min;
    int row, col, min, maks;
    // variable untuk array
    row = 10;
    col = 10;
    min = 1;
    maks = 10;
    int kembalian;
    int a[col][row], b[col][row], c[col][row], Temp1, Temp2;
    int out;
    // start array
    srand(time(0));
    system("CLS");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            b[i][j] = 0;
        }
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            c[i][j] = 0;
        }
    }
    // parent perulangan program
    while (shutdown == 'N' || shutdown == 'n')
    {
        // variable untuk random plat nomor dan jenis mobil
        char huruf1 = randomHuruf1();
        char huruf2 = randomHuruf2();
        int number1 = randomNumber1();
        int number2 = randomNumber2();
        int number3 = randomNumber3();
        int number4 = randomNumber4();
        string mobil= randomMobil();
        // looping untuk membuat banner
        system ("CLS");
        for (int i=0; i <10; i++){
            for(int j=0; j<70; j++){
            if(i == 0 or i == 9 ){
                cout <<"~";
            }
            else if(j == 0 || j == 69){
                cout <<"|";
            } else if (j == 15 && i == 1){
                    j = 53;
                    cout << Header;
            } else if (j == 5 && i == 2){
                    j = 63;
                    cout << Destinasi;
                }
            else if (j == 5 && i == 4){
                    j = 29;
                    cout << Jenis_Mobil<<mobil;
                }
            else if (j == 5 && i == 5){
                    j = 31;
                    cout << Nomor_Plat << huruf1 << " " << number1 << number2 << number3 << number4 << " " << huruf2;
                }
            else if (j == 20 && i == 8){
                    if (Minute < 10 && Hour > 10 || Minute > 10 && Hour < 10){
                    j = 48;
                    cout << "Tanggal : "<<Day<<"/"<< 1 + Month<<"/"<<1900 + Year<<" Jam "<<Hour <<"."<<Minute;}
                    if(Hour < 10 && Minute < 10){
                    j = 46;
                    cout << "Tanggal : "<<Day<<"/"<< 1 + Month<<"/"<<1900 + Year<<" Jam "<<Hour <<"."<<Minute;}
                    if (Minute > 10 && Hour > 10){
                    j = 49;
                    cout << "Tanggal : "<<Day<<"/"<< 1 + Month<<"/"<<1900 + Year<<" Jam "<<Hour <<"."<<Minute;}
                    }
            else{
                cout <<" ";
            }
            
        }
        cout <<"\n";
        }
        // pengkondisian untuk memprint banner pilihan lantai
        if (shutdown == 'n' || shutdown == 'N') {
            cout <<"\n\n";
            for (int i=0; i <5; i++){
                cout <<"      ";
                for(int j=0; j<58; j++){
                    if(i == 0 || i == 4 ){
                        if(j >= 1 && j < 13){
                        cout <<"~";
                        } else if (j > 22 && j < 35){
                            cout << "~";
                        } else if (j > 44 && j < 57){
                            cout << "~";
                        }
                        else {
                            cout <<" ";
                        }
                    }
                    else if(j == 1 || j == 12 ){
                        cout <<"|";
                    }
                    else if (j == 23 || j == 34 ){
                        cout << "|";
                    }
                    else if (j == 45 || j == 56 ){
                        cout << "|";
                    }
                    else if(j == 3 && i == 2 ){
                        j = 10;
                        cout <<"Lantai 1";
                    }
                    else if(j == 25 && i == 2 ){
                        j = 32;
                        cout <<"Lantai 2";
                    }
                    else if(j == 47 && i == 2 ) { 
                        j = 54;
                        cout <<"Lantai 3";
                    }
                    else {
                        cout << " ";
                    }
                }
                cout <<endl;
            }
        }
        // perulangan di dalam perulangan untuk memilih nomor lantai dan merecord mobil
        do 
        {
            // perintah masukan nomor lantai
            cout << "\nMasukkan Nomor Lantai : ";
            cin >> pesan;
            // pengkondisian berdasarkan lantai yang dipilih
            switch (pesan)
            {
            case 1:
                cout<< "Lahan tersedia di lantai 1" << endl;
                cout << "Keterangan: " << endl;
                cout << "1 => lahan parkir tidak tersedia" << endl;
                cout << "0 => lahan parkir tersedia\n" << endl;
                // LahanParkir dalam bentuk matriks
                if (masukan < 1) {
                    for (int i = 0; i < row; i++){
                        for (int j = 0; j < col; j++){
                            cout << a[i][j] << "\t";
                        }
                    cout << endl;
                    }
                }
                if (masukan >= 1) {
                    for (int i = 0; i < row; i++){
                        for (int j = 0; j < col; j++){
                        cout << a[i][j] << "\t";
                        }
                    if (row == 5)
                    {
                        cout << endl;
                    }
                    cout <<endl;
                    }
                }
                // End lahanparkir
                // pengkondisian untuk mendaftarkan mobil yang parkir di lantai tertentu
                cout << "Apakah anda yakin akan parkir di lantai ini? (Y/N) ";
                cin >> question;
                if (question == 'y' || question == 'Y')
                {
                    Temp1 = 0 + rand() % 20;
                    Temp2 = 0 + rand() % 20;
                    a[Temp1][Temp2] = 1;
                    out = 0 + rand() % 10;
                    if (out == 5){
                        for (int i = 0; i < 5; i++){
                            for (int j = 0; j < 5; j++){
                                if (a[i][j] == 1){
                                    a[i][j] = 0; 
                                    break;
                                }
                            }
                        }
                    }
                } else {
                    // kondisi untuk menampilkan ulang banner pilihan lantai
                    cout <<"\n\n";
                    for (int i=0; i <5; i++){
                        cout <<"      ";
                        for(int j=0; j<58; j++){
                            if(i == 0 || i == 4 ){
                                if(j >= 1 && j < 13){
                                cout <<"~";
                                } else if (j > 22 && j < 35){
                                    cout << "~";
                                } else if (j > 44 && j < 57){
                                    cout << "~";
                                }
                                else {
                                    cout <<" ";
                                }
                            }
                            else if(j == 1 || j == 12 ){
                                cout <<"|";
                            }
                            else if (j == 23 || j == 34 ){
                                cout << "|";
                            }
                            else if (j == 45 || j == 56 ){
                                cout << "|";
                            }
                            else if(j == 3 && i == 2 ){
                                j = 10;
                                cout <<"Lantai 1";
                            }
                            else if(j == 25 && i == 2 ){
                                j = 32;
                                cout <<"Lantai 2";
                            }
                            else if(j == 47 && i == 2 ) { 
                                j = 54;
                                cout <<"Lantai 3";
                            }
                            else {
                                cout << " ";
                            }
                        }
                        cout <<endl;
                    }
                }
                break;
            case 2:
                cout<< "Lahan tersedia di lantai 2" << endl;
                cout << "Keterangan: " << endl;
                cout << "1 => lahan parkir tidak tersedia" << endl;
                cout << "0 => lahan parkir tersedia\n" << endl;
                // LahanParkir dalam bentuk matriks
                if (masukan < 1) {
                    for (int i = 0; i < row; i++){
                        for (int j = 0; j < col; j++){
                            cout << b[i][j] << "\t";
                        }
                    cout << endl;
                    }
                }
                if (masukan >= 1) {
                    for (int i = 0; i < row; i++){
                        for (int j = 0; j < col; j++){
                        cout << b[i][j] << "\t";
                        }
                    cout <<endl;
                    }
                }
                // End lahanparkir
                // pengkondisian untuk mendaftarkan mobil yang parkir di lantai tertentu
                cout << "Apakah anda yakin akan parkir di lantai ini? (Y/N) ";
                cin >> question;
                if (question == 'y' || question == 'Y')
                {
                    Temp1 = 0 + rand() % 20;
                    Temp2 = 0 + rand() % 20;
                    b[Temp1][Temp2] = 1;
                    out = 0 + rand()%10;
                    if (out == 5){
                        for (int i = 0; i < 5; i++){
                            for (int j = 0; j < 5; j++){
                                if (b[i][j] == 1){
                                    b[i][j] = 0; 
                                    break;
                                }
                            }
                        }
                    }
                } else {
                    // kondisi untuk menampilkan ulang banner pilihan lantai
                    cout <<"\n\n";
                    for (int i=0; i <5; i++){
                        cout <<"      ";
                        for(int j=0; j<58; j++){
                            if(i == 0 || i == 4 ){
                                if(j >= 1 && j < 13){
                                cout <<"~";
                                } else if (j > 22 && j < 35){
                                    cout << "~";
                                } else if (j > 44 && j < 57){
                                    cout << "~";
                                }
                                else {
                                    cout <<" ";
                                }
                            }
                            else if(j == 1 || j == 12 ){
                                cout <<"|";
                            }
                            else if (j == 23 || j == 34 ){
                                cout << "|";
                            }
                            else if (j == 45 || j == 56 ){
                                cout << "|";
                            }
                            else if(j == 3 && i == 2 ){
                                j = 10;
                                cout <<"Lantai 1";
                            }
                            else if(j == 25 && i == 2 ){
                                j = 32;
                                cout <<"Lantai 2";
                            }
                            else if(j == 47 && i == 2 ) { 
                                j = 54;
                                cout <<"Lantai 3";
                            }
                            else {
                                cout << " ";
                            }
                        }
                        cout <<endl;
                    }
                }
                break;
            case 3:
                cout<< "Lahan tersedia di lantai 3" << endl;
                cout << "Keterangan: " << endl;
                cout << "1 => lahan parkir tidak tersedia" << endl;
                cout << "0 => lahan parkir tersedia\n" << endl;
                // LahanParkir dalam bentuk matriks
                if (masukan < 1) {
                    for (int i = 0; i < row; i++){
                        for (int j = 0; j < col; j++){
                            cout << c[i][j] << "\t";
                        }
                    cout << endl;
                    }
                }
                if (masukan >= 1) {
                    for (int i = 0; i < row; i++){
                        for (int j = 0; j < col; j++){
                        cout << c[i][j] << "\t";
                        }
                    cout <<endl;
                    }
                }
                // End lahanparkir
                // pengkondisian untuk mendaftarkan mobil yang parkir di lantai tertentu
                cout << "Apakah anda yakin akan parkir di lantai ini? (Y/N) ";
                cin >> question;
                if (question == 'y' || question == 'Y')
                {
                    Temp1 = 0 + rand() % 20;
                    Temp2 = 0 + rand() % 20;
                    c[Temp1][Temp2] = 1;
                    out = 0 + rand()%10;
                    if (out == 5){
                        for (int i = 0; i < 5; i++){
                            for (int j = 0; j < 5; j++){
                                if (c[i][j] == 1){
                                    c[i][j] = 0;
                                    break;
                                }
                            }
                        }
                    }
                } else {
                    // kondisi untuk menampilkan ulang banner pilihan lantai
                    cout <<"\n\n";
                    for (int i=0; i <5; i++){
                        cout <<"      ";
                        for(int j=0; j<58; j++){
                            if(i == 0 || i == 4 ){
                                if(j >= 1 && j < 13){
                                cout <<"~";
                                } else if (j > 22 && j < 35){
                                    cout << "~";
                                } else if (j > 44 && j < 57){
                                    cout << "~";
                                }
                                else {
                                    cout <<" ";
                                }
                            }
                            else if(j == 1 || j == 12 ){
                                cout <<"|";
                            }
                            else if (j == 23 || j == 34 ){
                                cout << "|";
                            }
                            else if (j == 45 || j == 56 ){
                                cout << "|";
                            }
                            else if(j == 3 && i == 2 ){
                                j = 10;
                                cout <<"Lantai 1";
                            }
                            else if(j == 25 && i == 2 ){
                                j = 32;
                                cout <<"Lantai 2";
                            }
                            else if(j == 47 && i == 2 ) { 
                                j = 54;
                                cout <<"Lantai 3";
                            }
                            else {
                                cout << " ";
                            }
                        }
                        cout <<endl;
                    }
                }
                break;
            default:
                cout<< "Maaf Lantai Yang Anda Tuju Tidak Tersedia";
                cout << "\nSilahkan tekan tombol N untuk memilih ulang: ";
                cin >> question;
                if (question == 'Y' || question == 'y') {
                    continue;
                } else {
                    // kondisi untuk menampilkan ulang banner pilihan lantai
                    cout <<"\n\n";
                    for (int i=0; i <5; i++){
                        cout <<"      ";
                        for(int j=0; j<58; j++){
                            if(i == 0 || i == 4 ){
                                if(j >= 1 && j < 13){
                                cout <<"~";
                                } else if (j > 22 && j < 35){
                                    cout << "~";
                                } else if (j > 44 && j < 57){
                                    cout << "~";
                                }
                                else {
                                    cout <<" ";
                                }
                            }
                            else if(j == 1 || j == 12 ){
                                cout <<"|";
                            }
                            else if (j == 23 || j == 34 ){
                                cout << "|";
                            }
                            else if (j == 45 || j == 56 ){
                                cout << "|";
                            }
                            else if(j == 3 && i == 2 ){
                                j = 10;
                                cout <<"Lantai 1";
                            }
                            else if(j == 25 && i == 2 ){
                                j = 32;
                                cout <<"Lantai 2";
                            }
                            else if(j == 47 && i == 2 ) { 
                                j = 54;
                                cout <<"Lantai 3";
                            }
                            else {
                                cout << " ";
                            }
                        }
                        cout <<endl;
                    }
                }
                break;
            }
        } while (question == 'N' || question == 'n');
        // pemberitahuan jenis mobil apa dengan plat nomor berapa parkir di lantai sekian
        cout << "Mobil dengan jenis "<< mobil;
        cout << " dan dengan plat nomor " << huruf1 << " " << number1 << number2 << number3 << number4 << " " << huruf2 << " parkir di lantai " << pesan;
        // kondisi ketika pengemudi sudah benar benar parkir --> ojek online yang sudah selesai mengantar barang atau penumpang
        cout << "\nApakah anda akan mengakhiri program? (Y/N) ";
        cin >> shutdown;
    }
    return 0;
}
