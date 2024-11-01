#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.3i/lab 6.3i.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestIterative
{
    TEST_CLASS(UnitTestIterative)
    {
    public:
        // Тестуємо функцію sortAscending
        TEST_METHOD(TestSortAscending)
        {
            int arr[] = { 3, -2, 5, 1, 0 };
            int expectedArr[] = { -2, 0, 1, 3, 5 };

            sortAscending(arr, 5);

            for (int i = 0; i < 5; i++) {
                Assert::AreEqual(expectedArr[i], arr[i], L"Array element mismatch after sorting");
            }
        }

        // Тестуємо шаблонну функцію templateSortAscending
        TEST_METHOD(TestTemplateSortAscending)
        {
            int arr[] = { 4, 1, -3, 7, 0 };
            int expectedArr[] = { -3, 0, 1, 4, 7 };

            templateSortAscending(arr, 5);

            for (int i = 0; i < 5; i++) {
                Assert::AreEqual(expectedArr[i], arr[i], L"Array element mismatch after template sorting");
            }
        }
    };
}