#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n,a[101][101];
    while (~scanf("%d",&n) && n){
        int row[101]={0},column[101]={0}
        for (int i=1;i<=n;i++)
          for (int j=1;j<=n;j++){
                scanf("%d",&a[i][j]);
                row[i]+=a[i][j];
                column[j]+=a[i][j];
            }
        int x1=0,x2=0,y1=0,y2=0;
        for (int i=1;i<=n;i++)
          if (row[i]%2!=0){
                x1++;
                x2=i;
            }
        for (int j=1;j<=n;j++)
          if (column[j]%2!=0){
                y1++;
                y2=j;
            }
        if (x1+y1==0) printf("OK\n");
        else if (x1==1 && y1==1) printf("Change bit (%d,%d)\n",x2,y2);
        else printf("Corrupt\n");
    }
    return 0
}