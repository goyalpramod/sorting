#include <bits/stdc++.h>
using namespace std;

int sum_of_n(int num){
    if(num<=1){
        return num;
    }
    return (num + sum_of_n(num-1));
}

int main(){
    int n = 10;
    int lookingfordis = sum_of_n(n);
    cout<<lookingfordis<<endl;
    return 0;
}