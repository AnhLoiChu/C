int main(void)
{
int a[3] = {17,289,4913};
int *p, *q;
p = a;
/* p points to the beginning of a, that is &a[0] */
q = p+2; /* q points to a[2]. Equivalent to q = &a[2]*/
printf("a is %p\n", a);
printf("p is %p, q is %p\n", p, q);
printf("p points to %d and q points to %d\n", *p, *q);

printf("The pointer distance between p and q is %ld\n", q-p);
printf("The integer distance between p and q is %ld\n",(long int)q- (long int)p);//tính khoảng cách theo byte sau khi ép kiểu con trỏ về số nguyên
return 0;
}
