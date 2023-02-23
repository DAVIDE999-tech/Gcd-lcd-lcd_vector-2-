#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int lcm_vector(vector<int>& v) {
    int n = v.size();
    int result = v[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, v[i]);
    }
    return result;
}

int main() {
    int N;//numero di interi 
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    int result = lcm_vector(v);
    cout << "The LCM of the numbers is: " << result << endl;
    return 0;
}
