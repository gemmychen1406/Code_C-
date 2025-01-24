#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d\n", &t);
    while(t--)
    {
        char s[1005];
        fgets(s, 1005, stdin);
        char ans[1005][1005];
        int idx = 0;
        s[strlen(s) - 1] = '\0';
        char *p = strtok(s, " ");
        while(p != NULL)
        {
            strcpy(ans[idx++], p);
            p = strtok(NULL, " ");
        }
        for(int i = idx - 1; i >= 0; --i) cout << ans[i] << ' ';
        cout << endl;
    }
    return 0;
}