#include <stdio.h>
#include <string.h>
//int main() {
//	//һά����
//	int a[] = { 1,2,3,4 };//���ݳ�ʼ���Ĵ�Сȷ������ĸ���
//	printf("%d\n", sizeof(a));//16//ֻ��������������� ��������ʾ��������
//	printf("%d\n", sizeof(a + 0));//8!!!//��ʱa��ʾ��Ԫ�صĵ�ַ��a=&arr[0]��a+0������Ԫ�صĵ�ַ��ָ��Ĵ�С��64ƽ̨��8bytes
//	printf("%d\n", sizeof(*a));//4//a=&arr[0],*a=arr[0]����ʾ��Ԫ�صĵ�ַ��int�ͣ�4bytes
//	printf("%d\n", sizeof(a + 1));//8!!!!//a+1==&a[1],�ڶ���Ԫ�صĵ�ַ��ָ��Ĵ�С��8bytes
//	printf("%d\n", sizeof(a[1]));//4//a[1]�ǵڶ���Ԫ�أ�int�ʹ�Сʱ4bytes
//	printf("%d\n", sizeof(&a));//8//ָ��a��ָ�룬��Ȼ��ָ��
//	printf("%d\n", sizeof(*&a));//16!!//*&a==a,����a,������������&a-->int (*)[4]
//	                            //�ڶ�����⣺*��&����
//	printf("%d\n", sizeof(&a + 1));//8������//ָ�룬ȡ�������ַ��&a+1������a�ĵ�ַ���������һ�������ĸ�����Ԫ�ص�����Ĵ�С
//	printf("%d\n", sizeof(&a[0]));//8!!!//ָ�룬��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//8!!//��Ԫ�ص�ַ��һ��//&a[0]+1�ǵڶ���Ԫ�صĵ�ַ
//}
////�ַ�����
//int main() {
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6//����������ʾ��������Ĵ�С
//	printf("%d\n", sizeof(arr + 0));//8//��ʾ��Ԫ�صĵ�ַ����ָ��
//	printf("%d\n", sizeof(*arr));//1//arr���׵�ַ�Ĵ�С,*arr��ʾ��Ԫ��
//	printf("%d\n", sizeof(arr[1]));//1//��ʾ��Ԫ��
//	printf("%d\n", sizeof(&arr));//8//ָ��
//	printf("%d\n", sizeof(&arr + 1));//8//ָ�룬��ʾ����6��char�͵ĵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//8//ָ�룬��ʾ�ڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", strlen(arr));//42???????????//���ֵ����������������//����ǰ����ڴ��޷���֪��һֱ��ֱ��'\0'
//	printf("---\n");
//	printf("%d\n", strlen(arr + 0));//42???????????//�������ֵ��������Ľ��һ��
//
//	//�����⼸��û��ֵ����������������������
//	//size_t strlen(const char*)
//	//printf("%d\n", strlen(*arr));//strlen('a')-->strlen(97);//Ұָ�룡����
//	//printf("%d\n", strlen(arr[1]));//strlen('b')-->strlen(98)
//
//	printf("%d\n", strlen(&arr));//���ֵ��1��
//	printf("%d\n", strlen(&arr + 1));//���ֵ��1��-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ��1��-1

//int main() {
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7//����'\0'??
//	printf("%d\n", sizeof(arr + 0));//8//��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));//1//��Ԫ��
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//8
//	printf("%d\n", sizeof(&arr + 1));//8
//	printf("%d\n", sizeof(&arr[0] + 1));//8
//
//	//strlen �����ַ������ȵģ���ע����\0���������\0֮ǰ���ַ�����
//	//strlen�ǿ⺯����֮����ַ���
//	//sizeofֻ��עռ�ÿռ�Ĵ�С�����ں��ڴ�����ʲô
//	//sizeof�ǲ�����
//	printf("%d\n", strlen(arr));//6//�ַ������Ȳ���'\0'����ֻ�����ַ����������һ�Ų���
//	printf("%d\n", strlen(arr + 0));//6!!!!!!//
//
//	//printf("%d\n", strlen(*arr));//erroe
//	//printf("%d\n", strlen(arr[1]));//error
//
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//6-1==5��
//}
// 
// 
//int main(){
//	char* p = "abcdef";//���ַ�a�ĵ�ַ�ŵ�P���棡��������
//	printf("%d\n", sizeof(p));//8//p��ָ��
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
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ������һ���޹�ϵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}
//
//int main() {
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//3*4*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//�൱��һ��//16
//	printf("%d\n", sizeof(a[0] + 1));//8//a[0]==&a[0][0],a[0]+1��ʾa[0][1]�ĵ�ַ
//                                     //����һά����a==&a[0],���ڶ�ά����a[0]=&a[0][0];
//	printf("%d\n", sizeof(*(a[0] + 1)));//4//����4bytes��*(a[0]+1)��ʾa[0][1];
//	printf("%d\n", sizeof(a + 1));//8//a��ʾ��һ�еĵ�ַ��a+1�ڶ��еĵ�ַ
//	                            //a��Ȼ�Ƕ�ά����ĵ�ַ�����ǲ�û�е�������sizeof���棬Ҳû��ȡ��ַ
//	                            //a��ʾ��Ԫ�صĵ�ַ����ά�������Ԫ�ر�ʾ���ĵ�һ�У�a���ǵ�һ�еĵ�ַ   
//
//	printf("%d\n", sizeof(*(a + 1)));//16//��ʾ�ڶ���
//
//	printf("%d\n", sizeof(&a[0] + 1));//8//ָ�룬&a[0]��һ�еĵ�ַ��&a[0]+1 ��ʾ�ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16//
//	printf("%d\n", sizeof(*a));//16!!!!!//a��ʾ��Ԫ�صĵ�ַ��*a��ʾ��һ��
//	printf("%d\n", sizeof(a[3]));//û�е����а���������ھ���16��
//                                 //sizeofֻҪ֪�����;Ϳ��Լ��㣬���õ���Խ�磬16
//	return 0;
//}