Program zawiera popularną grę Hangman (Wisielec).
Instrukcja gry:
1. Wybierz który tryb gry chcesz rozegrać:
   1.1. Wylosuj jedno z haseł z pliku words.txt.
   1.2 Wpisz swoje własne hasło.
2. Po wybraniu jednej z powyższych opcji rozpocznie się zgadywanie hasła. Gracz wpisuje literę, a gra sprawdza, czy litera jest zawarta w haśle. Jeśli jest, puste miejsce zostaje zamienione na poprawną literę i gra toczy się dalej
   aż do odgadnięcia wszystkich liter. Jeżeli została wprowadzona litera niewystępująca w haśle, gracz traci jedno życie, co zostaje zwizualizowane za pomocą wieszającego się ludzika.
3. Występują ograniczenia przy wpisywaniu hasła jak i zgadywaniu liter:
   a) nie można wpisać znaków innych niż litery alfabetu (poza spacją, która nie podlega zgadywaniu i oddziela słowa w haśle)
   b) wpisywanie małych i dużych liter nie ma znaczenia - program potraktuje małą i wielką literę jako tą samą.
   c) przy zgadywaniu liter nie można nie wpisać litery oraz nie można wpisać więcej niż jedną literę. W obu przypadkach będzie możliwość wpisania litery jeszcze raz.
   d) jeżeli litera została poprzednio przez nas wpisania, nie będzie możliwości użycia jej jeszcze raz, bez względu czy była ona poprawna czy nie.
   e) program nie obsługuje polskich znaków
4. Gra kończy się w przypadku odgadnięcia wszystkich liter lub utraty wszystkich żyć przez gracza. W przypadku porażki hasło jest wyświetlane, aby gracz mógł zobaczyć jakie litery przeoczył.
