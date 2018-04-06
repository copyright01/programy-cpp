#include<iostream>
#include<fstream>
using namespace std;
                    string tab[50];

                    void zapis(int k);
                    int opcja1();       
                    char menu(char znak);
                    void cmd(char wyb);
                    
                                       
int main()
{
    
    char znak=menu(znak);
    if (znak=='1') {cmd('c'); zapis(opcja1());} else
    if (znak=='2') cmd('z'); else
                                              cmd('z');
    return 0;
}
void zapis(int k)  //   zapis do pliku wszystkich stron
{
    fstream plik("C:\\WINDOWS\\system32\\drivers\\etc\\hosts",ios::app | ios::out);  //adres pliku hosts w systemie
    if(plik.good()){
                   for(int j=1; j<k; j++)
                   {
                            plik<<"127.0.0.1 "<<tab[j]<<".pl\n";
                            plik<<"127.0.0.1 www."<<tab[j]<<".pl\n";
                   } 
                   cout<<"\nWszystkie strony zostaly zablokowane poprawnie.";}
    else 
           {cout<<"Blad! Nie udalo sie otworzyc pliku.\n"; system("pause");}
    plik.close();
}
                   
int opcja1()    // uruchomienie edytora podawania stron
{
    int i=0;
    cout<<"\nPodaj nazwy stron ktore chcesz zablokowac:\nAby skonczyc podawanie wpisz \"koniec\"\n";
    cout<<"Uwaga wpisujemy same nazwy stron np.: \"wp\"\n\n";
    while(tab[i]!="koniec")
            {
                                    cout<<"Adres "<<i+1<<" strony: ";
                                    i++;
                                    cin>>tab[i];
            }
    return i;
}
char menu(char znak)  // menu wyboru programu
{
     
     znak='0';
     bool b=true;
     cout<<"1) Przejdz do blokowania.\n2) Odlokuj wszystkie strony.\n3) Rozwiazywanie problemow.\n\nPodaj numer: ";
     while(b)
     {
                     cin>>znak;
                     if (znak=='1' || znak=='2' || znak=='3') b=false;
                     else cout<<"Prosze podac wlasciwy numer.\n";
                                   
     }
     return znak;
}
void cmd(char wyb)
{
     if (wyb=='c') {cout<<"Tworzenie kopi zapasowej pliku:\n"; system("copy c:\\windows\\system32\\drivers\\etc\\hosts c:\\ ");} else
     if (wyb=='z') system("copy c:\\hosts c:\\windows\\system32\\drivers\\etc\\");
}   
