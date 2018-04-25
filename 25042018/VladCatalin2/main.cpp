#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <utility>

class MyString {
private:
	char str[500];
public:
	MyString() {
		strcpy(str, "");
	}

	MyString(char aux[500]) {
		strcpy(str, aux);
	}

	~MyString() {

	}

	int countLetters() {
		int count = 0;
		for (int i = 0;i < strlen(str);i++) {
			if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
				count++;
		}
		return count;
	}
	int countNumbers() {
		int count = 0;
		for (int i = 0;i < strlen(str);i++) {
			if (str[i] >= '0' && str[i] <= '9')
				count++;
		}
		return count;
	}
	void printString() {
		std::cout << str << std::endl;
	}


	MyString& operator=(const MyString& other){
	    strcpy(this->str,other.str);
	}
};

int main() {
	char aux[100];
	MyString str1("Abracadabra123");
	MyString str2("AbC123");

	std::cout << "Numarul de litere din cuvantul ";
	str2.printString();
	std::cout << " este " << str2.countLetters() << " iar nr de cifre este " << str2.countNumbers() << std::endl;

	str2=std::move(str1);


	std::cout << "Numarul de litere din cuvantul ";
	str1.printString();
	std::cout << " este " << str1.countLetters() << " iar nr de cifre este " << str1.countNumbers() << std::endl;

	std::cout << "Numarul de litere din cuvantul ";
	str2.printString();
	std::cout << " este " << str2.countLetters() << " iar nr de cifre este " << str2.countNumbers() << std::endl;

	std::cout << "Dati un sir de caractere ";std::cin >> aux;
	MyString str3(aux);

	std::cout << "Numarul de litere din cuvantul ";
	str3.printString();
	std::cout << " este " << str3.countLetters() << " iar nr de cifre este " << str3.countNumbers() << std::endl;

	getch();
	return 0;
}
