#include<stdio.h>
#include<time.h>
int main(void){
    time_t t;
    time(&t);
    printf("Today's date and time: %s", ctime(&t));
    return printf("\n終了\n") ,0;
}