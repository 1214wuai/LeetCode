#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
	string multiply(string num1, string num2) {
		//int n1 = num1.size(), n2 = num2.size();
		//vector<int> tmpres(n1 + n2, 0);
		//int k = n1 + n2 - 2;
		//for (int i = 0; i < n1; i++)
		//	for (int j = 0; j < n2; j++)
		//		tmpres[k - i - j] += (num1[i] - '0')*(num2[j] - '0');
		//int carryBit = 0;
		//for (int i = 0; i < n1 + n2; i++)//处理进位
		//{
		//	tmpres[i] += carryBit;
		//	carryBit = tmpres[i] / 10;
		//	tmpres[i] %= 10;
		//}
		//int i = k + 1;
		//while (tmpres[i] == 0)i--;//去掉乘积的前导0
		//if (i < 0)return "0"; //注意乘积为0的特殊情况

		//string res;
		//for (; i >= 0; i--)
		//	res.push_back(tmpres[i] + '0');
		//return res;
		int n1 = num1.size();
		int n2 = num2.size();
		vector<int>tmp(n1 + n2, 0);
		int k = n1 + n2 - 2;
		for (int i = 0; i < n1; ++i)
			for (int j = 0; j < n2; ++j)
				tmp[k - i - j] += (num1[i] - '0')*(num2[j] - '0');
		int carry = 0;
		for (int i = 0; i < n1 + n2; ++i)
		{
			tmp[i] += carry;
			carry = tmp[i] / 10;
			tmp[i] %= 10;
		}
		int i = k + 1;
		while (tmp[i] == 0)
		{
			--i;
		}
		if (i < 0)
			return "0";
		string res;
		for (; i >= 0; --i)
		{
			res.push_back(tmp[i] + '0');
		}
		return res;
	}

};

int main()
{
	Solution x;
	cout<<x.multiply("123", "456")<<endl;
	cout << "123" << endl;
	system("pause");
	
	return 0;
}