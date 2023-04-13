/*5. Create a class which stores name, author and price of a book. Store information for n number
of books. Display information of all the books in a given price range using friend function.*/
#include <iostream>
using namespace std;
class Book
{
private:
    string name, Author;
    double price;

public:
    Book() {}
    Book(string n, string a, double p)
    {
        name = n;
        Author = a;
        price = p;
    }
    void setDetails(string n, string a, double p)
    {
        name = n;
        Author = a;
        price = p;
    }
    string getName()
    {
        return name;
    }
    string getAuthor()
    {
        return Author;
    }
    double getPrice()
    {
        return price;
    }
    void printBook()
    {
        cout << "The book name is:" << name << endl;
        cout << "The book author is:" << Author << endl;
        cout << "The book price is:" << price << endl;
    }
    friend void display(int x);
};
void display(int x)
{
    string name, Author;
    double price;

    Book arr[x];

    for (int i = 0; i < x; i++)
    {
        cout << "Enter the book name " << i + 1 << endl;
        cin >> name;
        cout << "Enter the author \n";
        cin >> Author;
        cout << "Enter the book price\n";
        cin >> price;
        arr[i].setDetails(name, Author, price);
    }
    for (int i = 0; i < x; i++)
    {
        cout << endl;
        cout << "Details of book " << (i + 1) << "are:\n";

        arr[i].printBook();
    }
}
int main()
{
    int x;
    cout << "Enter the number of books\n";
    cin >> x;
    display(x);
}