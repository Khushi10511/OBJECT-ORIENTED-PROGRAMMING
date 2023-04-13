/*3.Create a class which allocates the memory  for a string through dynamic constructor.
    Overload + operator to concatenate 2 strings.*/
#include <iostream>
#include <string>

using namespace std;

class String
{
public:
    String(string str)
    {
        len = str.length();
        chstr = new char[len];
        for (int i = 0; i < str.length(); i++)
        {
            chstr[i] = str[i];
            cout << chstr[i];
        }
    }

    bool operator<(const String &S)
    {
        return this->len < S.len;
    }
    String &operator+(const String &S)
    {
        String SA("");
        SA.len = this->len + S.len;
        int i = 0;
        for (; i < this->len; i++)
        {
            SA.chstr[i] = this->chstr[i];
        }
        for (int j = 0; j < S.len; i++, j++)
        {
            SA.chstr[i] = S.chstr[j];
        }
        return SA;
    }
    void print()
    {
        for (int i = 0; i < len; i++)
        {
            cout << chstr[i] << " ";
        }
    }

private:
    char *chstr;
    short int len;
};

int main()
{
    String S1("pida"), S2("ras");
    String S3("");
    S3 = S1 + S2;
}
