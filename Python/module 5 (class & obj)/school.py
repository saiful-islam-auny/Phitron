class Student:
    def __init__(self, name, current_class, id) -> None:
        self.name = name
        self.cls = current_class
        self.id = id


class Teacher:
    def __init__(self, name, subject, id) -> None:
        self.name = name
        self.subject = subject
        self.id = id


class School:
    def __init__(self, name) -> None:
        self.name = name
        self.teacher_list = []
        self.student_list = []

    def enroll(self, name, current_class, tk):
        if tk<5000:
            return f'Not Enough for enroll, need more {5000-tk} tk'
        else:
            id = len(self.student_list)+1
            stu = Student(name,current_class,id)
            self.student_list.append(stu)
            return f'Enroll done, your wallet money {tk-5000} tk'

    def add_teacher(self, name, subj):
        id = len(self.teacher_list)+101
        tea = Teacher(name, subj, id)
        self.teacher_list.append(tea)

    def __repr__(self) -> str:
        print('Welcome to ',self.name)
        print('___Our Teachers___')
        for t in self.teacher_list:
            print(t)
        print('___Our Students___')
        for s in self.student_list:
            print(s)
            
        return 'all done'
        

ABC = School('ABC')

ABC.enroll('Auny','A',6500)
ABC.enroll('Tony','B',4500)
ABC.enroll('jony','C',7500)

ABC.add_teacher('kalu','bilogy')
ABC.add_teacher('alu','math')
ABC.add_teacher('valu','babgla')

print(ABC)