#include <iostream>
#include <string>
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
    Author *authors;
    double price;
    int qty = 0;
public:
    Book (string name, Author authors[], double price, )
    {
        this-> name = name;
        this-> authors = new Author[2];
        for(i=0; i<2; i++)
        {
            this-> authors[i] = authors[i];
        }
        this-> price = price;
    }
    Book(string name, Author authors[], double price, int qty)
    {
        this-> name = name;
        this-> authors = new Author[2];
        for(i=0; i<2; i++)
        {
            this-> authors[i] = authors[i];
        }
        this-> price = price;
        this-> qty = qty;
    }
    string getName()
    {
        return name;
    }
    Author getAuthor()
    {
        return *authors;
    }
    double getPrice()
    {
        return price;
    }
    int getQty()
    {
        return qty;
    }
    void setQty(int qty)
    {
        this-> qty = qty;
    }
    string toString()
    {
        return "Book title: " + name + "\n" + author[0].toString() + " Price: " + to_string(price) + " Quantity: " + qty;
    }
    string getAuthorsNames()
    {
        return authors[0].getName() + " and " + authors[1].getName();
    }
};

int main()
{
    Author data[2] = {Author("author1", "author@gmail.com", 'f'), Author("author2", "author2@gmail.com", 'm')};
    cout << data.toString() << endl;
    
    Book bookData = Book (Book one = Book("A book", "Somebody", 50, 100);
    cout << bookData.toString() << endl;
                          
    return 0;
}
