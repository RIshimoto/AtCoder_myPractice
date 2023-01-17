from random_checker import solve_Jury
import unittest

class Test_solveJury(unittest.TestCase):
    def test_sample1(self):
        value1 = (5, 2, [3, 5, 2, 1, 4])
        expected = [4, 3, 3, -1, 4]
        actual = solve_Jury(*value1)
        self.assertEqual(expected, actual)

    def test_sample2(self):
        value1 = (5, 1, [1, 2, 3, 4, 5])
        expected = [1, 2, 3, 4, 5]
        actual = solve_Jury(*value1)
        self.assertEqual(expected, actual)

if __name__ == '__main__':
    unittest.main()
