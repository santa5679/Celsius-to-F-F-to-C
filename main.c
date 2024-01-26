/*підключаємо файл із оголошеними функціями з файлу print_table.h,
які були декларовані у файлі Calculator*/
#include "print_table.h"
//main(void) не приймає ніяких аргументів
int main(void) {
    //виклик функції ftoc
    ftoc();
    //виклик фун ctof
    ctof();
    //повертає код помилки 0
    return 0;
}
