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

};

