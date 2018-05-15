# Proste programy w c++

Programy powstałe jeszcze w technikum podczas nauki c++. 
Zachowane raczej z sentymentu.
_____



### bloker.cpp
Program, który ma za zadanie zablokować dostęp do strony internetowej poprzez przypisanie podanemu 
przez użytkownika adresowi url strony wartości 127.0.0.1 (pętli zwrotnej) w systemowym pliku *host*.
Blokuje adresy zarówno z, jak i bez przedrostka *www*.
Posiada także opcję odblokowywania zablokowanych w ten sposób adresów url.

### shutdown.cpp
Program, którego zadaniem jest zresetowanie komputera po podanym przez użytkownika czasie. Czas podawać należy w notacji HH MM DD.

_____
### v-bloker.cpp
Program działający identycznie jak powyższy *bloker.cpp*, z tą różnicą, że można do niego wpisać całą
listę adresów url stron do zablokowania przed skompilowaniem. Po klinięciu pliku *.exe* nie wywołuje żadnych 
wizualnych rezultatów dla użytkownika, nadpisuje jednak plik *host* całą listą blokowanych adresów url.

### v-shutdown05.cpp
Program tworzy plik *dgames.bat*, który ma za zadanie zresetować komputer po upłynięciu 5 sekund od jego uruchomienia.
Następnie w systemowym rejestrze ustawia automatyczne uruchomienie pliku *dgames.bat* podczas uruchamiania się systemu. 



_______
### Licencja 
Aplikacje są udostępniane na [licencji MIT](LICENCE.md).


