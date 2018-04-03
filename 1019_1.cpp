#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a,b;
//降序排序
bool cmp(char a,char b){    return a>b; }
//
//字符数组变数字
int str2num(string num){
    int n=0;
    int len=(int)num.size()-1;
    for (int i=len;i>=0; i--)
        n+=(num[i]-'0')*pow(10,len-i);
    return n;
}

int main(){
    string s;
    cin>>s;
    s.insert(0, 4 - s.length(), '0');
    do {
        string a=s,b=s;
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end());
        s=to_string(str2num(a)-str2num(b));
        s.insert(0, 4 - s.length(), '0');
        cout << a << " - " << b << " = " << s << endl;
    }while (s!="6174" && s!="0000");
    return 0;
}
