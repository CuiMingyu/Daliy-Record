//ACM题解
#include <iostream>
#include <string>
#include <set>
#include <sstream>
#include <cctype>
using namespace std;

set<string>dict;

int main()
{
  string s,buf;
  while(cin>>s)
  {
    for(int i=0;i<s.length();i++)
      if(isalpha(s[i])) 
        s[i]=tolower(s[i]);
      else
        s[i]=' ';
    stringstream ss(s);
    while(ss>>buf)
    dict.insert(buf);
  }
  for(set<string>::iterator it=dict.begin();it!=dict.end();++it)
    cout<<*it<<endl;
  return 0;
}

/*
1.这个答案来自刘汝佳那本书。
2.set可以将其元素从小到大排好序
  然后使用迭代器遍历输出
3.也可以不使用set，直接用qsort快速排序做这道题
*/
