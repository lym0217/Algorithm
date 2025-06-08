#include <iostream>

using namespace std;

 int main() {
     int n, s, m, l, xl, xxl, xxxl, t, p;
     
     cin >> n;
     cin >> s >> m >> l >> xl >> xxl >> xxxl;
     cin >> t >> p;
     
     cout << s/t + ((s%t)?1:0) + m/t + ((m%t)?1:0) + l/t + ((l%t)?1:0) + xl/t + ((xl%t)?1:0) + xxl/t + ((xxl%t)?1:0) + xxxl/t + ((xxxl%t)?1:0) << endl;
     cout << n/p << " " << n%p << endl;
     return 0;
}