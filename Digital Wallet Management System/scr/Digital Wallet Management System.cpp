#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> users(N, vector<int>(2));

    for (int i = 0; i < N; ++i) {
        cin >> users[i][0] >> users[i][1];
    }

    int T; 
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int from_userID, to_userID, amount;
        cin >> from_userID >> to_userID >> amount;

        auto from_it = find_if(users.begin(), users.end(), [from_userID](const vector<int>& user) {
            return user[0] == from_userID;
        });
        auto to_it = find_if(users.begin(), users.end(), [to_userID](const vector<int>& user) {
            return user[0] == to_userID;
        });

        if (from_it != users.end() && to_it != users.end() && from_it->at(1) >= amount) {
            from_it->at(1) -= amount;
            to_it->at(1) += amount;
            cout << "Success\n";
        } else {
            cout << "Failure\n";
        }
    }
    cout << endl;

    sort(users.begin(), users.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });

    for (const auto& user : users) {
        cout << user[0] << " " << user[1] << endl;
    }

    return 0;
}
