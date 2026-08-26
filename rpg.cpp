/*Random Password Generator (rpg) - by Ericer Holm
ascii table https://www.ascii-code.com/
variable legnth
start with letter
include letters, caps, numbers, special characters
special characters !@#$%^&*()_-+=[]{}\|~`,.<>/?;:'"
ASCII 33 to 126
exclude 1, i, , 0 or o because of simularity
Got ideas on cryptography from https://generate-random.org/passwords/cpp
*/

#include <iostream>
#include <string>
#include <random>
using namespace std;

int askout(int size) {
	
	cout << "\nHow many characters?: ";
	cin >> size;
	
	return size;
	};

bool asknew(string forward) {

	char ans = 'n';
	
	cout << "Your password is: ";
	cout << forward;
	
	cout << "\n\nWould you like to make another password? ";
	cin >> ans;
	
	if (ans == 'y' or ans == 'Y')
		return true;
	else
		return false;
};

bool firstchar(char fchar, string letters) {

	bool ans = false;  //assume false to begin with
	
	for (int i = 0; i < letters.length(); i++) {
			if (fchar == letters[i]) 
				ans = true; //when the character matches with a letter, then true
	};
	
	if (ans)
		return false;
	else
		return true;
};

int main() {
	
	const string uppercase = "ABCDEFGHJKLMNPQRSTUVWXYZ"; //excluded I and O
	const string lowercase = "abcdefghjklmnpqrstuvwxyz"; //excluded i and o
	const string numbers = "23456789"; //excluded 1 and 0
	const string specialchars = "!@#$%^&*()_-+=[]{}|~`,.<>/?;:";
	const char doublequote = (char)34;
	const char singlequote = (char)39;
	const char backslash = (char)92;
	string alphabet = uppercase + lowercase + specialchars + singlequote + doublequote + backslash;
	
	int size = 0;		
	string pswdstr;
	
	cout << "Random Password Generator\n";
	/* TODO
	* Make sure the first character is not a special character.
	*/
	do { //looping to control the application for the user.
		//ask how what size is the password
		size = askout(size);
		pswdstr.reserve(size);
		do {
			pswdstr = "";
		
			random_device devicer;
			mt19937 gen(devicer());
			uniform_int_distribution<> distrib(0, alphabet.length() - 1);
			
			for (int i = 0; i < size; ++i) {
				pswdstr += alphabet[distrib(gen)];
			};
		} while(firstchar(pswdstr[0],uppercase + lowercase)); //if first character of pswdstr is not
		// a letter, then find a new password.
	
	}
	while(asknew(pswdstr)); //display password and ask if want another
	
	}

    std::cout << simplePassword << std::endl;  // Example: aB3xY7mN2pQ9

    return 0;
}
