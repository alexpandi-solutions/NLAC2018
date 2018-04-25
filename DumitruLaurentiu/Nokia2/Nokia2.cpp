// Nokia2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>

class letnum {
private:
	std::string s;
	int nrlet = 0;
	int nrnum = 0;
public:
	letnum(std::string &str)
	{
		s = str;
		std::cout << s << std::endl;
		std::cout << "String-ul are dimensiunea de " << s.size() << " caractere." << std::endl;
		NrOfLetters();
		NrOfNumbers();
	};

	void NrOfNumbers()
	{

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
				nrnum++;
		}

		std::cout << "Numarul de cifre din string este:" << nrnum << std::endl;
	};

	void NrOfLetters()
	{


		for (int i = 0; i < s.size(); i++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
				nrlet++;
		}

		std::cout << "Numarul de litere din string este:" << nrlet << std::endl;
	};
};

int main()
{

	std::string s;
	std::cout << "Introduceti... :" << std::endl;
	std::cin >> s;
	letnum str(s);


	_getch();

	return 0;
}
