//#include <iostream>
//using namespace std;
//
//struct student {
//    string name;
//    string id;
//    int grade;
//};
//
//int main(){
//    int n;  //学生个数
//    int maxIdx;   //最高成绩结构体下标
//    int minIdx; //最低成绩结构体下标
//    int max=-1,min=101;
//    cin>>n;
//    struct student stu[n];//新建stu结构体数组
//    for (int i = 0; i < n;i++) {
//        cin>>stu[i].name>>stu[i].id>>stu[i].grade;
//        if (stu[i].grade < min) {
//            min = stu[i].grade;
//            minIdx = i;
//        }
//        if(stu[i].grade > max){
//            max = stu[i].grade;
//            maxIdx = i;
//        }
//    }
//    cout<<stu[maxIdx].name<<" "<<stu[maxIdx].id<<endl;
//    cout<<stu[minIdx].name<<" "<<stu[minIdx].id<<endl;
//    return 0;
//}

