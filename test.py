class Study:
    def __init__(self,ssc,hsc) -> None:
        self.ssc_result = ssc
        self.hsc_result = hsc
    def result(self):
        print(f'SSC: {self.ssc_result} HSC: {self.hsc_result}')

class Address:
    def __init__(self,loc,num) -> None:
        self.location = loc
        self.number = num
    def show_address(self):
        print(f'Location: {self.location} Number: {self.number}')

class Person(Study, Address):
    def __init__(self, ssc, hsc, loc, num, gender) -> None:
        Study.__init__(self, ssc, hsc)
        Address.__init__(self, loc, num)
        self.gender = gender

    
auny = Person(4.72, 4.42, 'Khulna', 123, 'male')

auny.show_address()
