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

class Book
{
private:
    string name;
    Author author;
    double price;
    int qty = 0;
public:
    Book (string bookName, Author authorr, double price)
    {
        this -> name = bookName;
        this-> author = authorr;
        this-> price = price;
    }
    
    Book (string bookName, Author author, double price, int qty)
    {
        this -> name = bookName;
        this-> author = author;
        this-> price = price;
        this-> qty = qty;
    }
    
    string getName()
    {
        return name;
    }
    
    Author getAuthor()
    {
        return author;
    }
    
    double getPrice()
    {
        return price;
    }
    
    void setPrice (double price)
    {
        this-> price = price;
    }
    
    int getQty()
    {
        return qty;
    }
    
    void setQty (int qty)
    {
        this-> qty = qty;
    }
    
    string toString()
    {
        return "Book Title: " + name + "Author: " + author.toString() + "Price: $ " + price + " Quantity: " + qty;
    }
};

int main()
{
    Author person = Author("Angeline Indahsi", "angelineindahsi@ymail.com", 'f');
    cout << person.toString() << endl;
    
    Book one = Book("A book", "Somebody", 50, 100);
    cout << one.toString() << endl;
    
    return 0;
}
