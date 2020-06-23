#ifndef _TRIGONOMETRIC_OPS_
#define _TRIGONOMETRIC_OPS_

#include <math.h>
#include "io_utils.h"
#include "menu.h"

struct Trigonometric
{
    static void menu();

    struct Sin
    {
        static void menu();

        static void sinCos();
        static void sinHyp();
        static void sinInv();
    };

    struct Cos
    {
        static void menu();

        static void cosSec();
        static void cosHyp();
        static void cosInv();
    };

    struct Tan
    {
        static void menu();

        static void tanCot();
        static void tanHyp();
        static void tanInv();
    };
};

void Trigonometric::menu()
{
    const MenuItem items[] =
    {
        { 29,  5, "TRIGONOMETRIC OPERATIONS", NO_OP },
        { 21,  9, " Sine Functions ", Sin::menu },
        { 21, 11, " Cosine Functions ", Cos::menu },
        { 21, 13, " Tangent Functions ", Tan::menu },
        { 21, 15, " BACK (ESC) ", NO_OP }
    };

    const size_t nItems = sizeof(items) / sizeof(items[0]);

    Menu menu(items, nItems);
    menu.start();
}

// Sin

void Trigonometric::Sin::menu()
{
    const MenuItem items[] =
    {
        { 33,  5, "Sine Functions", NO_OP },
        { 21,  9, " Sine �, Cosecant � ", Sin::sinCos },
        { 21, 11, " Sine Hyperbolic � ", Sin::sinHyp },
        { 21, 13, " Sine Inverse � ", Sin::sinInv },
        { 21, 15, " BACK (ESC) ", NO_OP }
    };

    const size_t nItems = sizeof(items) / sizeof(items[0]);

    Menu menu(items, nItems);
    menu.start();
}

void Trigonometric::Sin::sinCos()
{
    do
    {
        clrscr();
        print(30, 5, "� Sine �, Cosecant � �", YELLOW);

        double c = 0.0;
        input(24, 9, "Enter a number: ", c);
        const double r = c * (3.14 / 180);
        const double R = sin(r);
        gotoxy(24, 12); cprintf("The value of Sin   �  is: %08lf", R);
        gotoxy(24, 13); cprintf("The value of Cosec �  is: %08lf", 1 / R);

    } while (confirm(15, 16) != ESC);

    drawBorder();
}

void Trigonometric::Sin::sinHyp()
{
    do
    {
        clrscr();
        print(30, 5, "� Sine Hyperbolic � �", YELLOW);

        double c = 0.0;
        input(24, 9, "Enter a number: ", c);
        const double r = c * (3.14 / 180);
        const double R = sin(r);
        const double H = sinh(r);
        gotoxy(24, 12); cprintf("The value of Sin  � is: %08lf", R);
        gotoxy(24, 14); cprintf("The value of Sinh � is: %08lf", H);

    } while (confirm(15, 16) != ESC);

    drawBorder();
}

void Trigonometric::Sin::sinInv()
{
    do
    {
        clrscr();
        print(30, 5, "� Sine Inverse � �", YELLOW);

        double c = 0.0;
        input(24, 9, "Enter a number: ", c);
        const double r = c * (3.14 / 180);
        const double R = sin(r);
        const double I = asin(R);
        gotoxy(24, 12); cprintf("The value of Sin �         is: %08lf", R);
        gotoxy(24, 13); cprintf("The value of Sin Inverse � is: %08lf", I);

    } while (confirm(15, 16) != ESC);

    drawBorder();
}

// Cos

void Trigonometric::Cos::menu()
{
    const MenuItem items[] =
    {
        { 33,  5, "Cosine Functions", NO_OP },
        { 21,  9, " Cosine �, Secant � ", Cos::cosSec },
        { 21, 11, " Cosine Hyperbolic � ", Cos::cosHyp },
        { 21, 13, " Cosine Inverse � ", Cos::cosInv },
        { 21, 15, " BACK (ESC) ", NO_OP }
    };

    const size_t nItems = sizeof(items) / sizeof(items[0]);

    Menu menu(items, nItems);
    menu.start();
}

