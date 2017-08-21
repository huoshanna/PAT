
//1001-害死人不偿命的(3n+1)猜想
#include <stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans=0;
        while(n!=1){
            if(!(n&1))  n/=2;
            else n=(3*n+1)/2;
            ans++;
        }
        printf("%d",ans);
    }
    return 0;
}

//1002-写出这个数
#include <stdio.h>
int main(){
    char s[10000];
    while(scanf("%s",s)!=EOF){
        int sum=0,i=0,j=0,a[1000];
        while(s[i]!='\0'){
            sum+=sum-'0';
            i++;
        }
        while(sum!=0){
            a[j++]=sum%10;
            sum=sum/10;
        }
            for(j=j-1;j>=0;j--){
                switch (a[j]) {
                    case 0:printf("ling");break;
                    case 1:printf("yi");break;
                    case 2:printf("er");break;
                    case 3:printf("san");break;
                    case 4:printf("si");break;
                    case 5:printf("wu");break;
                    case 6:printf("liu");break;
                    case 7:printf("qi");break;
                    case 8:printf("ba");break;
                    case 9:printf("jiu");break;
                }
                if(j==0) {break;}
                else {printf(" ");}
            }
            printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    char s[10000];
    while(scanf("%s",s)!=EOF){
        int sum=0,i=0,j=0,a[1000];
        while(s[i]!='\0'){
            sum+=s[i]-'0';
            i++;
        }
        //printf("%d\n",sum);
        while(sum!=0){
            a[j++]=sum%10;
            sum=sum/10;
        }
        for(j=j-1;j>=0;j--){
            switch(a[j]){
                case 0:printf("ling"); break;
                case 1:printf("yi"); break;
                case 2:printf("er"); break;
                case 3:printf("san"); break;
                case 4:printf("si"); break;
                case 5:printf("wu"); break;
                case 6:printf("liu"); break;
                case 7:printf("qi"); break;
                case 8:printf("ba"); break;
                case 9:printf("jiu"); break;
            }
            if(j==0){break;}
            else{printf(" ");}
        }
        printf("\n");
    }
    return 0;
}

//1011-A+B<C?
#include<stdio.h>
int main(){
    long long int a,b,c;
    int n;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld %lld %lld",&a,&b,&c);
        printf("Case #%d: ",i+1);
        printf("%s\n",(a-c+b)>0?"true":"false");
    }
    return 0;
}


//1003-我要通过
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        char s[100];
        scanf("%s",s);
        int flag=0,a,b,c,cnt1=0,cnt2=0,i=0;
        for(i=0;s[i]!='\0';i++){
            if(s[i]!='P'&&s[i]!='A'&&s[i]!='T') {break;}
            if(s[i]=='P'){if(cnt1==0){a=i;} cnt1++;}
            if(s[i]=='T'){if(cnt2==0){b=i;} cnt2++;}
        }
        if(a<b&&cnt1==1&&cnt2==1){
            c=i-b-1;
            b=b-a-1;
            if(a==c&&b==1) flag=1;
            if(a==0&&c==0&&b!=0) flag=1;
            if(a!=0&&b!=0&&a*b==c) flag=1;
        }
        if(flag==1) printf("YES\n");
        if(flag==0) printf("NO\n");
    }
    return 0;
}


//1004-成绩排名
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    int max = -1, min = 101, score;
    string maxname, minname, maxnum, minnum, name, num;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> num;
        cin >> score;
        if (max < score) {
            max = score;
            maxname = name;
            maxnum = num;
            
        }
        if (min > score) {
            min = score;
            minname = name;
            minnum = num;
        }
    }
    cout << maxname << " " << maxnum << endl << minname << " " << minnum;
    return 0;
}


//继续(3n+1)猜想
#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a, int b) {return a > b;}

int main() {
    int n;
    cin >> n;
    int *a = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t;
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++) {
        t = a[i];
        while (t != 1 && t != 999) {
            if (t % 2 == 0) {
                t = t / 2;
            } else {
                t = (t * 3 + 1) / 2;
            }
            for (int j = 0; j < n; j++) {
                if(t == a[j] && j != i)
                    a[j] = 999;//相同的数字变为999
            }
        }
    }
    sort(a, a + n, cmp);//999排序后到了最前面
    int temp = 0;
    for (int k = n - 1; k >= 0; k--) {
        if (a[k] != 999)//第一个不等于999的下标为temp
            temp = k;
    }
    for (int m = temp; m < n - 1; m++) {
        cout << a[m] << " ";
    }
    cout << a[n - 1];
    delete [] a;
    return 0;
}
//1013数字分类
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int t,k;
    cin>>t;
    int sum_0=0,cnt_0=0,cnt_1=0,sum_1=0,index=-1,sum_2=0;
    int cnt_3=0,sum_3=0,cnt_4=0,sum_4=0;
    while(t--){
        cin>>k;
        if(k%5==0){
            if(k%2==0) {sum_0+=k;cnt_0++;}
        }else if(k%5==1){
            cnt_1++;
            index=-index;
            sum_1+=index*k;
        }else if(k%5==2){
            sum_2++;
        }else if(k%5==3){
            cnt_3++;
            sum_3+=k;
        }else if(k%5==4){
            cnt_4++;
            sum_4=max(sum_4,k);
        }
    }
    if(cnt_0==0) cout<<'N';
    else cout<<sum_0;
    if(cnt_1==0) cout<<" N";
    else cout<<' '<<sum_1;
    if(sum_2==0) cout<<" N";
    else cout<<' '<<sum_2;
    if(cnt_3==0) cout<<" N";
    else printf(" %.1f",sum_3*1.0/cnt_3);
    if(cnt_4==0) cout<<" N";
    else cout<<' '<<sum_4;
    return 0;
}
