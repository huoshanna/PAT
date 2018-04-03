//#include <iostream>
//#include <cstring>
//using namespace std;
//int main(){
//    string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
//    string a,b,c,d;
//    cin>>a>>b>>c>>d;
//    int i;  //第一对相同大写字母
//    for(i=0;i<a.size()&&i<b.size();i++){
//        if (a[i]==b[i] && a[i]>='A'&&a[i]<='G') {
//            cout<<week[a[i]-'A']<<" ";break;  //ABCDEFG对应MON~SUN
//        }
//    }
//    for(i++;i<a.size() && i<b.size();i++){  //第二对相同的数字或大写字母
//        if (a[i] == b[i] && (a[i]>='A'&&a[i]<='N'||isdigit(a[i]))) {    //A~N对应10~23
//            printf("%02d:",isdigit(a[i])?a[i]-'0':a[i]-'A'+10);break;
//        }
//    }
//    for(int i=0;i<c.size() && i<d.size();i++){  //第三对相同字符
//        if (c[i] == d[i])
//            if( isalpha(c[i]) ) printf("%02d",i);
//    }
//    return 0;
//}

