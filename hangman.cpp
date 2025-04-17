#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Hangman {
public:
	int lives = 3;
	string word;
	string guessedletter;
	char guess(string word, int& lives);
	void viewWord(string word);
	void check(string word);
	bool win = false;
};

char Hangman::guess(string word, int &lives) {
	char letter;
	bool right = false;
	string input;
	cout << "Zgadnij litere: ";
	while (true) {
		getline(cin, input);
		if (input.length() == 0) {
			
				cout << "Nie wprowadziles zadnego znaku. Sprobuj ponownie" << endl;
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
			cout << "Brawo! Trafiles litere" << endl;
			guessedletter += letter;
			return letter;
			right = true;
		}
	}
	if (right == false) {
		lives -= 1;
			cout << "Nie trafiles. Zostalo ci " << lives << " zyc." << endl;
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
	cout << word << endl;
	cout << "Gratulacje! Wygrywasz!!!" << endl;
	win = true;
}


int main() {
	Hangman h;
	getline(cin, h.word);
	cout << "Masz " << h.lives << "zyc" << endl;
	while (h.lives > 0 && h.win == false) {
		h.viewWord(h.word);
		h.guess(h.word, h.lives);
		h.check(h.word);
	}
}