#ifndef VARIABLE_H
#define VARIABLE_H

struct Variable {
    int int_size;
    float float_size;
    double double_size;
    ///опечатка в address
    int *int_adress;
    float *float_adress;
    ///опечатка в double
    /// к чему я на это обратил внимание? к тому, что clion подсказывает, где опечатки =)
    double *douvle_adress;
} variable; ///Так не очень хорошо делать
/// Есть хорошее правило эффективного программирования на c++:
/// Не использовать глобальные переменные, а использовать настолько
/// локальные переменные, насколько это возможно. Сразу в месте использования.

#endif // VARIABLE_H
