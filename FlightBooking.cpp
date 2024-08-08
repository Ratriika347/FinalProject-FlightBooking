#include <iostream>
#include <fstream>
#include <string>
#include <random>

using namespace std;

void baca_txt(string lokasiBerkas) {
    string baris;
    ifstream obj_file;
    obj_file.open(lokasiBerkas);

    if (obj_file.is_open()) {
        while (getline(obj_file, baris)) {
            cout << baris << '\n';
        }
        obj_file.close();
    } else {
        cout << "Unable to open file";
    }
}

struct nama_pemesan {
    string nama_lengkap;
};
struct contact {
    char no_tlp[15];
    string email;
};
struct penerbangan {
    string bulan, rute_penerbangan, maskapai_pesawat, waktu_penerbangan, kelas;
    int tanggal, harga_tiket;
};
struct {
    struct nama_pemesan data_nama;
    struct contact data_contact;
    struct penerbangan data_penerbangan;
} data_pemesan;


void data_diri() {
    system("cls");

    cout << "==========================================\nSelamat Datang Di BOOKINGTIKET2024.COM\n==========================================\n";
    cout << "   Silakan Mengisi Data Diri Anda" << endl;
    cin.ignore();
    cout << "   Nama Lengkap: "; getline(cin, data_pemesan.data_nama.nama_lengkap);
    cout << "   Email: "; getline(cin, data_pemesan.data_contact.email);
    cout << "   No. Handphone: "; cin >> data_pemesan.data_contact.no_tlp;
}

int rute_keberangkatan() {
    int pilih_tujuan;

    system("cls");
    
    while (true) {
        baca_txt("berkas/dataPesawat.txt");
        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
        cout << "Masukkan Pilihan: "; cin >> pilih_tujuan;
        cout << "------------------------------------------";
        
        ofstream data;
        data.open("berkas/dataPemesan.txt", ios::app);
        if (pilih_tujuan == 1) {
            data_pemesan.data_penerbangan.rute_penerbangan = "Yogyakarta --> Jakarta";
            break;
        } else if (pilih_tujuan == 2) {
            data_pemesan.data_penerbangan.rute_penerbangan = "Semarang --> Medan";
            break;
        } else if (pilih_tujuan == 3) {
            data_pemesan.data_penerbangan.rute_penerbangan = "Surabaya --> Batam";
            break;
        } else if (pilih_tujuan == 4) {
            data_pemesan.data_penerbangan.rute_penerbangan = "Bandung --> Makassar";
            break;
        } else if (pilih_tujuan == 5) {
            data_pemesan.data_penerbangan.rute_penerbangan = "Malang --> Papua";
            break;
        } else if (!cin >> pilih_tujuan) {
            cin.clear();
            cin.ignore();
            system("cls");
        } else {
            system("cls");
        }
        data.close();
    }
    system("cls");
    return pilih_tujuan;
}

