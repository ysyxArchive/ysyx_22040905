#任意进制转二进制
def dec2bin(dec):
    temp = []
    result = ''
    while dec:
        quo = dec % 2
        dec = dec // 2
        temp.append(quo)
    while temp:
        result += str(temp.pop())
    return result


def gen_p(num):
    num = num << 1
    while num > 0:
        print(dec2bin(num % 8))
        num = num >> 2

#gen_p(0x1b03)
#print(dec2bin(0x1b03))
#print(0xad9)
#print(dec2bin(0x526+0xadc))
print(dec2bin(0xfffff526+0xad9+0xfffff526+0xfffff526+0x15b2))
print(0b11111111111111111111111111111101)
print(0xad9*0x1b03)