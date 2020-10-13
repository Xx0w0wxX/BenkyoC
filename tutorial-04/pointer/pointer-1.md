
### q1

```c
void fun(int *p)
{
  int q = 10;
  p = &q;
}

int main()
{
  int r = 20;
  int *p = &r;
  fun(p);
  printf("%d", *p);
  return 0;
}
```

answer is 20


### q2


```c
#include <stdio.h>

#define R 10
#define C 20

int main()
{
   int (*p)[R][C];
   printf("%d",  sizeof(*p));
   getchar();
   return 0;
}
```

answer is 4 x 10 x 20


an array of length 5 and the elements of that array are pointers, and the pointer points to an int


### q3

```c
#include <stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int *ptr = (int*)(&a+1);
    printf("%d %d", *(a+1), *(ptr-1));
    return 0;
}
```


- (int*)(&a+1)

&a is a pointer to an array

cast to int, &a + 1 = a + sizeof(a)  - > out of range
but it is not a problem cus we do not dereference yet

- *(ptr-1)


ptr points to the next place after the end of the array, a
minus 1 is equivalent to the end of the array, a
therefore, it will be 5

- *(a+1)

a stands for the pointer which points to the beginning of the array, a
plus 1 is equal to the pointer of the second element of array, a
thus, it will be 2


## References

- https://www.geeksforgeeks.org/c-language-2-gq/advanced-pointer-c-gq/
- https://www.sigbus.info/compilerbook#type









