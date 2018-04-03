//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct Student {
//    int id,de,cai;
//};
//
//bool cmp(struct Student a,struct Student b){
//    if((a.de+a.cai)!=(b.de+b.cai))
//      return (a.de + a.cai) > (b.de + b.cai);
//    else if(a.de!=b.de)
//       return a.de>b.de;
//    else
//       return a.id<b.id;
//}
//
//int main(){
//    int N,L,H;
//    cin>>N>>L>>H;
//    int sum=N;
//    vector<Student> v[4];
//    Student stu;
//    for (int i=0; i<N; i++){
//        cin>>stu.id>>stu.de>>stu.cai;
//        if (stu.de<L || stu.cai<L)    sum--;
//        //#1 德才全尽
//        else if(stu.de>=H&&stu.cai>=H)
//            v[0].push_back(stu);
//        //#2 德胜才
//        else if(stu.de>=H&&stu.cai<H)
//            v[1].push_back(stu);
//        //#3 才德兼亡”但尚有“德胜才
//        else if(stu.de<H&&stu.cai<H&&stu.de>=stu.cai)
//            v[2].push_back(stu);
//        else
//            v[3].push_back(stu);
//    }
//    printf("%d\n", sum);
//    for (int i=0; i<4; i++) {
//        sort(v[i].begin(),v[i].end(),cmp);
//        for (int j = 0; j < v[i].size(); j++)
//             printf("%d %d %d\n", v[i][j].id, v[i][j].de, v[i][j].cai);
//    }
//    return 0;
//}

