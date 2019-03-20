
#include <iostream>
#include <deque>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        int flag=1;
        if (dividend==INT_MIN)
        {
            if (divisor==-1)
                {return INT_MAX;}
            else if (divisor==1)
                {return INT_MIN;}
        }
        if (divisor==INT_MIN)
        {
            if (dividend==divisor)
                return 1;
            else return 0;
        }
        cout<<"pause"<<endl;
        if (dividend>0)
        {
            flag=0-flag;
            dividend=0-dividend;
        }
        if (divisor>0)
        {
            flag=0-flag;
            divisor=0-divisor;
        }
        //transfer into all <0because it has more range
        int result=-1;
        while(dividend<=0)
        {
            dividend=dividend-divisor;
            //cout<<dividend<<" "<<endl;
            result=result+1;
        }
        if (flag>0)
        return result;
        else
        return (0-result);
    }
};
int main ()
{

    Solution sol;
    std::cout<<sol.divide(-2147483648,-2147483648)<<std::endl;
    return 0;

}
