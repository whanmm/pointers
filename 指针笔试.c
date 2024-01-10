#include <stdio.h>
#include <string.h>
//int main() {
//	//一维数组
//	int a[] = { 1,2,3,4 };//根据初始化的大小确定数组的个数
//	printf("%d\n", sizeof(a));//16//只有数组名，这里的 数组名表示整个数组
//	printf("%d\n", sizeof(a + 0));//8!!!//此时a表示首元素的地址，a=&arr[0]，a+0还是首元素的地址，指针的大小，64平台是8bytes
//	printf("%d\n", sizeof(*a));//4//a=&arr[0],*a=arr[0]，表示首元素的地址，int型，4bytes
//	printf("%d\n", sizeof(a + 1));//8!!!!//a+1==&a[1],第二个元素的地址，指针的大小是8bytes
//	printf("%d\n", sizeof(a[1]));//4//a[1]是第二个元素，int型大小时4bytes
//	printf("%d\n", sizeof(&a));//8//指向a的指针，依然是指针
//	printf("%d\n", sizeof(*&a));//16!!//*&a==a,还是a,访问整个数组&a-->int (*)[4]
//	                            //第二中理解：*，&抵消
//	printf("%d\n", sizeof(&a + 1));//8！！！//指针，取出数组地址，&a+1从数组a的地址向后跳过了一个包含四个整型元素的数组的大小
//	printf("%d\n", sizeof(&a[0]));//8!!!//指针，首元素的地址
//	printf("%d\n", sizeof(&a[0] + 1));//8!!//首元素地址加一；//&a[0]+1是第二个元素的地址
//}
////字符数组
//int main() {
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6//数组名，表示整个数组的大小
//	printf("%d\n", sizeof(arr + 0));//8//表示首元素的地址，是指针
//	printf("%d\n", sizeof(*arr));//1//arr是首地址的大小,*arr表示首元素
//	printf("%d\n", sizeof(arr[1]));//1//表示首元素
//	printf("%d\n", sizeof(&arr));//8//指针
//	printf("%d\n", sizeof(&arr + 1));//8//指针，表示后移6个char型的地址
//	printf("%d\n", sizeof(&arr[0] + 1));//8//指针，表示第二个元素的地址
//
//	printf("%d\n", strlen(arr));//42???????????//随机值！！！！！！！！//数组前后的内存无法获知，一直找直到'\0'
//	printf("---\n");
//	printf("%d\n", strlen(arr + 0));//42???????????//还是随机值，与上面的结果一致
//
//	//后面这几个没有值？？？？？？？？？？？
//	//size_t strlen(const char*)
//	//printf("%d\n", strlen(*arr));//strlen('a')-->strlen(97);//野指针！！！
//	//printf("%d\n", strlen(arr[1]));//strlen('b')-->strlen(98)
//
//	printf("%d\n", strlen(&arr));//随机值（1）
//	printf("%d\n", strlen(&arr + 1));//随机值（1）-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值（1）-1

//int main() {
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7//算上'\0'??
//	printf("%d\n", sizeof(arr + 0));//8//首元素地址
//	printf("%d\n", sizeof(*arr));//1//首元素
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//8
//	printf("%d\n", sizeof(&arr + 1));//8
//	printf("%d\n", sizeof(&arr[0] + 1));//8
//
//	//strlen 是求字符串长度的，关注的是\0，计算的是\0之前的字符个数
//	//strlen是库函数，之针对字符串
//	//sizeof只关注占用空间的大小，不在乎内存中是什么
//	//sizeof是操作符
//	printf("%d\n", strlen(arr));//6//字符串长度不算'\0'！！只计算字符个数，别的一概不管
//	printf("%d\n", strlen(arr + 0));//6!!!!!!//
//
//	//printf("%d\n", strlen(*arr));//erroe
//	//printf("%d\n", strlen(arr[1]));//error
//
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//6-1==5；
//}
// 
// 
//int main(){
//	char* p = "abcdef";//首字符a的地址放到P里面！！！！！
//	printf("%d\n", sizeof(p));//8//p是指针
//	printf("%d\n", sizeof(p + 1));//8
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//8
//	printf("%d\n", sizeof(&p + 1));//8
//	printf("%d\n", sizeof(&p[0] + 1));//8
//	printf("----\n");
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("-----\n");
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值，遇上一个无关系
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}
//
//int main() {
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//相当于一行//16
//	printf("%d\n", sizeof(a[0] + 1));//8//a[0]==&a[0][0],a[0]+1表示a[0][1]的地址
//                                     //对于一维数组a==&a[0],对于二维数组a[0]=&a[0][0];
//	printf("%d\n", sizeof(*(a[0] + 1)));//4//整型4bytes，*(a[0]+1)表示a[0][1];
//	printf("%d\n", sizeof(a + 1));//8//a表示第一行的地址，a+1第二行的地址
//	                            //a虽然是二维数组的地址，但是并没有单独放在sizeof里面，也没有取地址
//	                            //a表示首元素的地址，二维数组的首元素表示他的第一行，a就是第一行的地址   
//
//	printf("%d\n", sizeof(*(a + 1)));//16//表示第二行
//
//	printf("%d\n", sizeof(&a[0] + 1));//8//指针，&a[0]第一行的地址，&a[0]+1 表示第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16//
//	printf("%d\n", sizeof(*a));//16!!!!!//a表示首元素的地址，*a表示第一行
//	printf("%d\n", sizeof(a[3]));//没有第四行啊？如果存在就是16，
//                                 //sizeof只要知道类型就可以计算，不用担心越界，16
//	return 0;
//}