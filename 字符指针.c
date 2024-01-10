//#include <stdio.h>
//int main() {
//	
//	char ch = 'c';
//	char* pc=&ch;
//	*pc = 'c';
//	printf("%c %p", *pc, pc);
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	const char* ps = "hello ";//把“hello "的地址放到了ps上
//	                          //把'h'的地址放到ps上；
//	printf("%s %p\n", ps,ps);//输出字符串时是ps而不是*ps,ps通过地址找到字符串；
//	printf("%c", *ps);//ps上存的是'h'的地址，*ps='h'
//	return 0;
//}