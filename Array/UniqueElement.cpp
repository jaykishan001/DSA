#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr{1, 2, 2, 1, 5, 4, 4};
    // int ans = 0;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << "Before itration ans is: " << ans << endl;
    //     ans = arr[i] ^ ans;
    //     cout << "after updating ans is: " << ans << endl;
    // }

    // return 0;

    vector<int> arr{1, 2, 2, 3, 1, 5, 5};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] != arr[j])
            {
                ans.push_back(arr[i]);
            }
        }
    }

    for (int k = 0; k < ans.size(); k++)
    {
        cout << ans[k] << endl;
    }

    return 0;
}