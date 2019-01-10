#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      Ramanathan AR
#
# Created:     10/01/2019
# Copyright:   (c) Ramanathan AR 2019
# Licence:     <your licence>
#-------------------------------------------------------------------------------

def main():
    pass

if __name__ == '__main__':
    main()

case= input('')
vowel = ['a','e','i','o','u']
consanants= ['b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z']
if case in vowel:
    print('Vowel')
elif case in consanants:
    print('Consonant')
else:
    print('Invalid')
