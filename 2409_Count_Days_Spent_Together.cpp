//
// Created by admin on 12/3/2024.
//
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(a,b) for(int i = a;i < b;i++)
#define Fo(a,b) for(int i = a;i >= b;i--)

class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string start = max(arriveAlice, arriveBob);
        string end = min(leaveAlice, leaveBob);

        if (start > end) return 0;

        int startMonth = stoi(start.substr(0, 2));
        int startDay = stoi(start.substr(3, 2));
        int endMonth = stoi(end.substr(0, 2));
        int endDay = stoi(end.substr(3, 2));

        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int daysTogether = 0;
        if (startMonth == endMonth) {
            daysTogether = endDay - startDay + 1;
        } else {
            daysTogether += daysInMonth[startMonth - 1] - startDay + 1;
            for (int i = startMonth; i < endMonth - 1; ++i) {
                daysTogether += daysInMonth[i];
            }
            daysTogether += endDay;
        }

        return daysTogether;
    }
};

int main() {
    Solution sol;
    string arriveAlice = "08-15", leaveAlice = "08-18", arriveBob = "08-16", leaveBob = "08-19";
    cout << sol.countDaysTogether(arriveAlice, leaveAlice, arriveBob, leaveBob) << endl;
    string arrAl2 = "09-01", lvAl2 = "10-19", arrBob2 = "06-19", lvBob2 = "10-20";
    cout << sol.countDaysTogether(arrAl2, lvAl2, arrBob2, lvBob2) << endl;
}













// Alice and Bob are traveling to Rome for separate business meetings.
// You are given 4 strings arriveAlice, leaveAlice, arriveBob, and leaveBob.
// Alice will be in the city from the dates arriveAlice to leaveAlice (inclusive),
// while Bob will be in the city from the dates arriveBob to leaveBob (inclusive).
// Each will be a 5-character string in the format "MM-DD", corresponding to the month and day of the date.
// Return the total number of days that Alice and Bob are in Rome together.
// You can assume that all dates occur in the same calendar year, which is not a leap year.
// Note that the number of days per month can be represented as: [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31].
//
//
// Example 1:
// Input: arriveAlice = "08-15", leaveAlice = "08-18", arriveBob = "08-16", leaveBob = "08-19"
// Output: 3
// Explanation: Alice will be in Rome from August 15 to August 18. Bob will be in Rome from August 16 to August 19. They are both in Rome together on August 16th, 17th, and 18th, so the answer is 3.

// Example 2:
// Input: arriveAlice = "10-01", leaveAlice = "10-31", arriveBob = "11-01", leaveBob = "12-31"
// Output: 0
// Explanation: There is no day when Alice and Bob are in Rome together, so we return 0.
//
// Constraints:
//
// All dates are provided in the format "MM-DD".
// Alice and Bob's arrival dates are earlier than or equal to their leaving dates.
// The given dates are valid dates of a non-leap year.