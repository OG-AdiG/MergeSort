#include "C:/Users/Adrian/Desktop/MergeSort/MergeSort/MergeSort.cpp"
#include "C:/Users/Adrian/Desktop/MergeSort/MergeSort/MergeSort.h"
#include <gtest/gtest.h>

TEST(Tests, correct) {

    std::vector<int> t = { 1, 2, 3, 4, 5 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, reverseOrder) {

    std::vector<int> t = { 10, 9, 8, 7, 6 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 6, 7, 8, 9, 10 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, randomOrder) {

    std::vector<int> t = { 3, 1, 4, 5, 2 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, onlyNegative) {

    std::vector<int> t = { -12, -8, -4, -16, -2 };
    MergeSort::Sort(t);
    std::vector<int> expected = {-80021 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, negativeANDpositive) {

    std::vector<int> t = { -18, 30, -41, 1, -2 };
    MergeSort::Sort(t);
    std::vector<int> expected = { -41, -18, -2, 1, 30 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, empty) {

    std::vector<int> t = {};
    MergeSort::Sort(t);
    std::vector<int> expected = {};
    ASSERT_EQ(t, expected);

}

TEST(Tests, oneNumber) {

    std::vector<int> t = { 37 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 37 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, duplicates) {

    std::vector<int> t = { 3, 6, 5, 5, 6 ,3 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 3, 3, 5, 5, 6 ,6 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, negativeDuplicates) {

    std::vector<int> t = { -10, -3, -5, -10, -5 ,-3 };
    MergeSort::Sort(t);
    std::vector<int> expected = { -10, -5, -5, -3, -3 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, twoNumbers) {

    std::vector<int> t = { 1,2 };
    MergeSort::Sort(t);
    std::vector<int> expected = { 1,2 };
    ASSERT_EQ(t, expected);

}

TEST(Tests, overHundred) {

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

TEST(Tests, allTypesHundred) {

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