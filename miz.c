#include<stdio.h>

int fact(int v);

int main() {
    printf("factorial is :%d" , fact ());
    return 0;
}

int fact (int v) {
    if (v==0) {
        return 1;
    }
    int factNm1 = fact (v-1);
    int factN = factNm1 *v ;
    return factN;
}
