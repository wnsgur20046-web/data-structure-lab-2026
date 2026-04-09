#pragma once
#define MAX_DEGREE 80
#include <stdio.h>

class Polynomial {
    int degree;
    float coef[MAX_DEGREE]; 

public:
    Polynomial() {
        degree = 0;
        for (int i = 0; i < MAX_DEGREE; i++)
            coef[i] = 0;
    }

    void read() {
        printf("Enter the highest order of the polynomial: ");
        scanf_s("%d", &degree);
        printf("Enter coefficients from highest degree to lowest (%d terms): ", degree + 1);
        for (int i = degree; i >= 0; i--)
            scanf_s("%f", &coef[i]);
    }

    void display(const char* str = "Poly = ") {
        printf("\t%s", str);
        bool first = true;
        for (int i = degree; i >= 0; i--) {
            if (coef[i] == 0 && degree != 0) continue; 
            if (!first) printf(" + ");
            if (i == 0)
                printf("%.1f", coef[i]);
            else if (i == 1)
                printf("%.1f x", coef[i]);
            else
                printf("%.1f x^%d", coef[i], i);
            first = false;
        }
        if (first) printf("0"); 
        printf("\n");
    }

    void add(Polynomial a, Polynomial b) {
        degree = (a.degree > b.degree) ? a.degree : b.degree;
        for (int i = 0; i < MAX_DEGREE; i++)
            coef[i] = 0;
        for (int i = 0; i <= a.degree; i++)
            coef[i] += a.coef[i];
        for (int i = 0; i <= b.degree; i++)
            coef[i] += b.coef[i];
    }

    bool isZero() {
        return degree == 0 && coef[0] == 0;
    }

    void negate() {
        for (int i = 0; i <= degree; i++)
            coef[i] = -coef[i];
    }
};