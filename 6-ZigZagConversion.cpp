/*
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility) 
P   A   H   N
A P L S I I G
Y   I   R

And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows: 
string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR". 
*/
#include<iostream>
#include<string>
using namespace std;
class Solution
{	
	public:
	string convert(string s,int numRows)
	{
		string result = s; 
		int start= numRows * 2 - 2; 
		int distance = start;
		int index = 0; int counts = 0; int temp; int origin_distance = 0;
		if (numRows == 1)
			return s;
		while (index<s.size()&&distance>=0)
		{
			temp = index;
			origin_distance = distance;
			while (temp < s.size()&&counts<s.size())
			{
				if (distance == 0)
					distance = start - distance;
				result[counts] = s[temp];
				temp += distance;
				if (distance != start)
				{
					distance = start - distance;
				}
				++counts;
			}
			++index;
			distance = origin_distance- 2;
		}
		return result;   
	}
};
int main()
{
	Solution s;
	cout<<s.convert("abcde",3);
	return 0;
}
