
#include <iostream>
#include <deque>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

    int index1=0;
    int index2=1;
        for (index1=0;index1<index2;index1++)
        {
            for (index2=index1+1;index2<numbers.size();index2++)
            {
                int temp=numbers[index1]+numbers[index2];
                if (temp==target)
                {
                    vector <int> result;
                    result.push_back(index1+1);
                    result.push_back(index2+1);
                    return result;
                }
                else if (temp>target)
                {
                    break;
                }
            }
        }

    }
};
int main ()
{

    return 0;

}