void bulan_keberangkatan() {
    int pilihan_bulan;
    system("cls");

    while (true) {
        cout << "\n\t    Bulan Keberangkatan\n";
        cout << "==============================================\n";
        cout << "               | Pilih Bulan |\n";
        cout << "==============================================\n";
        cout << "   | 1. Januari       | 7. Juli       |\n";
        cout << "   | 2. Februari      | 8. Agustus    |\n";
        cout << "   | 3. Maret         | 9. September  |\n";
        cout << "   | 4. April         | 10. Oktober   |\n";
        cout << "   | 5. Mei           | 11. November  |\n";
        cout << "   | 6. Juni          | 12. Desember  |\n";
        cout << "==============================================\n\n";
        cout << "Masukkan Pilihan: "; cin >> pilihan_bulan;

        if (pilihan_bulan == 1) {
            system("cls");
            while (true) {
                data_pemesan.data_penerbangan.bulan = " Januari 2024";

                cout << "-----------------------------" << endl;
                cout << "       Januari 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << " 1    2   3   4   5   6   7" << endl;
                cout << " 8    9  10  11  12  13  14" << endl;
                cout << "15   16  17  18  19  20  21" << endl;
                cout << "22   23  24  25  26  27  28" << endl;
                cout << "29   30  31" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 31 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");

                } else {
                    break;
                }
            }
            break;

        } else if (pilihan_bulan == 2) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " Februari 2024";

            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       Februari 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << "             1   2   3   4" << endl;
                cout << " 5   6   7   8   9  10  11" << endl;
                cout << "12  13  14  15  16  17  18" << endl;
                cout << "19  20  21  22  23  24  25" << endl;
                cout << "26  27  28  29" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 29 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;

        } else if (pilihan_bulan == 3) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " Maret 2024";

            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       Maret 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << "                 1   2   3" << endl;
                cout << " 4   5   6   7   8   9  10" << endl;
                cout << "11  12  13  14  15  16  17" << endl;
                cout << "18  19  20  21  22  23  24" << endl;
                cout << "25  26  27  28  29  30  31" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 31 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;

        } else if (pilihan_bulan == 4) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " April 2024";

            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       April 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << "     1   2   3   4   5   6" << endl;
                cout << " 7   8   9  10  11  12  13" << endl;
                cout << "14  15  16  17  18  19  20" << endl;
                cout << "21  22  23  24  25  26  27" << endl;
                cout << "28  29  30" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 30 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;

        } else if (pilihan_bulan == 5) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " Mei 2024";
            
            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       Mei 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << "             1   2   3   4" << endl;
                cout << "5    6   7   8   9  10  11" << endl;
                cout << "12  13  14  15  16  17  18" << endl;
                cout << "19  20  21  22  23  24  25" << endl;
                cout << "26  27  28  29  30  31" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 31 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;

        } else if (pilihan_bulan == 6) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " Juni 2024";

            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       Juni 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << "                         1" << endl;
                cout << " 2   3   4   5   6   7   8" << endl;
                cout << " 9  10  11  12  13  14  15" << endl;
                cout << "16  17  18  19  20  21  22" << endl;
                cout << "23  24  25  26  27  28  29" << endl;
                cout << "30" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 30 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;

        } else if (pilihan_bulan == 7) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " Juli 2024";

            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       Juli 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << " 1   2   3   4   5   6   7" << endl;
                cout << " 8   9  10  11  12  13  14" << endl;
                cout << "15  16  17  18  19  20  21" << endl;
                cout << "22  23  24  25  26  27  28" << endl;
                cout << "29  30  31" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 31 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;
            
        } else if (pilihan_bulan == 8) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " Agustus 2024";

            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       Agustus 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << " 1   2   3   4   5   6   7" << endl;
                cout << " 8   9  10  11  12  13  14" << endl;
                cout << "15  16  17  18  19  20  21" << endl;
                cout << "22  23  24  25  26  27  28" << endl;
                cout << "29  30  31" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 31 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;


        } else if (pilihan_bulan == 9) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " September 2024";

            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       September 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << " 1   2   3   4   5   6   7" << endl;
                cout << " 8   9  10  11  12  13  14" << endl;
                cout << "15  16  17  18  19  20  21" << endl;
                cout << "22  23  24  25  26  27  28" << endl;
                cout << "29  30" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 30 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                } 
            }
            break;

        } else if (pilihan_bulan == 10) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " Oktober 2024";

            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       Oktober 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << " 1   2   3   4   5   6   7" << endl;
                cout << " 8   9  10  11  12  13  14" << endl;
                cout << "15  16  17  18  19  20  21" << endl;
                cout << "22  23  24  25  26  27  28" << endl;
                cout << "29  30  31" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 31 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;

        } else if (pilihan_bulan == 11) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " November 2024"; 
            
            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       November 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << " 1   2   3   4   5   6   7" << endl;
                cout << " 8   9  10  11  12  13  14" << endl;
                cout << "15  16  17  18  19  20  21" << endl;
                cout << "22  23  24  25  26  27  28" << endl;
                cout << "29  30" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 30 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;
            
        } else if (pilihan_bulan == 12) {
            system("cls");
            data_pemesan.data_penerbangan.bulan = " Desember 2024";

            while (true) {
                cout << "-----------------------------" << endl;
                cout << "       Desember 2024" << endl;
                cout << "-----------------------------" << endl;
                cout << "Sen Sel Rab Kam Jum Sab Min" << endl;
                cout << "1    2   3   4   5   6   7" << endl;
                cout << "8    9  10  11  12  13  14" << endl;
                cout << "15  16  17  18  19  20  21" << endl;
                cout << "22  23  24  25  26  27  28" << endl;
                cout << "29  30  31" << endl;
                cout << "-----------------------------" << endl;
                cout << "Masukkan Pilihan: "; cin >> data_pemesan.data_penerbangan.tanggal;
                if (data_pemesan.data_penerbangan.tanggal < 1 or data_pemesan.data_penerbangan.tanggal > 31 or !cin >> data_pemesan.data_penerbangan.tanggal) {
                    cin.clear();
                    cin.ignore();
                    system("cls");
                } else {
                    break;
                }
            }
            break;

        } else if (!cin >> pilihan_bulan) {
            cin.clear();
            cin.ignore();
            system("cls");

        } else {
            system("cls");
        }
    }
}

