//#include <stdio.h>
//int main() {
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//8!!!
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//8!!!!
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//8
//	printf("%d\n", sizeof(*&a));//16!!
//	printf("%d\n", sizeof(&a + 1));//8！！！
//	printf("%d\n", sizeof(&a[0]));//8!!!
//	printf("%d\n", sizeof(&a[0] + 1));//8!!
//}
//////字符数组
////int main() {
////	char arr[] = { 'a','b','c','d','e','f' };
////	printf("%d\n", sizeof(arr));
////	printf("%d\n", sizeof(arr + 0));
////	printf("%d\n", sizeof(*arr));
////	printf("%d\n", sizeof(arr[1]));
////
////	printf("%d\n", sizeof(&arr));
////	printf("%d\n", sizeof(&arr + 1));
////	printf("%d\n", sizeof(&arr[0] + 1));
////	printf("%d\n", strlen(arr));
////	printf("%d\n", strlen(arr + 0));
////	printf("%d\n", strlen(*arr));
////	printf("%d\n", strlen(arr[1]));
////	printf("%d\n", strlen(&arr));
////	printf("%d\n", strlen(&arr + 1));
////	printf("%d\n", strlen(&arr[0] + 1));
////	char arr[] = "abcdef";
////	printf("%d\n", sizeof(arr));
////	printf("%d\n", sizeof(arr + 0));
////	printf("%d\n", sizeof(*arr));
////	printf("%d\n", sizeof(arr[1]));
////	printf("%d\n", sizeof(&arr));
////	printf("%d\n", sizeof(&arr + 1));
////	printf("%d\n", sizeof(&arr[0] + 1));
////	printf("%d\n", strlen(arr));
////	printf("%d\n", strlen(arr + 0));
////	printf("%d\n", strlen(*arr));
////	printf("%d\n", strlen(arr[1]));
////	printf("%d\n", strlen(&arr));
////	printf("%d\n", strlen(&arr + 1));
////	printf("%d\n", strlen(&arr[0] + 1));
////	char* p = "abcdef";
////	printf("%d\n", sizeof(p));
////	printf("%d\n", sizeof(p + 1));
////	printf("%d\n", sizeof(*p));
////	printf("%d\n", sizeof(p[0]));
////	printf("%d\n", sizeof(&p));
////	printf("%d\n", sizeof(&p + 1));
////	printf("%d\n", sizeof(&p[0] + 1));
////	printf("%d\n", strlen(p));
////	printf("%d\n", strlen(p + 1));
////	printf("%d\n", strlen(*p));
////	printf("%d\n", strlen(p[0]));
////	printf("%d\n", strlen(&p));
////	printf("%d\n", strlen(&p + 1));
////	printf("%d\n", strlen(&p[0] + 1));
////}
////
////int main() {
////	//二维数组
////	int a[3][4] = { 0 };
////	printf("%d\n", sizeof(a));
////	printf("%d\n", sizeof(a[0][0]));
////	printf("%d\n", sizeof(a[0]));
////	printf("%d\n", sizeof(a[0] + 1));
////	printf("%d\n", sizeof(*(a[0] + 1)));
////}