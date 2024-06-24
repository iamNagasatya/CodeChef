#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long 

int dx[] = { 0, -1, 0, 1};
int dy[] = {-1,  0, 1, 0};

const int md = 1e9;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    map<ll, map<ll, bool>> mp;
    while(t--){
        mp.clear();
        ll n, m, k, x, y;
        cin >> n >> m >> k;
        ll ans = 0;
        while(k--){
            cin >> x >> y;
            for(int i=0; i<4; i++){
                ans += mp[x+dx[i]][y+dy[i]] ? -1 : 1;
            }
            mp[x][y] = true;
        }
        cout << ans << endl;

    }
    
    return 0;
}