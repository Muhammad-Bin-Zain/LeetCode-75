#include "header.h"



class Solution {
public:
	bool increasingTriplet(vector<int>& nums)
	{
		int size = nums.size();

		/*for (int i = 0; i < size - 2; i++) // this case is for o(n^3) too much time consiming
		{
			for (int j = i + 1; j < size - 1; j++)
			{
				if (nums[j] > nums[i])
				{

					for (int k = j + 1; k < size; k++)
					{
						if (nums[k] > nums[j])
						{
							return true;
						}
					}
				}
			}
		}*/

		int first = INT_MAX;
		int scnd = INT_MAX;
		for (int i = 0; i < size; i++)
		{
			if (nums[i] <= first)
				first = nums[i];
			else if (nums[i] <= scnd)
				scnd = nums[i];
			else if(nums[i]>scnd)
				return true;
		}
		return false;
	}
};