#include <stdio.h>
#include <stdlib.h>

int zgłos(int x) {
    return x*x + 42;
}

void się(int n) {
    for(int i=0;i<n;i++){
        printf("%d ", i*i);
    }
}

char* do_(char* str) {
    char* res = malloc(100);
    sprintf(res, "Hello %s", str);
    return res;
}

int main() {
    int a = zgłos(5);
    printf("%d\n", a);
    się(5);
    char* msg = do_("Pawel");
    printf("\n%s\n", msg);
    free(msg);
    return 0;
}
