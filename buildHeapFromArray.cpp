#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;

#define M 1000000007
#define pb push_back
#define rep(i,n) for (long long i = 0; i < n; ++i)
#define REP(i,k,n) for (long long i = k; i <= n; ++i)
#define REPR(i,k,n) for (long long i = k; i >= n; --i)
#define ff first
#define ss second
#define ALL(v) v.begin(), v.end()
#define mp make_pair

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void heapify(vector<int> &a, int i) {
    int n = a.size();
    int l = 2*i+1;
    int r = 2*i+2;
    int largest = i;
    if(l<n && a[largest]<a[l])
        largest = l;
    if(r<n && a[largest]<a[r])
        largest = r;
    if(largest!=i) {
        swap(a[i], a[largest]);
        heapify(a, largest);
    }
}

void buildHeap(vector<int> &a) {
    int n = a.size();
    int lastNonLeaf = n/2-1;
    for(int i=lastNonLeaf; i>=0; i--)
        heapify(a, i);
}

int main() {
    fastIO();
    ll t;
    cin>>t;
    // cout<<t<<endl;
    while(t--) {
        vector<int> a = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
        buildHeap(a);
        for(auto it: a) cout<<it<<" ";
    }
}