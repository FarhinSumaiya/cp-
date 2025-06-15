/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    char S;
    int N;
    cin >> S >> N;

    int Xi;
    for (int i = 0; i < N; ++i) {
        cin >> Xi;
        for (int j = 0; j < Xi; ++j) {
            cout << S;
        }
        cout << '\n'; // Move to next line after printing the symbol Xi times
    }

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        long long j;
        cin>>j;
        for(int k=1; k<=j; k++)
        {
            cout<<s;
        }
        cout<<endl;
    }
}

