from random_checker import solve_Jury
import unittest

class Test_solveJury(unittest.TestCase):
    def test_sample1(self):
        value1 = 4
        expected = 6
        actual = solve_Jury(value1)
        self.assertEqual(expected, actual)

    def test_sample2(self):
        value1 = 254
        expected = 896
        actual = solve_Jury(value1)
        self.assertEqual(expected, actual)

if __name__ == '__main__':
    unittest.main()
