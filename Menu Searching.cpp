#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int nilai[30];
	int pil,i,n;
	char menu;
	cout<<"=========================================="<<endl;
	cout<<"||\t PROGRAM SEDERHANA SEARCH \t||"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"|| NAMA	   : Mohammad Haikal Ramadan\t||"<<endl;
	cout<<"|| NIM 	   : 20170801058\t\t||"<<endl;
	cout<<"|| Jurusan : Teknik Informatika\t\t||"<<endl;
	cout<<"==========================================\n"<<endl;
	cout<<"Masukkan Banyak Bilangan yang Anda Inginkan : ";
	cin>>n;
	cout<<endl;
	
	for(i=1;i<=n;i++){
		cout<<"Masukan Bilangan Ke - ["<<i<<"] : ";
		cin>>nilai[i];
	}
	cout<<endl;
	cout<<"Deret Bilangan Yang Diinput : ";
	for(i=1;i<=n;i++){
		cout<<nilai[i]<<" ";
	}
	cout<<"\n\n";
	start:
	cout<<"\n\nPilihlah Menu di Bawah ini : ";
	cout << "\n[1] Sequential Search\n";
	cout << "[2] Binary Search\n";
	cout << "[3] Keluar";
	
	cout << "\n\nTentukan Pilihan Anda	: ";
	cin >> pil;
	
	if (pil==1){
	int no,jd,cari,data[50];
	int flag = 0;
	
	cout<<"\nMasukan Jumlah Data  : ";
    cin>>jd;

    cout<<endl;
     for (no=0;no<jd;no++){
          cout<<"Input Data Ke-"<<(no+1)<<"    : ";
         cin>>data[no];
     }

	cout<<"\nMasukkan data yang ingin dicari : ";
	cin>>cari;

	for(int i=0;i<8;i++){
	if(data[i] == cari){
	flag = 1;
	}
}

	if(flag == 1){
	cout<<"\nData di Temukan!\n"; 
	}	
	else{
	cout<<"\nData Tidak di Temukan!\n";
 }
  }
  else if(pil==2){
  
  	int jd, cari,no, kiri,kanan,tengah,data[50];
  	cout<<"\nMasukan Jumlah Data  : ";
    cin>>jd;

    cout<<endl;
     for (no=0;no<jd;no++)
     {
          cout<<"Input Data Ke-"<<(no+1)<<"    : ";
         cin>>data[no];
     }

    cout<<endl;
     cout<<"Masukan Nilai Dicari : ";
     cin>>cari;

     kiri=0;
     kanan=jd-1;
     tengah=(kanan-kiri)/2;

     while ((data[tengah]!=cari) && (kiri>=0)&& (kanan<jd) && (kanan>=kiri))
     {
          if (cari>data[tengah]){
            kiri=tengah+1;
         }
         else if (cari<data[tengah]){
            kanan=tengah-1;
         }
         	tengah=kiri+(kanan-kiri)/2;
     }

    cout<<endl;
    if (data[tengah]==cari){
          cout<<"Data Ditemukan..\n";
     }
     else{
          cout<<"Data Tidak Ditemukan\n";
     }
  	 
  
  }
  else if(pil==3){
}
	cout<<"\n\nApakah Anda Ingin Mencoba Menu Lain?[Y/N] : ";
	cin>>menu;
	if(menu=='Y'||menu=='y')
	goto start;
	if(menu=='N'||menu=='n')
	goto finish;
	finish:
	cout<<"Thank Your For Trying:)\n\n";
	
}
