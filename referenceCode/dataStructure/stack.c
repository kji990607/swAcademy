//Stack은 한 쪽 끝에서만 자료를 넣거나 뺄 수 있는 선형 구조(LIFO - Last In First Out)로 데이터를 저장하는 형식을 말한다.
//입력은 테스트케이스 수 - 각 테스트케이스의 데이터 크기 - 테이스케이스 순서 

#include <stdio.h>
 
#define MAX_N 100
 
int top;
int stack[MAX_N];
 
void stackInit(void)
{
    top = 0;
}
 
int stackIsEmpty(void)
{
    return (top == 0);
}
 
int stackIsFull(void)
{
    return (top == MAX_N);
}
 
int stackPush(int value)
{
    if (stackIsFull())
    {
        printf("stack overflow!");
        return 0;
    }
    stack[top] = value;
    top++;
 
    return 1;
}
 
int stackPop(int *value)
{
    if (stackIsEmpty())
    {
        printf("stack is empty!");
        return 0;
    }
    top--;
    *value = stack[top];
 
    return 1;
}
 
int main(int argc, char* argv[])
{
    int T, N;
 
    scanf("%d", &T);
 
    for (int test_case = 1; test_case <= T; test_case++)
    {
        scanf("%d", &N);
        stackInit();
        for (int i = 0; i < N; i++) 
        {
            int value;
            scanf("%d", &value);
            stackPush(value);
        }
 
        printf("#%d ", test_case);
 
        while (!stackIsEmpty())
        {
            int value;
            if (stackPop(&value) == 1)
            {
                printf("%d ", value);
            }
        }
        printf("\n");
    }
    return 0;
}
