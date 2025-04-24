PL
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

ENG
1.Choose the game mode you want to play:
   1.1 Randomly select one of the phrases from the file words.txt.
   1.2 Enter your own custom phrase.

2. After selecting one of the above options, the guessing phase will begin. The player enters a letter, and the game checks whether the letter is included in the phrase. If it is, the corresponding blank space is replaced with the correct letter, and the game continues until all letters are guessed. If the entered letter is not in the phrase, the player loses one life, which is visually represented by a hanging stick figure.

3. There are several restrictions when entering a phrase and guessing letters:
   a) You cannot enter characters other than alphabet letters (with the exception of spaces, which are not guessed and serve to separate words).
   b) Uppercase and lowercase letters are treated the same – the program considers them equal.
   c) When guessing, you must enter exactly one letter. Entering nothing or more than one letter will prompt the player to try again.
   d) If a letter has already been entered previously, it cannot be used again, regardless of whether it was correct or not.
   e) The program does not support Polish characters.

4. The game ends when all letters have been guessed or the player loses all lives. In case of failure, the full phrase will be revealed so the player can see which letters were missed.
