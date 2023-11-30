class pen:

    def __init__(self, brand, price, rating):
        self.br = brand
        self.pr = price
        self.ra = rating


mat = pen('mat',5,8.5)
print(mat.br, mat.pr, mat.ra)
olym = pen('olympic',5,6.5)
print(olym.br, olym.pr, olym.ra)
