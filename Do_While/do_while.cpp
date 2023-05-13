#include <stdio.h>

int main(){

    float Diem;

    do
    {
        printf("\nhap vao diem thi : ");
        scanf("%d", &Diem);
    } while (Diem < 0 || Diem > 10) ; // lap lai khi diem < 0 va diem > 10
    

    getchar();
    return 0;
}