#include "header.h"

class Solution {
public:
	string mergeAlternately(string word1, string word2) {
		string result = "";

		int n = word1.size(), m = word2.size(), i = 0, j = 0;


		while (i < n and j < m)
		{
			result = result + word1[i++];
			result = result + word2[j++];
		}

		while (i < n)
		{
			result = result + word1[i++];
		}

		while (j < m)
		{
			result = result + word2[j++];
		}

		return result;

	}
};