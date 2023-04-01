#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define all(x) (x).begin(), (x).end()
#define pb(x) push_back(x);
#define ppb pop_back();
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define MOD 1000000007
#define f(i,a,n) for(ll i=a;i<n;i++)
#define p(x) cout<<x<<endl;
#define in(x) cin>>x;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x); cerr<<endl;
#else
#define debug(x)
#endif

void _print(int a) {
	cerr << a;
}

void _print(string a) {
	cerr << a;
}

void _print(long long a) {
	cerr << a;
}

void _print(double a) {
	cerr << a;
}

void _print(char a) {
	cerr << a;
}

void _print(bool a) {
	cerr << a;
}

//for debugging vectors of any type
template<class T> void _print(vector<T>v) {
	cerr << "[ ";
	for (T i : v) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}


//for debugging sets of any type
template<class T> void _print(set<T> s1) {
	cerr << "[ ";
	for (T i : s1) {
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

template <class T, class V> void _print(pair <T, V> p) {
	cerr << "{";
	_print(p.ff);
	cerr << ",";
	_print(p.ss);
	cerr << "}";
}

template <class T, class V> void _print(map <T, V> v) {
	cerr << "[ ";
	for (auto i : v) {
		_print(i); cerr << " ";
	}
	cerr << "]";
}

template <class T, class V> void _print(unordered_map <T, V> v) {
	cerr << "[ ";
	for (auto i : v) {
		_print(i); cerr << " ";
	}
	cerr << "]";
}




#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
	#ifndef ONLINE_JUDGE
	//for getting input from the input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	fast_io
	
	ll t,n,a,b,fa,c,d,k,q,l,r,ans,x,y, maxv, cost1, cost2, cost3;
	in(t)
	while(t--){
		in(n)
		cout<<"All prOblems are solved in C++"<<endl;
	}

	return 0;
}
