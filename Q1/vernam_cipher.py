def vernam_chiper(key, message):
    xor = []

    for i in range(len(key)):
        c_xor = ord(key[i]) ^ ord(message[i])
        xor.append(chr(c_xor))

    return ''.join(xor)

def main():
    M = "HELLO"
    K = "pizza"
    
    C = vernam_chiper(M, K)
    print(C)

main()