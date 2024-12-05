#include "../MergeSort/MergeSort.cpp"
#include "../MergeSort/MergeSort.h"
#include <gtest/gtest.h>

TEST(Tests, good) {

    std::vector<int> t = { 1, 2, 3, 4, 5 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, reverseOrder) {

    std::vector<int> t = { 10, 6, 5, 2, 1 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 1, 2, 5, 6, 10 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, randomOrder) {

    std::vector<int> t = { 3, 1, 4, 5, 2 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, negativeOrder) {

    std::vector<int> t = { -12, -8, -4, -16, -2 };
    MergeSort::Sort(t);
    std::vector<int> expected = { -16, -12, -8, -4, -2 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, negativepositiveOrder) {

    std::vector<int> t = { -53, 20, -14, 5, 2 };
    MergeSort::Sort(t);
    std::vector<int> expected = { -53, -14, 2, 5, 20 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, empty) {

    std::vector<int> t = {};
    MergeSort::Sort(t);
    std::vector<int> expected = {};
    ASSERT_EQ(t, expected);

}

TEST(Tests, onenumb) {

    std::vector<int> t = { 34 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 34 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, duplicates) {

    std::vector<int> t = { 2, 1, 3, 8, 1 ,8 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 1, 1, 3, 3, 6 ,6 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, negativeDuplicates) {

    std::vector<int> t = { -2, -1, -2, -8, -1 ,-8 };
    MergeSort::Sort(t);
    std::vector<int> expected = { -8, -8, -2, -2, -1, -1 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, twonumb) {

    std::vector<int> t = { 1,2 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 1,2 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, hundred) {

    std::vector<int> t(101);
    std::vector<int> expected(101);

    for (int i = 0; i < 101; i++) {

        expected[i] = i * 2;

    }

    for (int i = 0; i < 101; i++) {

        t[i] = i * 2;

    }

    t[0] = 2;
    t[1] = 0;
    MergeSort::Sort(t);
    ASSERT_EQ(t, expected);

}

TEST(Tests, hundredmix) {

    std::vector<int> t(201);
    std::vector<int> expected(201);

    for (int i = -100; i < 101; i++) {

        int index = i + 100;
        expected[index] = i * 2;
        t[index] = i * 2;
    }

    t[20] = 16;
    expected[20] = 16;
    t[20] = 6;
    expected[20] = 6;
    std::sort(expected.begin(), expected.end());
    MergeSort::Sort(t);
    ASSERT_EQ(t, expected);

}