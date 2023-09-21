#include <stdio.h>

int main() 
{
    int N, M;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &M);
        if (M >= 80) 
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
