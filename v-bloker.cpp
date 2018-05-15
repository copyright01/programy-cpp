#include<iostream>
#include<fstream>
using namespace std;
                 

void zapis();                   
int main()
{
    zapis();   
    return 0;
}
void zapis()
{
    fstream plik("C:\\WINDOWS\\system32\\drivers\\etc\\hosts",ios::app | ios::out);  //adres pliku hosts w systemie
    
                            plik<<"127.0.0.1 nk.pl\n";
                            plik<<"127.0.0.1 www.nk.pl\n";
                            plik<<"127.0.0.1 naszaklasa.pl\n";
                            plik<<"127.0.0.1 www.naszaklasa.pl\n";
                            plik<<"127.0.0.1 nasza-klasa.pl\n";
                            plik<<"127.0.0.1 www.nasza-klasa.pl\n";
                            plik<<"127.0.0.1 facebook.pl\n";
                            plik<<"127.0.0.1 www.facebook.pl\n";
                            plik<<"127.0.0.1 wp.pl\n";
                            plik<<"127.0.0.1 www.wp.pl\n";
                            plik<<"127.0.0.1 www.wirtualnapolska.pl\n";
                            plik<<"127.0.0.1 wistualnapolska.pl\n";
                            plik<<"127.0.0.1 demotywatory.pl\n";
                            plik<<"127.0.0.1 www.demotywatory.pl\n";
                            plik<<"127.0.0.1 google.pl\n";
                            plik<<"127.0.0.1 www.google.pl\n";
                            plik<<"127.0.0.1 youtube.pl\n";
                            plik<<"127.0.0.1 www.youtube.pl\n";
                            
                            
    plik.close();
}
                   
