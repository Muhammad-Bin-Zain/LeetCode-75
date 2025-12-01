#include "header.h"


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n)
    {
        int size = flowerbed.size();

        for (int i = 0; i < size && n > 0; )
        {
            if (flowerbed[i] == 1)
            {
                i += 2;   // skip next spot
            }
            else
            {
                int left = (i == 0 ? 0 : flowerbed[i - 1]);
                int right = (i == size - 1 ? 0 : flowerbed[i + 1]);

                if (left == 0 && right == 0)
                {
                    n--;
                    flowerbed[i] = 1;
                    i += 2;
                }
                else
                {
                    i++;
                }
            }
        }

        return n <= 0;
    }
};
