// Q.5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
#include <iostream>
#include <string.h>

using namespace std;

string sort(string s1)
{

	bool flag;
	char ch;

	do
	{
		flag = false;

		for (int i = 0; i < s1.length() - 1; i++)
		{
			s1[i] = tolower(s1[i]);
			if (s1[i] > s1[i + 1])
			{
				ch = s1[i];
				s1[i] = s1[i + 1];
				s1[i + 1] = ch;
				flag = true;
			}
		}
	} while (flag);

	// Remove spaces
	string str;
	for (int y = 0; y < s1.length(); y++)
	{
		if (s1[y] != ' ')
		{
			str.push_back(s1[y]);
		}
	}

	return str;
}

int main()
{

	string s;
	cout << "Enter a string value :" << endl;
	getline(cin, s);
	cout << "Sorted String is " << sort(s);

	return 0;
}
