////形如(*p)[10];、
//
//
//#include <stdio.h>
//int main() {
//	int arr[10] = { 0 };
//	printf("arr=%p\n", arr);
//	printf("&arr=%p\n", &arr);
//
//	printf("arr+1=%p\n", arr + 1);
//	printf("&arr+1=%p\n", &arr + 1);
//	return 0;
//}//arr表示数组首元素的地址，&arr表示数组的地址
////&arr的类型是：int(*)[10]，是一个数组指针（指向数组的指针）；


//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col) {
//	int i = 0; int j = 0;
//	for (i = 0; i < col; i++) {
//		for (j = 0; j < col; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col) {//传递一个数组指针
//	int i = 0; int j = 0;
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < col; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//print_arr1(arr, 3, 5);//数组名表示首元素的地址，但arr是二维数组，所以arr表示的是二维数组的第一行的地址
//	print_arr2(arr, 3, 5);  //所以arr是int（*arr)[5]类型
//
//	return 0;
//}


////数组传参，指针传参
////一维数组传参：
//#include <stdio.h>
//void test(int* arr) {
//
//}//或者
//void test2(int arr[]) {
//
//}
//int main() {
//	int arr[5] = { 1,2,4,3,5 };//arr表示首元素的地址，是一维指针
//	test(arr);
//}
////二维数组传参
//void test(int arr[][5]) {
//
//}//二维数组传参是只能省略第一个[]中的数字；
//void test3(int(*arr)[5]) {
//
//}

//指针传参
////一级指针传参
//#include <stdio.h>
//void print(int* p, int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%d\n", *(p + i));
//	}
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	print(p, size);
//	return 0;
//}
////二级指针传参
//#include <stdio.h>
//void test(int** p) {
//	printf("%d\n", **p);
//}
//int main() {
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}