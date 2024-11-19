#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(a,b) for(int i = a;i < b;i++)
#define Fo(a,b) for(int i = a;i >= b;i--)
class Solution {
public:
    string reformatDate(string date) {
        string res = "", day = "", month = "", year = "";
        map<string, string> months = {
            {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"},
            {"May", "05"}, {"Jun", "06"}, {"Jul", "07"}, {"Aug", "08"},
            {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
        };
        int i = 0;
            while (i < 4 && isdigit(date[i])) {
                day += date[i];
                i++;
            }
            if (day.size() == 1) {
                day = "0" + day;
            }
            if(day.size() == 2) {
                i = 4;
                if(date[i] == ' ') i++;
                while (i < date.size() && isalpha(date[i])) {
                    month += date[i];
                    i++;
                    if(date[i] == ' ') break;
                }
                i += 1;
                while (i < date.size() && isdigit(date[i]) && date[i] != ' ') {
                    year += date[i];
                    i++;
                }
            }
        res = year + "-" + months[month] + "-" + day;
        return res;
    }
};

int main() {
    Solution sol;
    string date1 = "26th May 1960";
    string date2 = "6th Jun 1933";
    cout << sol.reformatDate(date1) << endl;
    cout << sol.reformatDate(date2) << endl;
    return 0;
}

//Given a date string in the form Day Month Year, where:
//
// Day is in the set {"1st", "2nd", "3rd", "4th", ..., "30th", "31st"}.
// Month is in the set {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}.
// Year is in the range [1900, 2100].
// Convert the date string to the format YYYY-MM-DD, where:
//
// YYYY denotes the 4 digit year.
// MM denotes the 2 digit month.
// DD denotes the 2 digit day.
//
// Example 1:
// Input: date = "20th Oct 2052"
// Output: "2052-10-20"

// Example 2:
// Input: date = "6th Jun 1933"
// Output: "1933-06-06"

// Example 3:
// Input: date = "26th May 1960"
// Output: "1960-05-26"

// Constraints:
// The given dates are guaranteed to be valid, so no error handling is necessary.