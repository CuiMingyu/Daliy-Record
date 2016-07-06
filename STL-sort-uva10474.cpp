//Daliy-Record
//ACM题解

#include <algorithm>
#include <iostream>
using namespace std;

const int maxn = 10000;

int main() {
	int Marble[maxn];
	int times, key, n;
	cin >> n >> times;
	for (int i = 0; i < n; i++)
		cin >> Marble[i];
	sort(Marble,Marble+n);
	for (int i = 0; i < n; i++) {
		cin >> key;
		int p = lower_bound(Marble, Marble + n, key) - Marble;
		if (Marble[p] == key)
			cout << key << "found at" <<p+1<< endl;
		else
			cout << key << "not found" << endl;
	}
	return 0;
}

/*
1.The function of sort is used like this at array : sort(a,a+n) 
  a is the name of array and n is the length of array.
  And sort is used like this at vector : sort(v.begin(),v.end())
  v is the name of array .
2. lower_bound is to find the fisrt position where the number is bigger than or equal to x;
    x is numerical value which we want to find in the array.
    upper_bound is to find the last position where the number is bigger than or equal to x;
3.int p = lower_bound(Marble, Marble + n, key) - Marble;
  using pointer to minor the name of array is implicit
*/
