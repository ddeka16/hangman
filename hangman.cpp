#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <random>
using namespace std;

bool isletter(string input) {
	for (int i = 0; i < input.size(); i++) {
		int uppercaseChar = toupper(input[i]);
		if ((uppercaseChar < 'A' || uppercaseChar > 'Z') && uppercaseChar != 32) {
			return false;
		}
	}
	return true;
}

class Hangman {
public:
	int lives = 5;
	string word;
	string guessedletter;
	char guess(string word, int& lives);
	void viewWord(string word);
	void check(string word);
	void draw(int lives);
	bool win = false;
};

char Hangman::guess(string word, int &lives) {
	char letter;
	bool right = false;
	string input;
	cout << endl;
	cout << "Zgadnij litere: ";
	while (true) {
		getline(cin, input);
		for (int i = 0; i < input.length(); i++) {
			input[i] = toupper(input[i]);
		}
		if (input.length() == 0) {
			
			cout << "Nie wprowadziles zadnego znaku. Sprobuj ponownie" << endl;
		}
		else if (isletter(input) == false) {
			cout << "Wprowadziles niedozwolony znak. Wpisz litere" << endl;
		}
		else if (input.length() == 1) {
			letter = input[0];
			if (guessedletter.find(letter) != string::npos) {
				cout << "Juz wykorzystales te litere. Sprobuj odgadnac inna: " << endl;
			}
			else {
				break;
			}
		}
		else if (input.length() > 1) {
			cout << "Wpisales za duzo liter. Sprobuj wpisac jedna litere ponownie" << endl;
		}
	}
	for (int i = 0; i < word.length(); i++) {
		if (letter == word[i]) {
			guessedletter += letter;
			return letter;
			right = true;
		}
	}
	if (right == false) {
		guessedletter += letter;
		lives -= 1;
	}
}

void Hangman::viewWord(string word) {
	for (int i = 0; i < word.length(); i++) {
		if (guessedletter.find(word[i]) != string::npos) {
			cout << word[i] << " ";  
		}
		else if (word[i] == 32) {
				cout << " ";
			}
		else {
			cout << "_ ";  
		}
	}
}

void Hangman::check(string word) {
	for (int i = 0; i < word.length(); i++) {
		if (word[i] == 32) {
			continue;
		}
		if (guessedletter.find(word[i]) == string::npos) {
			return;
			}
	}
	cout << "Haslo to: " << word << endl;
	cout << "Gratulacje! Wygrywasz!!!" << endl;
	win = true;
}

void Hangman::draw(int lives) {
	if (lives == 0) {
		cout << "Pozostale zycia: " << lives << endl;
		cout << "----------------" << endl;
		cout << "     |          " << endl;
		cout << "     0     " << endl;
		cout << "    /|\\     " << endl;
		cout << "     |    " << endl;
		cout << "    / \\    " << endl;
		cout << "Niestety, przegrales :(" << endl;
	}
	else if (lives == 1) {
		cout << "Pozostale zycia: " << lives << endl;
		cout << "----------------" << endl;
		cout << "     |          " << endl;
		cout << "     0     " << endl;
		cout << "    /|\\     " << endl;
		cout << "     |    " << endl;
	}
	else if (lives == 2) {
		cout << "Pozostale zycia: " << lives << endl;
		cout << "----------------" << endl;
		cout << "     |          " << endl;
		cout << "     0     " << endl;
		cout << "    /|\\     " << endl;
	}
	else if (lives == 3) {
		cout << "Pozostale zycia: " << lives << endl;
		cout << "----------------" << endl;
		cout << "     |          " << endl;
		cout << "     0     " << endl;

	}
	else if (lives == 4) {
		cout << "Pozostale zycia: " << lives << endl;
		cout << "----------------" << endl;
		cout << "     |          " << endl;
	}
	else if (lives == 5) {
		cout << "Pozostale zycia: " << lives << endl;
		cout << "----------------" << endl;
	}
}



int main() {
	Hangman h;
	int x;
	cout << "Wybierz wersje gry: " << endl;
	cout << "1. Wylosuj haslo." << endl;
	cout << "2. Wpisz wlasne haslo" << endl;
	cin >> x;
	cin.ignore();
	switch (x) {
	case 1: {
		string line;
		ifstream words("words.txt");
		srand(time(0));
		int currentline = 1;
		int random = rand() % 100 + 1;
		while (getline(words, line)) {
			if (currentline == random) {
				h.word = line;
				break;
			}
			currentline++;
		}
		for (int i = 0; i < h.word.length(); i++) {
			h.word[i] = toupper(h.word[i]);
		}
		while (h.lives > 0 && h.win == false) {
			system("cls");
			h.draw(h.lives);
			h.viewWord(h.word);
			h.guess(h.word, h.lives);
			h.check(h.word);
		}
		if (h.lives == 0 && h.win == false) {
			system("cls");
			h.draw(h.lives);
			cout << "Haslo to: " << h.word << endl;
		}
		break;
	}
	case 2:
	{
		cout << "Wprowadz haslo: " << endl;
		while (true) {
			getline(cin, h.word);
			for (int i = 0; i < h.word.length(); i++) {
				h.word[i] = toupper(h.word[i]);
			}
			if (isletter(h.word) == false) {
				cout << "Wprowadziles niepoprawne slowo. Wpisz slowo zawierajace tylko znaki z alfabetu." << endl;
			}
			else {
				break;
			}
		}
		while (h.lives > 0 && h.win == false) {
			system("cls");
			h.draw(h.lives);
			h.viewWord(h.word);
			h.guess(h.word, h.lives);
			h.check(h.word);
		}
		if (h.lives == 0 && h.win == false) {
			system("cls");
			h.draw(h.lives);
			cout << "Haslo to: " << h.word << endl;
		}
		break;
	}
	}
}
