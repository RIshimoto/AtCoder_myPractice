from random_checker import solve_Jury
import unittest

class Test_solveJury(unittest.TestCase):
    def test_sample1(self):
        value1 = 3
        value2 = [1, 2, 3]
        value3 = [6, 4, 7]
        expected = [1, 5]
        actual = solve_Jury(value1, value2, value3)
        self.assertEqual(expected, actual)

if __name__ == '__main__':
    unittest.main()
