class Course:
    def __init__(self, data_structure, basic_programming, basic_electircal) -> None:
        self.DS = data_structure
        self.BP = basic_programming
        self.BE = basic_electircal

    def __repr__(self) -> str:
        return f'Mandetory-- DS: {self.DS}, BP: {self.BP}, BE: {self.BP}'


class CSE(Course):
    def __init__(self, data_structure, basic_programming, basic_electircal, computer_networking) -> None:
        super().__init__(data_structure, basic_programming, basic_electircal)
        self.CN = computer_networking

    def __repr__(self) -> str:
        print(f'CSE-- Computer networking: {self.CN}')
        return super().__repr__()


class EEE(CSE):
    def __init__(self, data_structure, basic_programming, basic_electircal, computer_networking, advance_eee) -> None:
        super().__init__(data_structure, basic_programming, basic_electircal, computer_networking)
        self.AE = advance_eee

    def __repr__(self) -> str:
        print(f'EEE-- Advance EEE: {self.AE}')
        return super().__repr__()


cse_course = CSE(True, True, True, True)
print(cse_course)
eee_course = EEE(False, True, True, True, True)
print(eee_course)
