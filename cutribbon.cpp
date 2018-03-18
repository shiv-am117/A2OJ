#include<bits/stdc++.h>
using namespace std;
   int main()
    {
            int n, a, b, c;
            cin >> n >> a >> b >> c; 

            const int l = n + 1;
            int sum[l];
            fill(sum, sum+l, INT_MIN);
            sum[0] = 0;

            for(int i=1; i<=n; i++)
            {
                    if(i - a >= 0)
                    {
                            sum[i] = sum[i-a] + 1;
                    }
                    if(i - b >= 0 && sum[i-b] + 1 > sum[i])
                    {
                            sum[i] = sum[i-b] + 1;
                    }
                    if(i - c >= 0 && sum[i-c] + 1 > sum[i])
                    {
                            sum[i] = sum[i-c] + 1;
                    }

            }
            cout << sum[n] << endl;
            return 0;
    }