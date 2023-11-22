#include <stdio.h>
void i_day(int *y,int *m, int *d ){

}
void d_day(int *y,int *m, int *d ){

}
int main(){

int y,m,d;
scanf("%d %d %d",&y,&m,&d);

int n;
printf("down : "); scanf("%d",&n);
for ( int i =1; i<=n; i++ ){
d_day(&y,&m,&d);
}
printf("result : %d %d %d\n",y,m,d);


printf("down : "); scanf("%d",&n);
for ( int i =1; i<=n; i++ ){
i_day(&y,&m,&d);
}
printf("result : %d %d %d\n",y,m,d);

    return 0;
}