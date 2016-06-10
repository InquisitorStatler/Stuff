#include <map>
iterator begin();
const_iterator begin() const;
map<string, int> stringCounts;
string str;

while (cin >> str) stringCounts[str]++;

map<string, int>::iterator iter;
for (iter = stringCounts.begin(); iter != stringCounts.end(); iter++) {
	cout << "word: " << iter->first << ", count: " << iter->second << endl;
}