#include "header.h"



class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> result(n, 1);

     /*   i 	prefix(before)	result[i] = prefix	prefix = prefix * nums[i]
            0	1	                1	                1 * 1 = 1
            1	1	                1                   1 * 2 = 2
            2	2	                2	                2 * 3 = 6
            3	6	                6	                6 * 4 = 24*/
        int prefix = 1;
        for (int i = 0; i < n; i++)     // left side product loop 
        {
            result[i] = prefix;
            prefix *= nums[i];
        }


        /*i	    result[i]	        suffix(before)	result[i] *= suffix	        suffix = suffix * nums[i]
            3	    6	                1	        6 * 1 = 6	                    1 * 4 = 4
            2	    2	                4	        2 * 4 = 8	                    4 * 3 = 12
            1	    1	                12	        1 * 12 = 12	                    12 * 2 = 24
            0	    1	                24	        1 * 24 = 24	                    24 * 1 = 24*/
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) // right side product loop
        {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }

};