int harga_tiket(int pilihan_tujuan) {
    int pilihan_pesawat, jml_tiket, total; char pilihan_kelas;
    system("cls");

    switch (pilihan_tujuan)
    {
    case 1:

        while (true) {
            baca_txt("berkas/jogjaJakarta.txt");
            cout << "Masukkan Pilihan Pesawat: "; cin >> pilihan_pesawat;
            if (pilihan_pesawat == 1) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Air Asia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "09.00 - 13.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 1800000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1300000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 2) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Lion Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "11.30 - 14.50";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 1700000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1200000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 3) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Garuda Indonesia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "14.00 - 18.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 3800000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 3200000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 4) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Sriwijaya Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "20.30 - 23.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2900000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 2300000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 5) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Citilink";
                data_pemesan.data_penerbangan.waktu_penerbangan = "15.00 - 19.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2400000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1800000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 6) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Batik Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "08.00 - 12.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 1700000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1100000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 7) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Wings Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "08.00 - 12.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2000000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1400000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 8) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Adam Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "14.00 - 16.30";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2100000;
                        break;
                        
                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1500000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }

                }
                break;

            } else if (!cin >> pilihan_pesawat) {
                cin.clear();
                cin.ignore();
                system("cls");

            } else {
                system("cls");
            }
        }
        break;

    case 2:
        while (true) {
            baca_txt("berkas/semarangMedan.txt");
            cout << "Masukkan Pilihan Pesawat: "; cin >> pilihan_pesawat;

            if (pilihan_pesawat == 1) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Batik Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "12.00 - 19.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 1900000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1300000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 2) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Air Asia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "07.00 - 13.30";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2100000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1500000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 3) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Sriwijaya Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "09.00 - 15.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 1800000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1200000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 4) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Citilink";
                data_pemesan.data_penerbangan.waktu_penerbangan = "13.00 - 19.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2200000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1600000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 5) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Garuda Indonesia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "08.00 - 13.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2500000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1900000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (!cin >> pilihan_pesawat) {
                cin.clear();
                cin.ignore();
                system("cls");

            } else {
                system("cls");
            }
        }
        break;

    case 3:
        while (true) {
            baca_txt("berkas/surabayaBatam.txt");
            cout << "Masukkan Pilihan Pesawat: "; cin >> pilihan_pesawat;

            if (pilihan_pesawat == 1) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Air Asia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "08.00 - 11.30";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 1900000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1300000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 2) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Lion Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "13.00 - 14.15";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2050000;
                        break;
                        
                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1450000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 3) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Sriwijaya Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "14.00 - 18.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2400000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1800000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 4) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Citilink";
                data_pemesan.data_penerbangan.waktu_penerbangan = "20.30 - 22.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2300000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1700000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 5) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Garuda Indonesia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "15.00 - 19.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2500000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1900000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (!cin >> pilihan_pesawat) {
                cin.clear();
                cin.ignore();
                system("cls");

            } else {
                system("cls");
            }
        }
        break;

    case 4:
        while (true) {
            baca_txt("berkas/bandungMakassar.txt");
            cout << "Masukkan Pilihan Pesawat: "; cin >> pilihan_pesawat;
            if (pilihan_pesawat == 1){
                data_pemesan.data_penerbangan.maskapai_pesawat = "Air Asia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "06.00 - 09.30";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 1800000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1200000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 2) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Lion Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "11.00 - 14.15";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 1900000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1300000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
                    }
                }
                break;

            } else if (pilihan_pesawat == 3) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Sriwijaya Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "15.00 - 22.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2200000;
                        break;

                    } else if ( pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1600000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
                    }
                }
                break;

            } else if (pilihan_pesawat == 4) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Citilink";
                data_pemesan.data_penerbangan.waktu_penerbangan = "19.30 - 22.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 1800000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1200000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 5) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Garuda Indonesia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "22.00 - 00.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2800000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 2200000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;           
                    }
                }
                break;

            } else if (!cin >> pilihan_pesawat) {
                cin.clear();
                cin.ignore();
                system("cls");

            } else {
                system("cls");
            }
        }
        break;

    case 5:
        while (true) {
            baca_txt("berkas/malangPapua.txt");
            cout << "Masukkan Pilihan Pesawat: "; cin >> pilihan_pesawat;
            if (pilihan_pesawat == 1) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Air Asia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "07.00 - 13.30";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2100000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1500000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;            
                    }
                }
                break;

            } else if (pilihan_pesawat == 2) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Lion Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "10.30 - 14.50";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2200000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1600000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
                    }
                }
                break;

            } else if (pilihan_pesawat == 3) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Garuda Indonesia";
                data_pemesan.data_penerbangan.waktu_penerbangan = "12.00 - 18.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 3900000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 3300000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
                    }
                }
                break;

            } else if (pilihan_pesawat == 4) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Sriwijaya Air";
                data_pemesan.data_penerbangan.waktu_penerbangan = "18.30 - 23.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket= 2950000;
                        break;

                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 2350000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
                    }
                }
                break;

            } else if (pilihan_pesawat == 5) {
                data_pemesan.data_penerbangan.maskapai_pesawat = "Citilink";
                data_pemesan.data_penerbangan.waktu_penerbangan = "14.00 - 19.00";
                while (true) {
                    cout << "Masukkan Pilihan Kelas (E = ekonomi dan B = bisnis): "; cin >> pilihan_kelas;
                    if (pilihan_kelas == 'B') {
                        data_pemesan.data_penerbangan.kelas = "Bisnis";
                        data_pemesan.data_penerbangan.harga_tiket = 2150000;
                        break;
                        
                    } else if (pilihan_kelas == 'E') {
                        data_pemesan.data_penerbangan.kelas = "Ekonomi";
                        data_pemesan.data_penerbangan.harga_tiket = 1550000;
                        break;

                    } else {
                        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
                    }
                }
                break;

            } else if (!cin >> pilihan_pesawat) {
                cin.clear();
                cin.ignore();
                system("cls");

            } else {
                system("cls");
            }
        }
        break;

    default:
        break;
    }

    system("cls");

     while (true) {
        cout << "Masukkan Jumlah Tiket: ";

        // Cek apakah input adalah angka
        if (cin >> jml_tiket) {
            // Input adalah angka, keluar dari loop
            break;
        } else {
            // Input bukan angka, membersikan buffer dan mencoba lagi
            cin.clear();
            cin.ignore();
            system("cls");
        }
    }

    system("cls");

    total = jml_tiket * data_pemesan.data_penerbangan.harga_tiket;
    cout << "Harga Tiket: " << data_pemesan.data_penerbangan.harga_tiket << endl;
    cout << "Jumlah Tiket: " << jml_tiket << endl;
    cout << "Total: Rp " << total << endl << endl;

    return jml_tiket;
}

