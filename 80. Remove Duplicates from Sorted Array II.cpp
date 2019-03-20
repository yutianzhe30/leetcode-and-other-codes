#include <iostream>
#include <deque>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        if (nums.size()==0)
            return 0;
        int result=0;
        int flag=1;
        for (int i=1; i<nums.size(); i++)
        {
            if (nums[result]!=nums[i])
            {
                nums[result+1]=nums[i];
                result++;
                flag=1;//reset
            }
            else if (flag)
            {
                nums[result+1]=nums[i];
                result++;
                flag=0;//reset;
            }

        }
        return result+1;
    }
};
int main ()
{

    return 0;

}
