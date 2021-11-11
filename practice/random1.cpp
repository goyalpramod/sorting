#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //code here
    int n;
    cin >> n;
    vi arr(n);
    vi ans(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int length = arr.size();
    for (int i = 0; i < n; i++)
    {
        int temp_revenue = 0;
        temp_revenue = arr[i] * (length - i);
        ans.push_back(temp_revenue);
    }
    cout << *max_element(ans.begin(), ans.end()) << "\n";
    return 0;
}
