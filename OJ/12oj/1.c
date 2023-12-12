#include <stdio.h>
typedef struct student{
    char num[10];
    char name[100];
    char phone[12];
}student;
void phone_number(char m[], int n){
    for (int i=0; i<=2; i++){
        printf("%c",m[i]);
    }
    printf("-");
    for (int i=3; i<=6; i++){
        printf("%c",m[i]);
    }
    printf("-");
    for (int i=7; i<=10; i++){
        printf("%c",m[i]);
    }
}
int main(){

student s1;
scanf("%s %s %s",s1.num, s1.name, s1.phone);

printf("%s\n",s1.num);
printf("%s\n",s1.name);
phone_number(s1.phone,0);


    return 0;
}