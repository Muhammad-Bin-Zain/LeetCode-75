#include "header.h"
class Helper
{
public:

	 static int GCD(int num1, int num2)
	{
		int result = 0;
		int min1 = min(num1, num2);

		for (int i = 1;i<= min1; i++) // much better then brute force
		{
			if (num1 % i  == 0 and num2 % i== 0)
			{
				result = i;
			}
		}

		return result;
	}

	 static int Max(vector<int> arr)
	 {
		 if (arr.size()==0)
		 {
			 throw runtime_error("Vcctor is empty ");
		 }
		 int result = arr[0];
		 for (int i = 1; i < arr.size(); i++)
		 {
			 if (arr[i]>result)
			 {
				 result = arr[i];
			 }
		 }

		 return result;
	 }
	 static bool isVowel(char s)
	 {
		 char chr = tolower(static_cast<unsigned char>(s));
		return  chr == 'a' or chr == 'e' or chr == 'i' or chr == 'o' or chr == 'u';
	 }

};

