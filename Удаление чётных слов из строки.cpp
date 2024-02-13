#include <iostream>
#include <string>
#include <sstream>
using namespace std;
void removeEvenWords(string& str) {
    istringstream iss(str); ostringstream oss; string word; int count = 1;
    while (iss >> word) {
        if (count % 2 != 0) {oss << word << " ";}
        count++;
    }
    str = oss.str();
}
int main() {
    setlocale(LC_ALL, "Ru");
    string start = "Temporary happiness is like waiting for a knife";
    cout << "��������� ������: " << start << endl;
    removeEvenWords(start);
    cout << "���������: " << start << endl;
    return 0;
}
