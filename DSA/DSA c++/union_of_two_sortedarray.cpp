#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 5;

    int a1[5] = {1, 2, 3, 4, 4};
    int a2[5] = {2, 2, 7, 8, 9};

    set<int> st;

    // Insert first array
    for (int i = 0; i < n; i++) {
        st.insert(a1[i]);
    }

    // Insert second array
    for (int i = 0; i < n; i++) {
        st.insert(a2[i]);
    }

    // Print union
    for (auto it : st) {
        cout << it << " ";
    }

    return 0;
}