// Problem link: https://www.urionlinejudge.com.br/judge/en/problems/view/1019
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf("%d:%d:%d\n", n / 3600, (n / 60) % 60, n % 60);
    return 0;
}
