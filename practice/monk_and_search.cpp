#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    while (t > 0)
    {
        int q, num;
        cin >> q >> num;
        int temp_index = 0;
        int ans = 0;
        if (q == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] >= num)
                {
                    temp_index = i;
                    break;
                }
                else
                {
                    temp_index = n;
                }
                ans = n - temp_index;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > num)
                {
                    temp_index = i;
                    break;
                }
                else
                {
                    temp_index = n;
                }
                ans = n - temp_index;
            }
            
            // cout<<num<<endl;
            cout << ans << "\n";
            t--;
        }
    }
        return 0;
}