from random_checker import solve_Jury
import unittest

class Test_solveJury(unittest.TestCase):
    def test_sample1(self):
        value1 = (9, 1, [5, 4, 10, 3, 7, 2, 7, 5, 2], [2])   
        expected = 8
        actual = solve_Jury(*value1)
        self.assertEqual(expected, actual)

    """
    def test_sample2(self):
        value1 = 
        expected = 
        actual = solve_Jury(value1)
        self.assertEqual(expected, actual)
    """

if __name__ == '__main__':
    unittest.main()
