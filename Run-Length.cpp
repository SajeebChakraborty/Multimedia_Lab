#include <bits/stdc++.h>
using namespace std;

void printRLE(string str)
{
	int n = str.length();
	for (int i = 0; i < n; i++) {

		int count = 1;
		while (i < n - 1 && str[i] == str[i + 1]) {
			count++;
			i++;
		}
		cout << str[i] << count;
	}
}
//Driver code
int main()
{
	string str = "Sajeeb Chakraborty";
	printRLE(str);
	return 0;
}
