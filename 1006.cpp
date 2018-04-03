//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(){
//    int n,k=0,m;
//    stack<char> s;
//    cin>>n;
//    while (n>0) {
//        m = n%10;
//        for (int i=0;i<m ; i++) {
//            switch (k) {
//                case 0:
//                    s.push(49+m-i-1);
//                    break;
//                case 1:
//                    s.push('S');
//                    break;
//                case 2:
//                    s.push('B');
//                    break;
//                default:
//                    break;
//            }
//        }
//        k++;
//        n/=10;
//    }
//    while (!s.empty()) {
//        cout<<s.top();
//        s.pop();
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//int main(){
//    int n,i=0;
//    cin>>n;
//    int w[3] = {0};
//    while (n>0) {
//        w[i++] = n%10;
//        n/=10;
//    }
//    for (i = 0;i < w[2]; i++)
//        cout<<"B";
//    for (i = 0;i < w[1]; i++)
//        cout<<"S";
//    for (i = 0;i < w[0]; i++)
//        cout<<i+1;
//}

