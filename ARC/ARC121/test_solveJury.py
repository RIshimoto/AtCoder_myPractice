from solve_Jury import solve_Jury
import unittest

class Test_solveJury(unittest.TestCase):
    def test_sample1(self):
        value1 = 1 
        value2 = [(1, "R"), (2, "G")]
        expected = 1
        actual = solve_Jury(value1, value2)
        self.assertEqual(expected, actual)

    def test_sample2(self):
        value1 = 1 
        value2 = [(1, "B"), (2, "B")]
        expected = 0
        actual = solve_Jury(value1, value2)
        self.assertEqual(expected, actual)

    def test_sample3(self):
        value1 = 10
        value2 = [(851, "B"), (205, "G"),(134, "G"),(651, "R"),(565, "R"),(548, "B"),(391, "G"),(19, "G"),(808, "B"),(475, "B"), (585, "B"), (293, "B"),(788, "B"),(222, "B"),(772, "G"),(841, "B"),(115, "R"),(603, "G"),(450, "B"),(325, "R"),]
        expected = 0
        actual = solve_Jury(value1, value2)
        self.assertEqual(expected, actual)

if __name__ == '__main__':
    unittest.main()
