#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Solution {
public:
	string reverseStr(string s) {
	
		if (s.empty())
			return s;
		int sz = s.size();
		int begin = 0;
		while (begin<sz)
		{
			int first = begin;
			while ((begin<sz) && (s[begin] != ' '))
			{
				begin++;
			}
			int last = begin - 1;
			while (first<last)
			{
				swap(s[first], s[last]);
				++first;
				--last;
			}
			++begin;
		}
		return s;
	}
};
int main()
{
	Solution x;
	string s = x.reverseStr("abc def");
	for (string::iterator it = s.begin(); it < s.end(); it++)
	{
		cout << *it << endl;
	}
	system("pause");
}