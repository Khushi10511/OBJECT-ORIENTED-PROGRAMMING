// Q.4. Write a C++ program to find the largest word in a given string.
#include <iostream>
#include <string.h>

using namespace std;

string Longest(string s)
{

  string r, temp;
  int n;

  for (int i = 0; i < s.length(); i++)
  {
    n = s[i];

    if (s[i] != ' ' && (n >= 65 && n <= 90) || (n >= 97 && n <= 122) || (n >= 48 && n <= 57))
    {
      temp.push_back(s[i]);

      if (i + 1 == s.length() && temp.length() > r.length())

        r = temp;
    }
    else
    {
      if (temp.length() > r.length())

        r = temp;

      temp.clear();
    }
  }

  return r;
}

int main()
{
  string s1;
  cout << "Enter a string : ";
  getline(cin, s1);
  cout << "Longest word in string is:" << Longest(s1);
  return 0;
}
