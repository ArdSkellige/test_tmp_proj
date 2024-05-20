#include <gtest/gtest.h>

#include <array>
#include "app/funcs.hpp"
#include "app/animal.hpp"

TEST(FIRST, Summary)
{
   EXPECT_EQ(Sum(1,2), 3);
}

TEST(ARRAYS, Sorting)
{
    std::array<int,12> ar = {3, 7, 1, 10, 0, 4, 5, 3, 5, 2, 9, 8};
    SortArray(ar.data(), ar.size());

    std::array<int,12> ar2 = {0, 1, 2, 3, 3, 4, 5, 5, 7, 8, 9, 10};
    EXPECT_EQ(ar, ar2);
}

TEST(ANIMAL, FullCompare)
{
    // Animal an1("Rex", 4);
    // Animal an2("Spike", 2);
    // EXPECT_NE(an1, an2);

    // Animal an3(an2);
    // EXPECT_EQ(an2, an3);
}

// TEST(ANIMAL, CompareName)
// {
//     Animal an1("Rex");
//     Animal an2("Spike");
//     EXPECT_NE(an1.GetAnimalName(), an2.GetAnimalName());

//     Animal an3("Rex", 7);
//     EXPECT_EQ(an1.GetAnimalName(), an3.GetAnimalName());
// }