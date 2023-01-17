#include <bits/stdc++.h>
using namespace std;

int main(){
    int q, t, x, c;
    multiset<int> st;

    cin >> q;
    while (q--) {
        cin >> t;
        if (t == 1) {
            cin >> x;
            st.insert(x);
        } 
        else if (t == 2) {
            cin >> x >> c;
            while (c-- and st.find(x) != st.end()) {
                st.erase(st.find(x));
            }
        } 
        else if (t == 3) {
            cout << *st.rbegin() - *st.begin() << endl;
        }
    }
}
