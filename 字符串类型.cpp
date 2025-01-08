表示字符和字符串c语言和c++的区别

char c = 'a';  // 单个字符
char str[] = "hello world";  // 字符串（数组形式）//这里的字符串末尾是以 \0来结束的

c++ 的写法是这样的，用string
char str[] = "hello world";  // 字符数组（和 C 语言相同）
std::string str2 = "hello world";  // 使用 C++ 中的 std::string 类型


在c语言里面，二维数组可以用这两种方式表示
char strs[3][10] = { "hello", "world", "abc" };
// 或者指针数组
char *strs[3] = { "hello", "world", "abc" };
