#include<iostream>
#include <string>
using namespace std;

class Akun
{
 public:
  Akun ( int);
  void credit(int );
  void debit(int );
  int dapatkansaldoAkun();
 private:
  int akunSaldo;
};
Akun::Akun( int saldo)
{
 if(saldo>=0)
  akunSaldo=saldo;
 else
 {
  akunSaldo=0;
  cout<<"Saldo awal tidak valid"<<endl;
 }
}
void Akun::credit( int saldo)
{
 akunSaldo = akunSaldo + saldo;
}
void Akun::debit( int saldo)
{
 if(akunSaldo>=saldo)
 {
  akunSaldo = akunSaldo - saldo;
 }
 else
 {
  cout<<"Jumlah debit melebihi saldo akun."<<endl;
 }
}
int Akun::dapatkansaldoAkun()
{
 return akunSaldo;
}
int main()
{
 Akun Akun1(89);
 Akun Akun2(-76);
 cout << "Saldo awal akun1 adalah: "<< Akun1.dapatkansaldoAkun()<< "\nSaldo awal akun2 adalah: "<< Akun2.dapatkansaldoAkun() << endl;
 Akun1.credit(200);
 Akun2.credit(34);
 cout << "\nSaldo akun1 adalah: "<< Akun1.dapatkansaldoAkun()<< "\nSaldo akun2 adalah: "<< Akun2.dapatkansaldoAkun() << endl;
 Akun1.debit(50);
 Akun2.debit(34);
 cout << "\nSaldo akun1 adalah: "<< Akun1.dapatkansaldoAkun()<< "\nSaldo akun2 adalah: "<< Akun2.dapatkansaldoAkun() << endl;
}
