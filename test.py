keywords = ['int','float','long','double','char','auto','else','switch','break','enum', 'register', 'typedef','case', 'extern', 'return', 'union','short', 'unsigned','const', 'for', 'signed', 'void','continue', 'goto', 'sizeof', 'volatile','default', 'if', 'static', 'while','do',  'struct', '_Packed']

while(True):
    s = input()

    if s[0].isdigit() or any(c in " !@#$%^&*()-+=[]}{|;:'\"<>,.?/~`" for c in s) or s in keywords:
        print('Invalid varialbe')
    else:
        print('Valid varialbe')

