#include <stdio.h>
enum season{
Spring,Summer,Fall,Winter
};
int main(){

enum season S;

S = Summer;
printf("%d",S);
//printf("%s",S);
S += 1;
printf("%d",S);
    return 0;
}