#include <stdio.h>

int main()
{
    //person 구조체 생성
    // 멤버변수 이름, 나이를 저장할 변수 선언
    struct Person {
        char name[30];
        int age;
    };

    //scanf -> 구조체 멤버 변수에 저장
    struct Person p;
    // 구조체 제어변수, 멤버변수
    scanf("%29s", p.name);
    scanf("%d", &p.age);

    printf("Your name is %s and you are %d years old.", p.name, p.age);
}