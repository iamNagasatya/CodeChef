#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long 

int dx[] = { 0, -1, 0, 1};
int dy[] = {-1,  0, 1, 0};

const int md = 1e9;

int main() {
	ll n, m, id, attr, val, pr;
	
	unordered_map<ll, unordered_map<ll, pair<ll, ll>>> mp;
	
	cin >> n >> m;
	
	while(n--){
	    cin >> id >> attr >> val >> pr;
	    if(mp.find(id)==mp.end()){
	        mp[id][attr] = make_pair(pr, val);
	    }
	    else{
	        if(mp[id].find(attr) == mp[id].end()){
	            mp[id][attr] = make_pair(pr, val);
	        }
	        else{
	            if(mp[id][attr].first <= pr){
	                mp[id][attr].first = pr;
	                mp[id][attr].second = val;
	            }
	        }
	    }
	}

    while(m--){
        cin >> id >> attr;
        cout << mp[id][attr].second << endl;
    }

}
