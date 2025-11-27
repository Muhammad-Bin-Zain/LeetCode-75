#include "Helper.h"

class Solution {
public:
	string gcdOfStrings(string str1, string str2)
	{
		if (str1 + str2 != str2 + str1)
		{
			return "";
		}

		int gcdL = Helper::GCD(str1.length(), str2.length());

		string result = "";

		for (int i = 0; i < gcdL; i++)
		{
			result += str1[i];
		}
		
		return result;
	}
};