/*
题目描述：
求A^B的最后三位数表示的整数。说明：A^B的含义是“A的B次方”
输入：
输入数据包含多个测试实例，每个实例占一行，由两个正整数A和B组成（1<=A,B<=10000），如果A=0, B=0，则表示输入数据的结束，不做处理。
输出：
对于每个测试实例，请输出A^B的最后三位表示的整数，每个输出占一行。

样例输入：
2 3
12 6
6789 10000
0 0
1
2
3
4
5
样例输出：
8
984
1
*/

#include <stdio.h>
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(a==0 && b==0) break;
        int ans=1;
        while(b!=0){
            if(b%2==1){
                ans*=a;
                ans%=1000;
            }
            b/=2;
            a*=a;
            a%=1000;
        }
        printf("%d\n",ans);
    }
    return 0;
}
