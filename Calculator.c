//підключає стандартну бібліотеку С #include <stdio.h> (для виводу інфи в консоль)
#include <stdio.h>
//фун. для обрахування Фаренгейт в Цельсії
int ftoc(void) {
    //змінна де буде зберігатися значення в Цельсіях
    float celcius;
    //створили масив із 8 елементів з типом float який містить у собі значення температури у Фаренгейтах
    float Table[8]={32.0,41.0,46.4,50,55.4,57.2,82.4,100.4};
    // каутер для руху по рядках
    int i;
    //викликається функція яка виводить текст в консоль: Fahr to Celsius
    printf("Fahr to Celsius\n");
    /*цикл створени  для руху по масиву починаючи від i=0 до 7 за умови 1<8;
     ++i коли закінчується ітерація циклу збільшує індекс на 1*/
    for(i=0;i<8;++i){
        //виконується обчислення градусів Цельсій за формулою
            celcius= (5 * (Table[i] - 32)) / 9;
            //викликається фун. яка виводить обраховане значення Цельсія
            printf("%.3g\n",celcius);
        }
    //вертає 0 в main
    return 0;
}
//фун. для обрахування Цельсії в Фаренгейт
    int ctof(void) {
        //змінна де буде зберігатися значення в Фаренгейтах
        float fahr;
        //створили масив із 8 елементів з типом float який містить у собі значення температури у Цельсіях
        float Table2[8] = {9, 18, 27, 32, 38, 1, 14, 29};
        // каутер для руху по рядках
        int i;
        //викликається функція яка виводить текст в консоль: Celsius to Fahr
        printf("Celsius to Fahr \n");
        /*цикл створени  для руху по масиву починаючи від i=0 до 7 за умови 1<8;
     ++i коли закінчується ітерація циклу збільшує індекс на 1*/
        for (i = 0; i < 8; ++i) {
            //виконується обчислення Фаренгейт за формулою
            fahr = (5 * (Table2[i] - 32)) / 9;
            //викликається фун. яка виводить обраховане значення Фаренгейт
            printf("%.3g\n", fahr);
        }
        //вертає 0 в main
        return 0;
    }