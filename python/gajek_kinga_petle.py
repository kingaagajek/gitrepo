#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  gajek_kinga_petle.py
#  
def cw1():
    suma = 0
    liczba = int(input("Podaj liczbę: "))
    while suma < 75:
        suma += liczba
        print(suma)
        liczba = int(input("Podaj liczbę: "))
        
def cw2():
    suma = 0
    n = int(input("Podaj dolny zakres: "))
    
    m = int(input("Podaj górny zakres: "))
    
    for i in range(n, m):
        
        print("{}".format(i), end = " ")
    




def main(args):
    
    cw2()
    return 0
    
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
