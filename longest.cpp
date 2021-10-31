#include<iostream>
#include<cstring>
using namespace std;
int SubStr(char* X, char* Y, int m, int n)
{
    int LCSuff[m + 1][n + 1];
    int len = 0;
    int row, col;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                if (len < LCSuff[i][j]) {
                    len = LCSuff[i][j];
                    row = i;
                    col = j;
                }
            }
            else
            LCSuff[i][j] = 0;
        }
    }
    char* resultStr = (char*)malloc((len + 1) * sizeof(char));
    while (LCSuff[row][col] != 0) {
        resultStr[--len] = X[row - 1];
        row--;
        col--;
    }
   return strlen(resultStr);
} 
int main()
{
    char s1[10000],s2[1000];
    cin>>s1>>s2;
    int x=SubStr(s1,s2,strlen(s1),strlen(s2));
    cout<<x;
    return 0;
}