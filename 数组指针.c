////����(*p)[10];��
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
//}//arr��ʾ������Ԫ�صĵ�ַ��&arr��ʾ����ĵ�ַ
////&arr�������ǣ�int(*)[10]����һ������ָ�루ָ�������ָ�룩��


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
//void print_arr2(int(*arr)[5], int row, int col) {//����һ������ָ��
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
//	//print_arr1(arr, 3, 5);//��������ʾ��Ԫ�صĵ�ַ����arr�Ƕ�ά���飬����arr��ʾ���Ƕ�ά����ĵ�һ�еĵ�ַ
//	print_arr2(arr, 3, 5);  //����arr��int��*arr)[5]����
//
//	return 0;
//}


////���鴫�Σ�ָ�봫��
////һά���鴫�Σ�
//#include <stdio.h>
//void test(int* arr) {
//
//}//����
//void test2(int arr[]) {
//
//}
//int main() {
//	int arr[5] = { 1,2,4,3,5 };//arr��ʾ��Ԫ�صĵ�ַ����һάָ��
//	test(arr);
//}
////��ά���鴫��
//void test(int arr[][5]) {
//
//}//��ά���鴫����ֻ��ʡ�Ե�һ��[]�е����֣�
//void test3(int(*arr)[5]) {
//
//}

//ָ�봫��
////һ��ָ�봫��
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
////����ָ�봫��
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