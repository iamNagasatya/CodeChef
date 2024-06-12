#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long 

const int md = 1e9;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;
        vector<pair<ll, int>> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i].first;
            v[i].second = i % m;
        }

        sort(v.begin(), v.end());

        int count = m;
        int right = 0;
        ll ans = INT_MAX;
        vector<int> cnt(m, 0);
        for(int left=0; left<n; left++){
            while(right<n && count > 0){
                count -= cnt[v[right].second]==0;
                cnt[v[right].second]++;
                right++;
            }
            if(count==0){
                ans = min(ans, v[right-1].first - v[left].first); 
            }
            if(cnt[v[left].second]>0) cnt[v[left].second]--;
            count += cnt[v[left].second]==0;
        }
        cout << ans << endl;


    }
    
    return 0;
}