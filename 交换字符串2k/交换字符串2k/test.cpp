#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Solution {
public:
	string reverseStr(string s, int k) {
		// string s1;
		if (s.empty())
			return s;
		int first = 0;
		int mid = k;
		int last = 2 * k;
		size_t sz = s.size();

		while (first<sz)
		{
			if (first + k<sz)
			{
				int i = first;
				int j = first + k - 1;
				while (i<j)
				{
					swap(s[i], s[j]);
					++i;
					--j;
				}
			}
			else
			{
				int i = first;
				int j = sz - 1;
				while (i<j)
				{
					swap(s[i], s[j]);
					++i;
					--j;
				}
			}
			for (first; first<last; first++)
			{
				if (first == sz)
					break;
				++first;
				//mid = first+k;
			}
			last += 2 * k;
		}
		return s;

	}
};
int main()
{
	Solution x;
	string s=x.reverseStr("abcdefgh",3);
	for (string::iterator it = s.begin(); it < s.end(); it++)
	{
		cout << *it << endl;
	}
	system("pause");
}