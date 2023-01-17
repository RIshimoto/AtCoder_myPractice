from random_checker import solve_Jury
import unittest

class Test_solveJury(unittest.TestCase):
    def test_sample1(self):
        value1 = 1420
        value2 = 142
        expected = 3
        actual = solve_Jury(value1, value2)
        self.assertEqual(expected, actual)

    def test_sample2(self):
        value1 = 1419
        value2 = 142
        expected = 2
        actual = solve_Jury(value1, value2)
        self.assertEqual(expected, actual)

    def test_sample3(self):
        value1 = 6
        value2 = 19
        expected = 0
        actual = solve_Jury(value1, value2)
        self.assertEqual(expected, actual)

if __name__ == '__main__':
    unittest.main()
