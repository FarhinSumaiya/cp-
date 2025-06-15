/*
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
     int large,small;
    for (int t = 0; t < T; ++t) {
        int X, Y;
        cin >> X >> Y;
       if (X < Y){
        large=Y;
        small=X;
       } else{
           large=X;
         small=Y;
       }
        // Calculate the sum of odd numbers in the range
        int sum = 0;
        for (int i = small+1; i <large; ++i) {
            if (i % 2 != 0)  {
            sum += i;
        }
        }
        cout << sum << endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        long long a, b;
        cin >> a >> b;
        long long min_v, max_v;

        if(a >= b)
        {
            max_v = a;
            min_v = b;
        }
        else
        {
            max_v = b;
            min_v = a;
        }

        int sum = 0;
        for(int k = min_v + 1; k <= max_v - 1; k++)
        {
            if(k % 2 != 0)
            {
                sum = sum + k;
            }
        }
        cout << sum << endl;
    }
}
