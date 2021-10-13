//哈希算法
#include<iostream>
using namespace std;
const int MAXN = 1000001;
int a[MAXN];
int mian(){
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        memset(a,0,sizeof(a));
        for(int i = 0;i < n;i++){
            int t;
            scanf("%d",&t);
            a[500000+t]=1;
        }
        for(int i = MAXN-1;m > 0;i--)
           if(a[i]){
               if(m>1) printf("%d",i-500000);
               else    printf("%d\n",i-500000);
               m --;
           }
        }
    return 0
}