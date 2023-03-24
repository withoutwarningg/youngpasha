#ifndef QVADR_H
#define QVADR_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "discr.h"
}

float x1, x2;
int flag;


TEST(Discr, num1) {
    qvadr(1, -5, 4, &x1, &x2, &flag);
    ASSERT_FLOAT_EQ(4, x1);
    ASSERT_FLOAT_EQ(1, x2);
    ASSERT_EQ(0, flag);
}

TEST(Discr, num2) {
    qvadr(5, 7, 2, &x1, &x2, &flag);
    ASSERT_FLOAT_EQ(-0.4, x1);
    ASSERT_FLOAT_EQ(-1, x2);
    ASSERT_EQ(0, flag);
}

TEST(Discr, num3) {
    qvadr(1, 4, 4, &x1, &x2, &flag);
    ASSERT_FLOAT_EQ(-2, x1);
    ASSERT_FLOAT_EQ(-2, x2);
    ASSERT_EQ(0, flag);
}

TEST(Discr, num4) {
    qvadr(1, -5, 9, &x1, &x2, &flag);
    ASSERT_EQ(1, flag);
}


TEST(Koefzero, num5) {
    qvadr(0, 0, 9, &x1, &x2, &flag);
    ASSERT_EQ(flag, 1);
}

TEST(Koefzero, num6) {
    qvadr(0, 3, 3, &x1, &x2, &flag);
    ASSERT_FLOAT_EQ(x1, x2);
    ASSERT_FLOAT_EQ(x1, -1);
    ASSERT_EQ(flag, 0);
}

#endif // QVADR_H
