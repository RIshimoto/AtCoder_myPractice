from random_checker import solve_Jury
import unittest

class Test_solveJury(unittest.TestCase):
    def test_sample1(self):
        value1 = 5
        value2 = 4
        value3 = 3
        value4 = [5, 5, 0, 6, 3]
        expected = 14
        actual = solve_Jury(value1, value2, value3, value4)
        self.assertEqual(expected, actual)

    def test_sample2(self):
        value1 = 4
        value2 = 10
        value3 = 10
        value4 = [1, 2, 3, 4]
        expected = 10
        actual = solve_Jury(value1, value2, value3, value4)
        self.assertEqual(expected, actual)

    def test_sample3(self):
        value1 = 10
        value2 = -5
        value3 = -3
        value4 = [9, -6, 10, -1, 2, 10, -1, 7, -15, 5]
        expected = -58
        actual = solve_Jury(value1, value2, value3, value4)
        self.assertEqual(expected, actual)

if __name__ == '__main__':
    unittest.main()
