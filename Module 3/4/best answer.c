#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int n, nCopy, len = 0, lenCopy;
    scanf("%d", &n);
    nCopy = n;
    for (len = 0; nCopy != 0; nCopy = nCopy / 10, len++)
        ;
    lenCopy = len;
    int arr[len];
    for (len; len > 0; len--)
    {
        arr[len - 1] = n % 10;
        n = n / 10;
    }
    len = lenCopy;
    for (int i = 0; i < len - 1; i += 2)
    {
        swap(&arr[i], &arr[i + 1]);
        printf("%d%d", arr[i], arr[i + 1]);
    }
    if (len & 1)
        printf("%d", arr[len - 1]);
    return 0;
}
