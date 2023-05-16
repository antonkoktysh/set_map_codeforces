#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

//
int CountUnique(const vector<int> &values, int n) {
    set<int> counter_set;
    for (auto value: values) {
        if (value >= 1 && value <= n) {
            counter_set.insert(value);
        }
    }
    return counter_set.size();
}

int CountUnique_(const vector<int> &values, int n) {
    set<int> counter_set;
    int answer = 0;
    for (auto value: values) {
        counter_set.insert(value);
    }
    for (int i = 1; i <= n; ++i) {
        if (counter_set.count(i)) {
            ++answer;
        }
    }

    return answer;
}

void CountN(const vector<int> &values, int n) {
    map<int, int> count_map;
    for (auto value: values) {
        if (count_map.count(value)) {
            ++count_map[value];
        }
        else {
            count_map[value] = 1;
        }
        for (int i = 1; i < n; ++i) {
            cout << i << ": " << count_map[i];
        }
    }
}

void SolveE() {
    int n;
    cin >> n;
    map<int, int> answer;
    int last = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
    }
}

int main() {
                                 /*Codeforces tasks*/
    //A
    /*int n, m;
    cin >> n >> m;
    string s1, s2;
    map<string, string> ans;

    for (int i = 0; i < n; ++i) {
        cin >> s1 >> s2;
        s2 += ';';
        ans[s2] = s1;
    }

    for (int i = 0; i < m; ++i) {
        cin >> s1 >> s2;
        cout << s1 << " " << s2 << " #" << ans[s2] << endl;
    }*/

    //B
    /*int n;
    cin >> n;
    string s;
    set<string> ans;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (ans.count(s)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        ans.insert(s);
    }*/

    //C
    /*int n;
    cin >> n;
    string name;
    map<string, int> ans;
    for (int i = 0; i < n; ++i) {
        cin >> name;
        if (ans[name] == 0) {
            cout << "OK" << endl;
            ++ans[name];
        }
        else {
            cout << name+to_string(ans[name]) << endl;
            ++ans[name];
        }
    }*/

    //D
    /*int n;
    cin >> n;
    set<pair<string,string>> s;
    string tree, color;
    for (int i = 0; i < n; ++i) {
        cin >> tree >> color;
        s.insert(make_pair(tree, color));
    }
    cout << s.size() << endl;*/

    //E
    /* int n, a;
     cin >> n;
     map<int, int> mp;
     int answer = 0;

     for (int i = 0; i < n; ++i) {
         cin >> a;
         ++mp[a];
         answer= max(mp[a], answer);
     }

     cout << answer << endl;
     */

    //F
    /*
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        SolveE();
    }
    */
    return 0;
}
