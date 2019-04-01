#include <iostream>
using namespace std;

int main()
{
  int a,b,c,d;
  char pilih;
  char jawab;
  
  cout<<"operasi yang akan di pilih "<<endl;
  cout<<"1. tekan * jika ingin menggunakan perkalian"<<endl;
  cout<<"2. tekan / jika ingin menggunakan pembagian"<<endl;
  cout<<endl;
  cout<<"Masukkan pilihan : ";
  cin>>pilih;
  
  if (pilih == '*')
  {
    c= a*b;
   cout<<"Hasil perkalian = "<<c<<endl;
   }
   if (pilih== '/')
   {
        d=a/b;
    cout<<"Hasil pembagian = "<<d<<endl;
    }
    return 0;
 }
