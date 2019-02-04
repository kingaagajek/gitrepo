#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kalkulator.py

def pokaz_liste():
    print('''Lista działań:
          +  – dodawanie
          -  – odejmowanie
          *  – mnożenie
          /  – dzielenie
          // – dzielenie całkowite
          %  – dzielenie modulo
          ^  – potęgowanie
          !  – silnia
          sin – sinus
          cos – cosinus
          koniec – wyjście z programu
          ''')

def pobierz_liczbe(komunikat='Pobierz liczbę: '):
    a = input(komunikat)
    if a.isdigit():
        return int(a)
    return False

def suma(a, b):
    return a + b
    
def odejmij(a, b):
    return a - b
    
def mnoz(a, b):
#    if b or a != 0:
        return a * b
#       else:
#       return 1

def dziel(a, b):
    if b != 0:
        return a / b
    else:
        print('Bląd dzielenia przez zero!')
    return 0
        
def main(args):
    pokaz_liste()
    while True:
        d = input("Wybierz działanie ")
        if d == '+':
            a = pobierz_liczbe('Podaj składnik: ')
            b = pobierz_liczbe('Podaj skłanik: ')
            if a and b:
                wynik = suma(a, b)
                if wynik:
                    print('{} + {} = {}'.format(a, b, wynik))
            pass
        elif d == '-':
            a = pobierz_liczbe('Podaj odjemną: ')
            b = pobierz_liczbe('Podaj odjemnik: ')
            if a and b:
                wynik = odejmij(a, b)
                if wynik:
                    print('{} - {} = {}'.format(a, b, wynik))
            pass
        elif d == '*':
            a = pobierz_liczbe('Podaj czynnik: ')
            b = pobierz_liczbe('Podaj czynnik: ')
            if a and b:
                wynik = mnoz(a, b)
                if wynik:
                    print('{} * {} = {}'.format(a, b, wynik))
            pass
        elif d == '/':
            a = pobierz_liczbe('Podaj dzielną: ')
            b = pobierz_liczbe('Podaj dzielnik: ')
            if a and b:
                wynik = dziel(a, b)
                if wynik:
                    print('{} / {} = {}'.format(a, b, wynik))
            pass
        elif d == '//':
            pass
        elif d == 'l':
            pokaz_liste()
        elif d == 'koniec':
            return 0
        else:
            print("Błędny wybór!")
        
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
