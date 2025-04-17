#include <iostream>
#include <vector>
using namespace std;
class Hangman {
public:
	int lives = 3;
	string word;
	string guessedletter;
	char guess(string word, int& lives);
	void viewWord(string word);
};

char Hangman::guess(string word, int &lives) {
	char letter;
	bool right = false;
	cout << "Zgadnij litere: ";
	cin >> letter;
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
		for (int j = 0; j < guessedletter.length(); j++) {
			if (guessedletter[j] = word[j]) {
				cout << guessedletter << " ";
			}
			else {
				cout << "_ ";

			}
		}
	}
}

int main() {
	Hangman h;
	cin >> h.word;
	cout << h.word << endl;
	cout << "Masz " << h.lives << "zyc" << endl;
	while (h.lives > 0) {
		h.viewWord(h.word);
		h.guess(h.word, h.lives);
	}
}