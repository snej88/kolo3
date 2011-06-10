<<<<<<< HEAD
// Tomasz Sowa, ABiBD), 101581
=======
// Tomasz, ABiBD, 101581
>>>>>>> student

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
<<<<<<< HEAD
  cout<<"Program pobiera informacje od studenta i zapisuje je do plik"<<endl;
=======
  cout<<"Program pobiera informacje od studenta i zapisuje je do pliku"<<endl;

  ofstream plik("student-info.txt");
  string imie, nazwisko;
  int nr_indeksu;

  cout<<"imie: "; cin>>imie;
  cout<<"nazwisko: "; cin>>nazwisko;
  cout<<"nr. indeksu: "; cin>>nr_indeksu;

  plik<<imie<<" "<<nazwisko<<", "<<nr_indeksu<<endl;
  plik.close();
>>>>>>> student
  return 0;
}


