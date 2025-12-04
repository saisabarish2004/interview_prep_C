#include<stdio.h>

int main()
 {
 char *p = "hello";

while(*p != '\0') {
    printf("%p\n", &p);
    p++;     // move to next char
}
}