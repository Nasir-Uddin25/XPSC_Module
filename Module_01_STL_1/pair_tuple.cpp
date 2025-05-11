#include <bits/stdc++.h>
using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll;
//     Student(string name, int roll)
//     {
//         this->name = name;
//         this->roll = roll;
//     }
// };
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Student rahim("Rahim ahmed", 10);
    // Student rahim;
    // getline(cin, rahim.name);
    // cin.ignore();
    // cin >> rahim.roll;
    // cout << rahim.name << " " << rahim.roll << endl;

    // pair<string, int> student = make_pair("Nasir Uddin", 01);
    // pair<string, int> father = {"Abdul Oadud", 65};
    // cout << student.first << endl;
    // cout << student.second << endl;
    // father.first = "Babul";
    // auto[name, age] = father;

    // cout << name <<" " << age << endl;

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     pair<string, int> student;
    //     cin >> student.first >> student.second;
    //     cout << student.first << " " << student.second << endl;
    // }
    // int n;
    // cin >> n;
    // pair<string, int> students[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }

    // for (int i = 0; i < n; i++)
    //     cout << students[i].first << " " << students[i].second << endl;
    // for (auto [x, y] : students)
    //     cout << x << " " << y << endl;

    /*  ------------------------------ Tuple STL ------------------------------------------   */
    // tuple<string, string, double, char> results = make_tuple("Nasir Uddin", "Cumilla", 4.78, 'A');
    // get<index> (tuple_name);
    // cout << get<0>(results) << " " << get<1>(results) << " " << get<2>(results) << " " << get<3>(results);
    // auto [name, board, gpa, grade] = results;
    // cout << name << " " << board <<" " << gpa <<" " << grade << endl;

    pair<pair<string, string>, pair<double, char>> p = {{"Karim Uddin", "Cumilla"}, {4.78, 'A'}};

    string name = p.first.first;
    string board = p.first.second;
    double gpa = p.second.first;
    char grade = p.second.second;

    cout << name <<" " << board <<" " << gpa <<" " << grade << endl;

        return 0;
}