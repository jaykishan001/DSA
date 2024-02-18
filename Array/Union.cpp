#include <bits/stdc++.h>
using namespace std;
vector<int> unionOfArray(vector<int> arr, vector<int> brr, int sizea, int sizeb)
{
    vector<int> ans;

    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < sizeb; i++)
    {
        ans.push_back(brr[i]);
    }
    return ans;
}

int main()
{

    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{6, 7, 8, 8, 9};
    int sizea = arr.size();
    int sizeb = brr.size();
    vector<int> result = unionOfArray(arr, brr, sizea, sizeb);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}