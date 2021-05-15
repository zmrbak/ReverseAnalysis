// REV_059.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
uint64_t f()
{
    return 0x1234567890ABCDEF;
}

uint64_t f_add(uint64_t a, uint64_t b)
{
    return a + b;
}

uint64_t f_sub(uint64_t a, uint64_t b)
{
    return a - b;
}

uint64_t f_multi(uint64_t a, uint64_t b)
{
    return a * b;
}

uint64_t f_div(uint64_t a, uint64_t b)
{
    return a / b;
}

uint64_t f_left(uint64_t a, uint64_t b)
{
    return a << b;
}

uint64_t f_right(uint64_t a, uint64_t b)
{
    return a >> b;
}

int main()
{
    printf("Hello World!\n");

    uint64_t a = f();
    printf("%lld\n",a);
    printf("%I64d\n", a);

    printf("Hello World 1!\n");
    a = f_add(0x11111111FFFFFFFF,0x22222222EEEEEEEE);
    printf("%lld\n", a);
}
