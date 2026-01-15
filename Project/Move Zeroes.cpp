#include "header.h"

class Solution {
public:

	void moveZeroes(vector<int>& nums)
	{
		int inserPos = 0;

		int size = nums.size();
		for (int i = 0; i < size; i++) // pass 1 for moving non zero to the front 
		{
			if (nums[i] != 0)
			{
				nums[inserPos] = nums[i];
				inserPos++;
			}
		}

		while (inserPos < size) //  pass 2 placing the 0 at the end after non zero the front
			nums[inserPos++] = 0;






	}
};


int main()
{
	Solution sol;
	vector<int> sample{ 0,0,1 };

	sol.moveZeroes(sample);

	for (int i = 0; i < sample.size(); i++)
	{
		cout << sample[i] << endl;
	}
}