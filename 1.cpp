#include <iostream>
using namespace std;

class Author
{
private:
    string name;
    string email;
    char gender;
public:
    Author (string name, string email, char gender)
    {
        this-> name = name;
        this-> email = email;
        this-> gender = gender;
    }
    
    string getName()
    {
        return name;
    }
    
    string getEmail()
    {
        return email;
    }
    
    void setEmail(string email)
    {
        this-> email = email;
    }
    
    char getGender()
    {
        return gender;
    }
    
    string toString()
    {
        string authorss;
        authorss = "Name: " + name + " Email: " + email + " Gender: " + gender;
        return authorss;
    }
};

int main ()
{
    Author person = Author("Angeline Indahsi", "angelineindahsi@ymail.com", 'f');
    cout << person.toString() << endl;
    return 0;
}
