#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	const auto& ret = m <= 100 * n;

	cout << (ret ? "Yes" : "No");

	return 0;
}