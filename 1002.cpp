//#include <cstdio>
//#include <iostream>
//#include <cstring>
//#include <stack>
//using namespace std;
//const int maxn = 110;
//int main(){
//    int sum = 0,i=0;
//    stack<int> c;
//    char num[maxn];
//    cin>>num;
//    string chineseNum[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//    while (num[i]!='\0') {
//        sum+=num[i]-'0';
//        i++;
//    }
//    while (sum !=0) {
//        c.push(sum%10);
//        sum/=10;
//    }
//    while(!c.empty()){
//        if(c.size()>1)
//            cout<<chineseNum[c.top()]<<" ";
//        else
//             cout<<chineseNum[c.top()];
//        c.pop();
//    }
//    return 0;
//}

