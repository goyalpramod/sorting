#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while (T > 0)
	{
		//code here
		int n;
		cin >> n;
		string s;
		for (int i = 0; i < n; i++)
			cin >> s[i];
		int blocks = 1;
		for (int k = 1; k < n; k++)
		{
			if (s[k] != s[k - 1])
			{
				blocks++;
			}
		}
		// cout<<blocks<<"\n";

		if (blocks == 1)
		{
			cout << "SAHID"
				 << "\n";
		}
		else if (blocks == 2)
		{
			cout << "RAMADHIR"
				 << "\n";
		}else if(blocks == 3 || blocks == 4){
			cout<<"SAHID"<<'\n';
		}else if(blocks%2 == 0){
			cout<<"SAHID"<<'\n';
		}else{
			cout<<"RAMADHIR"<<'\n';
		}
		
		T--;
	}
	return 0;
}
