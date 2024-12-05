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