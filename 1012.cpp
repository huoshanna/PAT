//#include <iostream>
//using namespace std;
//
//int main(){
//    int n;
//    cin>>n;
//    int num[n];
//    float a[5]={0};
//    int c2=0,c4=0;
//    for (int i=0; i<n; i++)
//        cin>>num[i];
//    for (int i = 0; i< n; i++) {
//        float remain = num[i]%5;
//        if(remain==0 && num[i]%2==0)    a[0]+=num[i];
//        else if(remain==1 && c2%2==0){
//            a[1]+=num[i];c2++;
//        }
//        else if(remain==1 && c2%2==1){
//            a[1]-=num[i];c2++;
//        }
//        else if(remain==2)  a[2]++;
//        else if(remain==3){
//            a[3]+=num[i];c4++;
//        }
//        if(remain==4)   a[4] = num[i]>a[4]?num[i]:a[4];
//    }
//    for (int i=0; i<5; i++) {
//        if(i!=0 && i!=5)    printf(" ");
//        if (a[i]==0)        printf("N");
//        else if (i!=3)      printf("%.0f",a[i]);
//        else if (i==3)      printf("%.1f",a[i]/=c4);
//    }
//}

