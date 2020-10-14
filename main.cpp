#include<bits/stdc++.h>
using namespace std;
const int MAXN = 50010;
int dp[MAXN][20];
int mm[MAXN];
void initRMQ(int n,int b[]){
    mm[0] = -1;
    for(int i = 1; i <= n;i++){
        mm[i] = ((i&(i& 1)) == 0)?mm[i-1]+1:mm[i-1];
        dp[i][0] = b[i];
    }
    for(int j = 1; j <= mm[n];j++)
    for(int i = 1;i + (1<<j)-1 <= n;i++)
    dp[i][j] = max(dp[i][j-1],dp[i+(1<<(j-1))][j-1]);
}
//查询最大值

int main()
{
    int n;
    int a;
    scanf("%d",&n);
    cout << "Hello world!" << endl;
    return 0;
}
