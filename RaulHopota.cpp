#include <iostream>
#include <string>

class Word{
public:
    Word(std::string newWord)
    {
        word=newWord;
    }
    ~Word(){};
    void getNrOfLetters()
    {
        int i=0;
        int j=0;
        int count=0;
        int size;
        int flags[52];
        char letters[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
        size=word.size();
        char *charArray=new char[size];
        word.copy(charArray,size);
        charArray[size]='\0';
        for(i=0;i<52;i++)
        {
            flags[i]=0;
        }
        for(i=0;i<size;i++)
        {
            if((charArray[i]>='a' && charArray[i]<='z') || (charArray[i]>='A' && charArray[i]<='Z')  )
            {   for(j=0;j<52;j++)
                {
                    if(charArray[i]==letters[j] && flags[j]==0)
                    {
                        flags[j]=1;
                        count++;
                    }
                }
            }
        }
        std::cout<<"Numarul de litere distincte din secventa:"<<count<<std::endl;
        delete(charArray);
    }
    void getNrOfDigits()
    {
        int i=0;
        int j=0;
        int count=0;
        int size;
        int flags[10];
        char letters[]={'0','1','2','3','4','5','6','7','8','9','\0'};
        size=word.size();
        char *charArray=new char[size];
        word.copy(charArray,size);
        charArray[size]='\0';
        for(i=0;i<10;i++)
        {
            flags[i]=0;
        }
        for(i=0;i<size;i++)
        {
            if(charArray[i]>='0' && charArray[i]<='9'  )
            {   for(j=0;j<10;j++)
                {
                    if(charArray[i]==letters[j] && flags[j]==0)
                    {
                        flags[j]=1;
                        count++;
                    }
                }
            }
        }
        std::cout<<"Numarul de cifre distincte din secventa:"<<count<<std::endl;
        delete(charArray);
    }

private:
    std::string word;
};


int main()
{
    std::string sequence;
    std::cout << "Introduceti un cuvant:" << std::endl;
    std::getline(std::cin,sequence);
    Word word1(sequence);
    word1.getNrOfDigits();
    word1.getNrOfLetters();
    return 0;
}
