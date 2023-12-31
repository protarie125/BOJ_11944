#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int N, M;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> N >> M;

	auto oss = ostringstream{};
	for (auto i = 0; i < N; ++i) {
		oss << N;
	}

	auto ans = oss.str();
	M = min(M, static_cast<int>(ans.length()));
	cout << oss.str().substr(0, M);

	return 0;
}