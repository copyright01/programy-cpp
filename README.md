# Proste programiki w c++

Programy powstałe jeszcze w technikum podczas nauki c++. 
Zachowane raczej z sentymentu, chociaż może kiedyś się jeszcze przydadzą.
_____



### blokowanie-stron.cpp
Program, który ma za zadanie zablokować dostęp do strony internetowej poprzez przypisanie podanemu 
przez użytkownika adresowi url strony wartości 127.0.0.1 (pętli zwrotnej) w systemowym pliku *host*.
Blokuje adresy zarówno z i bez przedrostka *www*.
Posiada także opcję odblokowywania zablokowanych w ten sposób adresów url.

### program shutdown.cpp
Program, którego zadaniem jest zresetowanie komputera po podanym przez użytkownika czasie. Czas podawać należy w notacji HH MM DD.

_____

## **Uwaga!** 
Poniższe programy mogą zrobić krzywdę mniej zaawansowanym użytkownikom, zalecam ostrożność.

### wirus - blokowanie stron.cpp
Program działający identycznie jak powyższy *blokowanie-stron.cpp*, z tą różnicą, że można do niego wpisać całą
listę adresów url stron do zablokowania przed skompilowaniem. Po klinięciu plik *.exe* nie wywołuje żadnych 
wizualnych rezultatów dla użytkownika, nadpisuje jednak plik *host* całą listą blokowanych adresów url.

### wirus - shutdown05.cpp
Program tworzy plik *dgames.bat*, który ma za zadanie zresetować komputer po upłynięciu 5 sekund od jego uruchomienia.
Następnie w systemowym rejestrze ustawia automatyczne uruchomienie pliku *dgames.bat* podczas uruchamiania się systemu. 
