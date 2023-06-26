#!/usr/bin/python3

import sys
import math

def factorize_number(number):
    factors = []
    for i in range(2, int(math.sqrt(number)) + 1):
        while number % i == 0:
            factors.append((i, number // i))
            number //= i
    if number > 1:
        factors.append((number, 1))
    return factors

def factorize_file(file_path):
    with open(file_path, 'r') as file:
        numbers = file.read().splitlines()
    factorizations = []
    for number in numbers:
        number = int(number)
        factorizations.extend(factorize_number(number))
    for factorization in factorizations:
        print('{}={}*{}'.format(factorization[0] * factorization[1], factorization[0], factorization[1]))

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print('Usage: factors <file>')
    else:
        file_path = sys.argv[1]
        factorize_file(file_path)
