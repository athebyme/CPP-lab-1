//
// Created by Anton on 04.03.2023.
//

#ifndef CPP_COMPLEX_H
#define CPP_COMPLEX_H
class Complex{
    public:
    static void conjugate_complexPointer(double* re, double* im);
    static void conjugate_complexLink(double& re, double& im);
};
#endif //CPP_COMPLEX_H
