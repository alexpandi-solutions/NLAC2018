
#include<utility>
#include<string>
#include<iostream>

class SequenceOfCharacters
{

public:
	SequenceOfCharacters(std::string Text)
	{
		text = Text;
	}
	SequenceOfCharacters()
	{

	}
	~SequenceOfCharacters()
	{

	}
	std::string getText()
	{
		return text;
	}
	int getNumberOfDigits();
	int getNumberOfLeters();
private:
	   std::string text;
public:
    //copy
       SequenceOfCharacters& operator = (const SequenceOfCharacters& other)
       {

            this->text=other.text;
            return *this;
       }
     //move

       SequenceOfCharacters& operator = (SequenceOfCharacters&& other)
       {
           this->text = std::move(other.text);


           //this->text=std::move(other.text);
           // this->text=other.text;
            return *this;
       }


};


int SequenceOfCharacters::getNumberOfDigits()
{
	int count = 0;
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] >= '0' && text[i] <= '9')
			count++;
	}
	return count;
}


int SequenceOfCharacters::getNumberOfLeters()
{
	int count = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] >= 'A' && text[i] <= 'z')
			count++;
	}
	return count;
}
int main()
{
	SequenceOfCharacters text1 ("Ana are 9 mere si 54 de prune !!!:))");
	SequenceOfCharacters text2("Am mancat 2200 de ciocalati in 7 zile...Ieiiiii, o sa fac diabet");
	SequenceOfCharacters text3("Am citit 91345 de pagini pentruam scrie lucrarea de licenta din anul 4");

	std::cout << "Textul este: " << text1.getText() << std::endl;
	std::cout <<"Numarul de cifre din text este: "<<text1.getNumberOfDigits()<<std::endl;
	std::cout << "Numarul de litere din text este: " << text1.getNumberOfLeters() << std::endl<<std::endl;

	std::cout << "Textul este: " << text2.getText() << std::endl;
	std::cout << "Numarul de cifre din text este: " << text2.getNumberOfDigits() << std::endl;
	std::cout << "Numarul de litere din text este: " << text2.getNumberOfLeters() << std::endl<<std::endl;

	std::cout << "Textul este: " << text3.getText() << std::endl;
	std::cout << "Numarul de cifre din text este: " << text3.getNumberOfDigits() << std::endl;
	std::cout << "Numarul de litere din text este: " << text3.getNumberOfLeters() << std::endl<<std::endl<<std::endl;


   SequenceOfCharacters text4;
   text4=text3;



    std::cout << "Textul copiat este: " << text4.getText() << std::endl;
	std::cout << "Numarul de cifre din text este: " << text4.getNumberOfDigits() << std::endl;
	std::cout << "Numarul de litere din text este: " << text4.getNumberOfLeters() << std::endl<<std::endl;

    return 0;
}

