#include "header.h"

class Solution {
public:
	int compress(vector<char>& chars)
	{

		if (chars.size() == 1)
		{
			return 1;
		}
		int i = 1, count = 1;
		char temp = chars[0];

		while (i < chars.size())
		{
			if (chars[i] == temp)
			{
				chars.erase(chars.begin() + i);
				count++;
			}
			else
			{
				if (count > 1)
				{
					string cnt = to_string(count);
					chars.insert(chars.begin() + i, cnt.begin(), cnt.end());
					i += cnt.size();
					//chars.insert(chars.begin() + i - 1, (char)(count + '0'));
					count = 1;
				}
				temp = chars[i];
					i++;
			}

			
		}

		if (count > 1)
		{
			string cnt = to_string(count);
			chars.insert(chars.end(), cnt.begin(), cnt.end());
		}
		return chars.size();
	}
};