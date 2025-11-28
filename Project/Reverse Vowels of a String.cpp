#include "Helper.h"

class Solution {
public:
	string reverseVowels(string s)
	{
		int i = 0;
		int j = s.size() - 1;

		while (i < j)
		{
			while (!Helper::isVowel(s[i]) and i < j)
			{
				i++;
			}
			while (!Helper::isVowel(s[j]) and i < j)
			{
				j--;
			}
			if (i < j)
			{
				swap(s[i], s[j]);
				i++, j--;

			}
		}
		return s;
	}
};