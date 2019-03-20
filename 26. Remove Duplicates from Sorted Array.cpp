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
        for (int i=1; i<nums.size(); i++)
        {
            if (nums[result]!=nums[i])
            {
                nums[result+1]=nums[i];
                result++;
            }

        }
        return result+1;
    }
};
int main ()
{

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    for (auto it=nums.begin(); it!=nums.end(); it++)
    {
        cout<<*it<<"";
    }
    auto it=nums.begin();
    auto endit=nums.end();
    cout<<*endit<<endl;
    nums.erase(it+1);
//    endit=nums.end();
//    cout<<*endit<<endl;
//    Solution sol;
//    sol.removeDuplicates(nums);
    return 0;

}
