#include <bits/stdc++.h>
using namespace std;

// function version

#define endl '\n'
#define IO cin.tie(0), ios_base::sync_with_stdio(0)

template<class T> istream& operator>>(istream&, vector<T>&);
template<class T, long long unsigned int N> istream& operator>>(istream&, array<T, N>&);
template<class T1, class T2> istream& operator>>(istream&, pair<T1, T2>&);

template<class T>
istream& operator>>(istream& is, vector<T>& vt) {
	for(auto& i : vt)
		is >> i;
	return is;
}
template<class T, long long unsigned int N>
istream& operator>>(istream& is, array<T, N>& ary) {
	for(auto& i : ary)
		is >> i;
	return is;
}
template<class T1, class T2>
istream& operator>>(istream& is, pair<T1, T2>& pr) {
	is >> pr.first >> pr.second;
	return is;
}
template<class T> void read(T& x) {
	cin >> x;
	cin.get();
}
template<class T, class ... P> void read(T& x, P& ... t) {
	cin >> x;
	read(t...);
}
template<class T> void readl(T& x) { // readline
	getline(cin, x);
}
template<class T, class ... P> void readl(T& x, P& ... t) {
	getline(cin, x);
	readl(t...);
}

// Don't use them to output answer
template<class T> ostream& operator<<(ostream&, vector<T>&);
template<class T, long long unsigned int N> ostream& operator<<(ostream&, array<T, N>&);
template<class T1, class T2> ostream& operator<<(ostream&, pair<T1, T2>&);

template<class T>
ostream& operator<<(ostream& os, vector<T>& vt) {
	auto end = vt.end();
	for(auto i = vt.begin(); i != end; ++i)
		os << *i << (i+1==end?"\n":" ");
	return os;
}
template<class T, long long unsigned int N>
ostream& operator<<(ostream& os, array<T, N>& ary) {
	auto end = ary.end();
	for(auto i = ary.begin(); i != end; ++i)
		os << *i << (i+1==end?"\n":" ");
	return os;
}
template<class T1, class T2>
ostream& operator<<(ostream& os, pair<T1, T2>& pr) {
	os << pr.first << ' ' << pr.second << '\n';
	return os;
}
template<class T> void write(T x) {
	cout << x;
}
template<class T, class ... P> void write(T x, P ... t) {
	cout << x;
	write(t...);
}
void print() { cout << '\n'; }
template<class T> void print(T x) {
	cout << x << '\n';
}
template<class T, class ... P> void print(T x, P ... t) {
	cout << x << ' ';
	print(t...);
}

int main() {
	;
}
