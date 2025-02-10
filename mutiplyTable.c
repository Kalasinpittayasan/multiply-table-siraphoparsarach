 #include<stdio.h>
int main() {
    int a;//ประกาศตัวแปร
    scanf("%d", &a);//รับคำ
    for(int i = 1; i <= 12; i++){
        printf("%d x %d = %d\n", a,i,a*i); //แสดงผล
    }
}



