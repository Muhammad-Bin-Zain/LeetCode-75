#include "header.h" 

class Solution {
public:

	vector<string> Tokenise(string s)
	{
		vector<string> result;
		int size = s.size();
		string tempWord;
		for (int i = 0; i < size; i++)
		{
			tempWord = "";
			if (s[i] != '\0')
			{
				while (s[i] == ' ' and i < size)
					i++;

			}

			if (s[i] != '\0')
			{

				while (s[i] != ' ' and i < size)
				{
					tempWord += s[i];
					i++;
				}

				result.push_back(tempWord);
			}
		}
		return result;

	}

	string reverseWords(string s)
	{
		vector<string> tokens = Tokenise(s);
		string result = "";

		int size = tokens.size();
		for (int i = size - 1; i >= 0; i--)
		{
			result += tokens[i];
			if (i > 0)
				result += " ";

		}
		return result;
	}
};



