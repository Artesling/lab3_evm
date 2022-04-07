#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>

using namespace std;

void task4_1(){
    char info[] = "Group: PIN-21 \nTeam: Ivanov Artem, Kholodov Artem";
    puts(info);
}

void task4_2(){
    short Ms[5];
    int Ml[5];
    long long Mq[5];
    float Mfs[5];
    double Mfl[5];
    for (int i = 0; i < 5; i++){
        Ms[i] = static_cast<unsigned short>(0xC0DE);
        Ml[i] = static_cast<unsigned int>(0xDEADBEEF);
        Mq[i] = static_cast<unsigned long long>(0xBECACA01FFEDC0CA);
        Mfs[i] = M_PI;
        Mfl[i] = M_PI;
    }

    printf("16 bit: %hd, %hd, %#hX, %#hX, %#hX\n",Ms[0],Ms[1],Ms[2],Ms[3],Ms[4]);
    printf("32 bit: %d, %d, %#X, %#X, %#X\n",Ml[0],Ml[1],Ml[2],Ml[3],Ml[4]);
    printf("64 bit: %lld, %lld, %#llX, %#llX, %#llX\n",Mq[0],Mq[1],Mq[2],Mq[3],Mq[4]);
    printf("32 bit float: %.16f, %.16f, %.16f, %.16f, %.16f\n",Mfs[0],Mfs[1],Mfs[2],Mfs[3],Mfs[4]);
    printf("64 bit double: %.16f, %.16f, %.16f, %.16f, %.16f\n",Mfl[0],Mfl[1],Mfl[2],Mfl[3],Mfl[4]);
}

void task4_3(){
    short Ms[5];
    int Ml[5];
    long long Mq[5];
    float Mfs[5];
    double Mfl[5];
    for (int i = 0; i < 5; i++){
        Ms[i] = static_cast<unsigned short>(0xC0DE);
        Ml[i] = static_cast<unsigned int>(0xDEADBEEF);
        Mq[i] = static_cast<unsigned long long>(0xBECACA01FFEDC0CA);
        Mfs[i] = M_PI;
        Mfl[i] = M_PI;
    }

    //Ms
    printf("New Ms[2]: ");
    if (scanf("%hd", &Ms[2]) != 1) {
        puts("Error");
        while(getchar()!='\n');
    }
    else {
        printf("New 16 bit: \n");
        for (int i = 0; i < 5; i++){
           printf("%d\t", Ms[i]);
        }
        printf("\n\n");
    }

    //Ml
    printf("New Ml[2]: ");
    if (scanf("%d", &Ml[2]) != 1){
       puts("Error");
       while(getchar()!='\n');
    }
    else {
        printf("New 32 bit: \n");
        for (int i = 0; i < 5; i++){
           printf("%d\t", Ml[i]);
        }
        printf("\n\n");
    }

    //Mq
    printf("New Mq[2]: ");
    if (scanf("%lld", &Mq[2]) != 1){
       puts("Error");
       while(getchar()!='\n');
    }
    else {
        printf("\nNew 64 bit: \n");
        for (int i = 0; i < 5; i++){
           printf("%lld\t", Mq[i]);
        }
        printf("\n\n");
    }


    //Mfs
    printf("New Mfs[2]: ");
    if (scanf("%f", &Mfs[2]) != 1){
        puts("Error");
        while(getchar()!='\n');
    }
    else {
        printf("\nNew 32 bit float: \n");
        for (int i = 0; i < 5; i++){
           printf("%.16f\t", Mfs[i]);
        }
        printf("\n\n");
    }

    //Mfl
    printf("New Mfl[2]: ");
    if (scanf("%f", &Mfl[2]) != 1){
        puts("Error");
        while(getchar()!='\n');
    }
   else {
        printf("\nNew 64 bit double: \n");
        for (int i = 0; i < 5; i++)
        {
           printf("%.16f\t", Mfl[i]);
        }
        printf("\n");
    }
}

void task4_4(){
    //Mfl
    double Mfl[5] = {M_PI, M_PI, M_PI, M_PI, M_PI};
    printf("New Mfl:\n");
    if (scanf("%lf %lf %lf %lf %lf", &Mfl[0], &Mfl[1], &Mfl[2], &Mfl[3], &Mfl[4]) != 5) {
        puts("Error.");
        while(getchar()!='\n');
    }
    puts("NewMFl: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.16f\t", Mfl[i]);
    }
    puts("\n");
}

void task4_5(){
    char s1[100],s2[100],s3[5];

    scanf("%s\n",s1);
    scanf("%[^\n]s\n",s2);
    scanf("%4s\0\n",s3);

    printf("***%s***\n",s1);
    printf("***%s***\n",s2);
    printf("***%s***\n",s3);
}

void task4_6(){
    short Ms[5];
    int Ml[5];
    long long Mq[5];
    float Mfs[5];
    double Mfl[5];
    for (int i = 0; i < 5; i++){
        Ms[i] = static_cast<unsigned short>(0xC0DE);
        Ml[i] = static_cast<unsigned int>(0xDEADBEEF);
        Mq[i] = static_cast<unsigned long long>(0xBECACA01FFEDC0CA);
        Mfs[i] = M_PI;
        Mfl[i] = M_PI;
    }

    printf("\n");
    for (int i = 0; i < 5; i++){
       printf("%23d", Ms[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
       printf("%23d", Ml[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
       printf("%23lld", Mq[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
       printf("%23.16f", Mfs[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++){
       printf("%23.16f", Mfl[i]);
    }
    printf("\n");
}

int main(){
    cout << endl << "Task 1" << endl;
    task4_1();

    cout << endl << "Task 2" << endl;
    task4_2();

    cout << endl << "Task 3" << endl;
    task4_3();

    cout << endl << "Task 4" << endl;
    task4_4();

    cout << endl << "Task 5" << endl;
    task4_5();

    cout << endl << "Task 6" << endl;
    task4_6();

    return 0;
}
