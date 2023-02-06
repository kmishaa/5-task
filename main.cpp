#include <iostream>
#include <vector>

using namespace std;

class flight {
public:
    flight(const int& nu, const int& nv, const bool& nt) {
        u = nu;
        v = nv;
        t = nt;
    }
    int u, v;
    bool t;
};

class airport {
public:
    airport(const int& n, const bool& p) {
        number = n;
        parity = p;
    }
    int number;
    bool parity;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<flight> flights;
    for (int i = 0; i < m; i++) {
        int u, v;
        bool t;
        cin >> u >> v >> t;
        flights.push_back(flight(u, v, t));
    }

    vector<bool> airptorts(n);
    for (flight& f : flights) {
        if (f.u == 1) {
            airptorts[f.v - 1] = 1;
        }
    }

    cout << -1 << endl;
    for (bool a : airptorts) {
        cout << a;
    }

    return 0;
}
