//#include <iostream>
//#include <algorithm>
//using namespace std;
//bool cmp(int a,int b){
//    return  a<b;
//}
//int main(){
//    int n,s=0,p=0,f=0;
//    int countA[26]={-1},countB[26]={-1};
//    cin>>n;
//    for (int i=0; i<n; i++) {
//        char a,b;cin>>a>>b;
//
//        if ((a=='C' && b=='J') || (a=='J' && b=='B') || (a=='B' && b=='C')){
//            countA[a-'A']++;
//            s++;
//        }
//        else if((a=='C' && b=='B') || (a=='J' && b=='B') || (a=='B' && b=='J')) {
//            countB[b-'A']++;
//            f++;
//        }
//        else p++;
//    }
//    cout<<s<<" "<<p<<" "<<f<<endl;
//    cout<<f<<" "<<p<<" "<<s<<endl;
//    int maxA=countA[0],maxB=countB[0];
//    char a,b;
//    for (int i=1; i<26; i++) {
//        if(countA[i]!=-1){
//            if (cmp(maxA,countA[i])) {
//                maxA=countA[i];
//                a=i+'A';
//            }
//        }
//        if(countB[i]!=-1){
//            if (cmp(maxB,countB[i])) {
//                maxB=countB[i];
//                b=i+'A';
//            }
//        }
//    }
//    cout<<a<<" "<<b<<endl;
//    return 0;
//}

