#include <stdio.h>
int days(int m);
void print_remain(int m, int d){
    static int sum = 365;
    
    for (int i=1; i<m; i++ ){
        sum -= days(i);
    }

    printf("%d",sum-d+1);
    printf("일 남음");
}
int days(int m){
 if( m==2 )//2월
 return 28;
 else if ( m<=7 ){//7이하
    if (m%2==0){
        return 30;
    }else{
        return 31;
    }
}else{//8이상
    if (m%2==0){
        return 31;
    }else{
        return 30;
    }
 }
}

int main(){
int m,day;
scanf("%d월 %d일", &m, &day);
print_remain(m,day);

    return 0;
}
