#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    vector<int> numbers;
    size_t start = 0;
    size_t end = input.find(' ');
    while (end != string::npos) {
        numbers.push_back(stoi(input.substr(start, end - start)));
        start = end + 1;
        end = input.find(' ', start);
    }
    numbers.push_back(stoi(input.substr(start)));

    vector<int> evenNumbers;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] % 2 == 0) {
            evenNumbers.push_back(numbers[i]);
        }
    }
    cout << "Even numbers are: ";
    for (int i = 0; i < evenNumbers.size(); i++) {
        cout << evenNumbers[i];
        if (i != evenNumbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    vector<int> threeDigitNumbers;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] >= 100 && numbers[i] <= 999) {
            threeDigitNumbers.push_back(numbers[i]);
        }
    }
    cout << "Three digit numbers: ";
    for (int i = 0; i < threeDigitNumbers.size(); i++) {
        cout << threeDigitNumbers[i];
        if (i != threeDigitNumbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    sort(numbers.begin(), numbers.end());
    cout << "Ascending order: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != numbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    sort(numbers.rbegin(), numbers.rend());
    cout << "Descending order: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != numbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    sort(numbers.rbegin(), numbers.rend());
    cout << "Top three numbers: ";
    for (int i = 0; i < 3 && i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != 2 && i != numbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    map<int, int> occurrencesByNumber;
    for (int i = 0; i < numbers.size(); i++) {
        if (occurrencesByNumber.count(numbers[i]) == 0) {
            occurrencesByNumber[numbers[i]] = 0;
        }
        occurrencesByNumber[numbers[i]]++;
    }
    cout << "Occurrences by number: " << endl;
    for (auto it = occurrencesByNumber.begin(); it != occurrencesByNumber.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}
