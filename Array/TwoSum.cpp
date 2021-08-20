#include <bits/stdc++.h>
#include <vector>
using namespace std;
//given an arrar integer and target return indices of two number whose addition will form the target
// time complexity and space complexity will be O(n)
vector<int> TwoSum(vector<int> &num, int target)
{
    vector<int> ans;
    unordered_map<int, int> mpp;
    for (int i = 0; i < num.size(); i++)
    {
        if (mpp.find(target - num[i]) != mpp.end())
        {
            ans.push_back(mpp[target - num[i]]);
            ans.push_back(i);
            return ans;
        }
        mpp[num[i]] = i;
    }
    return ans;
}

int main()
{
    int size;
    int num;
    int target;
    cin >> size;
    cin >> target;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    v = TwoSum(v, target);

    cout << "index poision of that two number is "<<endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}