string kode_tiket() {
    // Buat array berisi karakter angka dan huruf
    // Buat objek random number generator
    random_device random;
    mt19937 gen(random());

    // Buat array untuk menyimpan karakter random
    char karakter[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    // Buat string kosong untuk menyimpan kode random
    string kombinasi;

    // Tambahkan 7 karakter random ke string kode
    for (int i = 0; i < 7; i++) {
    kombinasi += karakter[gen() % (sizeof(karakter) - 1)];
    }

    return kombinasi;
}

void display_tiket(int jml_tiket) {
    // system("cls");
    string arr_kode_tiket[jml_tiket];

    for (int x = 0; x < jml_tiket; x++) {
        string return_kode_tiket = kode_tiket();
        cout << "==========================================\n               TIKET PESAWAT\n==========================================\n";
        cout << "Kode Tiket Ke-"<< x + 1 << ": " << return_kode_tiket << endl;
        cout << "Nama Pemesan: " << data_pemesan.data_nama.nama_lengkap << endl;
        cout << "Email: " << data_pemesan.data_contact.email << endl;
        arr_kode_tiket[x] = return_kode_tiket;
        cout << "Rute Penerbangan: " << data_pemesan.data_penerbangan.rute_penerbangan << endl;
        cout << "Maskapai Penerbangan: " << data_pemesan.data_penerbangan.maskapai_pesawat << endl;
        cout << "Waktu Penerbangan: " << data_pemesan.data_penerbangan.waktu_penerbangan << endl;
        cout << "Kelas: " << data_pemesan.data_penerbangan.kelas << endl;
        cout << "Tanggal Keberangkatan: " << data_pemesan.data_penerbangan.tanggal << data_pemesan.data_penerbangan.bulan << endl;
        cout << "==========================================\n\n";
    }

    ofstream data;
    data.open("berkas/dataPemesan.txt", ios::app);
    for (int i = 0; i < jml_tiket; i++) {
        data << "Kode Tiket: " << arr_kode_tiket[i] << endl;
        data << "Nama Pemesan: " << data_pemesan.data_nama.nama_lengkap << endl;
        data << "Email: " << data_pemesan.data_contact.email << endl;
        data << "Rute Penerbangan: " << data_pemesan.data_penerbangan.rute_penerbangan << endl;
        data << "Maskapai Penerbangan: " << data_pemesan.data_penerbangan.maskapai_pesawat << endl;
        data << "Waktu Penerbangan: " << data_pemesan.data_penerbangan.waktu_penerbangan << endl;
        data << "Kelas: " << data_pemesan.data_penerbangan.kelas << endl;
        data << "Tanggal Keberangkatan: " << data_pemesan.data_penerbangan.tanggal << data_pemesan.data_penerbangan.bulan << endl << endl;
    }
}

void melihat_pesanan() {
    // Membuka file teks
    system ("cls");
    string kata = "Kode Tiket: ";
    ifstream inputFile("berkas/dataPemesan.txt");
    cin.ignore();
    // Meminta pengguna untuk memasukkan kata pencarian
    cout << "Masukkan Kode Tiket: ";
    string kataPencarian;
    getline(cin, kataPencarian);
    kataPencarian = kata + kataPencarian;

    // Membaca file baris per baris
    string baris;
    bool ditemukan = false;

    system("cls");
    cout << "==========================================\n               TIKET PESAWAT\n==========================================\n";
    while (getline(inputFile, baris)) {
        // Mengecek apakah baris mengandung kata pencarian
        if (baris == kataPencarian) {
            ditemukan = true;
            cout << baris << endl;

            // Membaca dan mencetak seluruh isi teks dari baris yang ditemukan ke bawah
            while (getline(inputFile, baris) && !baris.empty()) {
                cout << baris << endl;
            }

            // Keluar dari loop setelah membaca semua isi teks atau menemui baris kosong
            break;
        }
    }
    cout << "==========================================\n\n";

    // Menutup file setelah selesai membaca
    inputFile.close();

    // Menampilkan pesan jika kata pencarian tidak ditemukan
    if (!ditemukan) {
        system ("cls");
        cout << "Kode tiket tidak ditemukan" << std::endl;
    }

}

int main() {
    int pilih_menu, return_rute_keberangkatan, return_harga_tiket;

    while (true) {
        cout << "\n==========================================\nSelamat Datang Di BOOKINGTIKET2024.COM\n==========================================\n";
        cout << "   Menu Utama:\n   1. Pesan Tiket Pesawat\n   2. Melihat Pesanan Tiket\n   3. Keluar\n";
        cout << "------------------------------------------\n";
        cout << "ISI SESUAI PILIHAN DI ATAS!" << endl;
        cout << "Masukkan Pilihan: "; cin >> pilih_menu;
        cout << "------------------------------------------\n";

        if (pilih_menu == 1) {
            data_diri();
            return_rute_keberangkatan = rute_keberangkatan();
            bulan_keberangkatan();
            return_harga_tiket = harga_tiket(return_rute_keberangkatan);
            display_tiket(return_harga_tiket);

        } else if (pilih_menu == 2) {
            melihat_pesanan();
            
        } else if (pilih_menu == 3) {
            cout << "Terima kasih" << endl;
            cout << "------------------------------------------\n";
            break;

        } else if (!cin >> pilih_menu) {
            cin.clear();
            cin.ignore();
            system("cls");
        }
        
        else { 
            system("cls");
        }

    }
    return 0;
}