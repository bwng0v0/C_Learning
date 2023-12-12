#include <stdio.h>
typedef struct human{
int ord;
int height;
int weight;
} 사람;
int main(){

//구조체는 대입이 된다고
//진짜 되네

// p->member
// (*p).member
// 같다는데

사람 h1 = {20,170,60};
사람 h2 = {0,0,0};
사람 tmp;
printf("%d %d %d\n",h1.ord, h1.height, h1.weight);
printf("%d %d %d\n",h2.ord, h2.height, h2.weight);

tmp = h1;
h1 = h2;
h2 = tmp;

printf("%d %d %d\n",h1.ord, h1.height, h1.weight);
printf("%d %d %d\n",h2.ord, h2.height, h2.weight);
//오
    return 0;
}