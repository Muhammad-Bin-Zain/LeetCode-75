#include "Helper.h"



class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int max = Helper::Max(candies);
        

        vector<bool> result(candies.size(), false);

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i]>=max)
            {
                result[i] = true;
            }
        }
        return result;

    }
};