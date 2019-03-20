#include <iostream>
#include <deque>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        //recuresive
        vector <string> result;
        for (int i=0;i<digits.size();i++)
        {
            result=multiple(result,digits2string(digits[i]));
        }
        return result;
    }
    vector<string> multiple (vector<string> head,string append_character)
    {
        vector<string> result;
        for (int i=0;i<append_character.size();i++)
        {
            string str (1,append_character[i]);
            if (head.size()<1)
            {
                std::cout<<str<<std::endl;
                result.push_back(str);
            }
            else
            {
                for (int j=0;j<head.size();j++)
                {
                    std::cout<<head[j]<<std::endl;
                    string temp=head[j];
                    result.push_back(temp.append(str));
                }
            }

        }
        return result;
    }
    string digits2string (char digit)
    {
        switch (digit)
        {
            case '2':return "abc";break;
            case '3':return "def";break;
            case '4':return "ghi";break;
            case '5':return "jkl";break;
            case '6':return "mno";break;
            case '7':return "pqrs";break;
            case '8':return "tuv";break;
            case '9':return "wxyz";break;
            default: return "";
        }
    }
};
int main ()
{
    Solution s;
    auto result =s.letterCombinations("232");
    for (auto it=result.begin();it<result.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;

}
