import unittest
from random_checker import solve_Jury

class Test_solveJury(unittest.TestCase):
    def test_sample1(self):
        value1 = 3
        expected = 2
        actual = solve_Jury(value1)
        self.assertEqual(expected, actual)

    def test_sample2(self):
        value1 = 10
        expected = 8
        actual = solve_Jury(value1)
        self.assertEqual(expected, actual)

    def test_sample2(self):
        value1 = 9
        expected = 8
        actual = solve_Jury(value1)
        self.assertEqual(expected, actual)

if __name__ == '__main__':
    unittest.main()
