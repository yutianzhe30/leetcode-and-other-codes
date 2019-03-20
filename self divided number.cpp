#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i=left;i<=right;i++)
        {
            cout<<i<<endl;
            int flag=1;
            int temp=i;
            int ten=10;
            while (temp>0)
            {
                int digit=temp%10;
                if (digit==0||i%digit)
                {
                    flag=0;
                    break;
                }
                else if (i%digit==0)
                {
                    temp=temp/10;
                }

            }
            if (flag)
                {
                    result.push_back(i);
                }

        }
        return result;


    }
};

int stringToInteger(string input) {
    return stoi(input);
}

string integerVectorToString(vector<int> list, int length = -1) {
    if (length == -1) {
        length = list.size();
    }

    if (length == 0) {
        return "[]";
    }

    string result;
    for(int index = 0; index < length; index++) {
        int number = list[index];
        result += to_string(number) + ", ";
    }
    return "[" + result.substr(0, result.length() - 2) + "]";
}

int main() {


        vector<int> ret = Solution().selfDividingNumbers(15, 60);

        string out = integerVectorToString(ret);
        cout << out << endl;

    return 0;
}
