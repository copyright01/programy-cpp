#include<iostream>
#include<fstream>
using namespace std;
int czas;
void plik_bat();
void menu();
void uruchomienie();

int main()
{   
    menu();
    plik_bat();
    uruchomienie(); 
}


void menu()
{
     string odpowiedz;
     int hh,mm,ss;
     cout<<"Podaj po jakim czasie ma sie zrestartowac twoj komputer: \n"<<
                  "hh mm ss\n";
     cin>>hh>>mm>>ss;
     czas=hh*3600+mm*60+ss;    
}     
void plik_bat()
{
    fstream plik("c:\\show.bat",ios::out);  
    plik<<"shutdown -r -t "<<czas;  
    plik.close();
}
void uruchomienie()
{
     system("start c:\\show.bat");     
}