void Trigonometric::Cos::cosSec()
{
    do
    {
        clrscr();
        print(30, 5, "� Cosine �, Secant � �", YELLOW);

        double num = 0.0;
        input(24, 9, "Enter a number: ", num);

        const double r = num * (3.14 / 180);
        const double R = cos(r);
        gotoxy(24, 12); cprintf("The value of Cos �  is: %08lf", R);
        gotoxy(24, 13); cprintf("The value of Sec �  is: %08lf", 1 / R);

    } while (confirm(15, 16) != ESC);

    drawBorder();
}

void Trigonometric::Cos::cosHyp()
{
    do
    {
        clrscr();
        print(30, 5, "� Cosine Hyperbolic � �", YELLOW);

        double num = 0.0;
        input(24, 9, "Enter a number: ", num);

        const double r = num * (3.14 / 180);
        const double R = cos(r);
        const double H = cosh(r);
        gotoxy(24, 12); cprintf("The value of Cos  � is: %08lf", R);
        gotoxy(24, 14); cprintf("The value of Cosh � is: %08lf", H);

    } while (confirm(15, 16) != ESC);

    drawBorder();
}

void Trigonometric::Cos::cosInv()
{
    do
    {
        clrscr();
        print(30, 5, "� Sine Inverse � �", YELLOW);

        double num = 0.0;
        input(24, 9, "Enter a number: ", num);

        const double r = num * (3.14 / 180);
        const double R = cos(r);
        const double I = acos(R);
        gotoxy(24, 12); cprintf("The value of Cos �         is: %08lf", R);
        gotoxy(24, 13); cprintf("The value of Cos Inverse � is: %08lf", I);

    } while (confirm(15, 16) != ESC);

    drawBorder();
}

// Tan

void Trigonometric::Tan::menu()
{
    const MenuItem items[] =
    {
        { 33,  5, "Tangent Functions", NO_OP },
        { 21,  9, " Tangent �, Cotangent � ", Tan::tanCot },
        { 21, 11, " Tangent Hyperbolic � ", Tan::tanHyp },
        { 21, 13, " Tangent Inverse � ", Tan::tanInv },
        { 21, 15, " BACK (ESC) ", NO_OP }
    };

    const size_t nItems = sizeof(items) / sizeof(items[0]);

    Menu menu(items, nItems);
    menu.start();
}

void Trigonometric::Tan::tanCot()
{
    do
    {
        clrscr();
        print(30, 5, "� Tangent �, Cotangent � �", YELLOW);

        double num = 0.0;
        input(24, 9, "Enter a number: ", num);

        const double r = num * (3.14 / 180);
        const double R = tan(r);
        gotoxy(24, 12); cprintf("The value of Tan �  is: %08lf", R);
        gotoxy(24, 13); cprintf("The value of Cot �  is: %08lf", 1 / R);

    } while (confirm(15, 16) != ESC);

    drawBorder();
}

void Trigonometric::Tan::tanHyp()
{
    do
    {
        clrscr();
        print(30, 5, "� Tangent Hyperbolic � �", YELLOW);

        double num = 0.0;
        input(24, 9, "Enter a number: ", num);

        const double r = num * (3.14 / 180);
        const double R = tan(r);
        const double H = tanh(r);
        gotoxy(24, 12); cprintf("The value of Tan  � is: %08lf", R);
        gotoxy(24, 14); cprintf("The value of Tanh � is: %08lf", H);

    } while (confirm(15, 16) != ESC);

    drawBorder();
}

void Trigonometric::Tan::tanInv()
{
    do
    {
        clrscr();
        print(30, 5, "� Tangent Inverse � �", YELLOW);

        double num = 0.0;
        input(24, 9, "Enter a number: ", num);

        const double r = num * (3.14 / 180);
        const double R = tan(r);
        const double I = atan(R);
        gotoxy(24, 12); cprintf("The value of Tan �         is: %08lf", R);
        gotoxy(24, 13); cprintf("The value of Tan Inverse � is: %08lf", I);

    } while (confirm(15, 16) != ESC);

    drawBorder();
}

#endif // _TRIGONOMETRIC_OPS_
