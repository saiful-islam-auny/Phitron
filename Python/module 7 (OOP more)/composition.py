class RAM:
    def __init__(self, size) -> None:
        self.ram_size = size
    
class CPU:
    def __init__(self, cores) -> None:
        self.cpu_cores = cores

class Computer:
    def __init__(self, size, cores) -> None:
        self.ram_size = RAM(size)
        self.cpu_cores = CPU(cores)

my_computer = Computer(8,5)
