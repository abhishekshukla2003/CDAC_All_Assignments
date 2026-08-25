#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("-------------------------------------------------------------------------------------------\n");
    printf("%-15s %-18s %-15s %-25s %-25s\n", "Data Type", "Format Specifier", "Size(Bytes)", "Min Range", "Max Range");
    printf("-------------------------------------------------------------------------------------------\n");

    printf("%-15s %-18s %-15zu %-25d %-25d\n", "signed char", "%c", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("%-15s %-18s %-15zu %-25d %-25u\n", "unsigned char", "%u", sizeof(unsigned char), 0, UCHAR_MAX);

    printf("%-15s %-18s %-15zu %-25d %-25d\n", "signed short", "%hd", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("%-15s %-18s %-15zu %-25d %-25u\n", "unsigned short", "%hu", sizeof(unsigned short), 0, USHRT_MAX);

    printf("%-15s %-18s %-15zu %-25d %-25d\n", "signed int", "%d", sizeof(int), INT_MIN, INT_MAX);
    printf("%-15s %-18s %-15zu %-25u %-25u\n", "unsigned int", "%u", sizeof(unsigned int), 0U, UINT_MAX);

    printf("%-15s %-18s %-15zu %-25ld %-25ld\n", "signed long", "%ld", sizeof(long), LONG_MIN, LONG_MAX);
    printf("%-15s %-18s %-15zu %-25u %-25lu\n", "unsigned long", "%lu", sizeof(unsigned long), 0U, ULONG_MAX);

    printf("%-15s %-18s %-15zu %-25lld %-25lld\n", "signed long long", "%lld", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("%-15s %-18s %-15zu %-25u %-25llu\n", "unsigned long long", "%llu", sizeof(unsigned long long), 0U, ULLONG_MAX);

    printf("%-15s %-18s %-15zu %-25e %-25e\n", "float", "%f", sizeof(float), FLT_MIN, FLT_MAX);
    printf("%-15s %-18s %-15zu %-25e %-25e\n", "double", "%lf", sizeof(double), DBL_MIN, DBL_MAX);
    printf("%-15s %-18s %-15zu %-25Le %-25Le\n", "long double", "%Lf", sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;
}

