/*
#include <iostream>
using namespace std;

int main() {
    int N, M;

    // Repeat reading until a number is less than or equal to zero
    while (cin >> N >> M) {


        // If either number is zero or negative, stop the program
        if (N <= 0 || M <= 0) {
            break;
        }

        // Determine which number is smaller and which is larger
        int small, large;
        if (N < M) {
            small = N;
            large = M;
        } else {
            small= M;
            large = N;
        }

        int sum = 0;

        // Print numbers between start and end, and calculate sum
        for (int i = small; i <= large; i++) {
            cout << i << " ";
            sum += i;
        }

        // Print the sum at the end
        cout << "sum =" << sum << endl;
    }

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        long long a,b,max_v,min_v;
        cin >> a >> b;
        if(a <= 0 || b <= 0)
            break;
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

        long long sum = 0;
        for(int k = min_v; k <= max_v; k++)
        {
            cout << k << " ";
            sum = sum + k;
        }

        cout << "sum =" << sum << endl;
    }
}
