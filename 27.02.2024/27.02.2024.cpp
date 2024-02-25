#include <iostream>

using namespace std;

class Passport
{
protected:
    string name;
    string surname;
    int age;
    char* dateOfBirth;
    int numberOfPassport;
public:
    Passport(string n, string s,const char* date, int number, int age)
    {
        name = n;
        surname = s;
        numberOfPassport = number;
        this->age = age;
        dateOfBirth = new char[strlen(date) + 1];
        strcpy_s(dateOfBirth, strlen(date) + 1, date);
    }
    void Output_Passport()
    {
        cout << "Passport: " << endl;
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        if (dateOfBirth != nullptr)
        {
            cout << "Date of birth: " << dateOfBirth << endl;
        }
        cout << "Number of passport: #" << numberOfPassport << endl;
    }
};

class ForeignPassport : Passport
{
protected:
    int numberOfForeignPassport;
public:
    ForeignPassport(int num,string name, string surname,const char* date, int number, int age) : Passport(name,surname,date,number,age)
    {
        numberOfForeignPassport = num;
    }
    void Output_ForeignPassport()
    {
        cout << "Passport: " << endl;
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        if (dateOfBirth != nullptr)
        {
            cout << "Date of birth: " << dateOfBirth << endl;
        }
        cout << "Number of ForeignPassport: #" << numberOfForeignPassport << endl;
    }
};

int main()
{
    ForeignPassport passport(1,"Bogdan","Pirhavko","06.11.2006",12345,17);
    passport.Output_ForeignPassport();
}


