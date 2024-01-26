#include <iostream>

using namespace std;

bool luhn(string& card);

int main() {
	
	string card = "79927398713";

	if (luhn(card)) {
		cout << card << " is a valid card";
	}

	else {
		cout << card << " is not a valid card";
	}

	return 0;
}

bool luhn(string& card) {

	int Nsize = card.length();
	int Nsum = 0, Second = false;

	for (int i = Nsize - 1; i >= 0; i--) {
		int d = card[i] - '0';

		if (Second == true) {
			d = d * 2;
		}
			

		Nsum += d / 10;
		Nsum += d % 10;

		Second = !Second;

	}
	return (Nsum % 10 == 0);
}

