from random_checker import solve_Jury
import unittest

class Test_solveJury(unittest.TestCase):
    def test_sample1(self):
        value1 = 3
        value2 = [3, 1, 5] 
        expected = 15
        actual = solve_Jury(value1, value2)
        self.assertEqual(expected, actual)

    def test_sample2(self):
        value1 = 4
        value2 = [1, 1, 1, 1] 
        expected = 10
        actual = solve_Jury(value1, value2)
        self.assertEqual(expected, actual)

if __name__ == '__main__':
    unittest.main()
