#!/usr/bin/python3

import sys


def factorize(number):
    factors = []
    for i in range(2, int(number ** 0.5) + 1):
        if number % i == 0:
            factors.append((i, number // i))
    return factors


def main(file_path):
    with open(file_path, 'r') as file:
        for line in file:
            number = int(line.strip())
            factors = factorize(number)
            for factor_pair in factors:
                p, q = factor_pair
                print(f"{number}={p}*{q}")


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: factors <file>")
        sys.exit(1)

    file_path = sys.argv[1]
    main(file_path)
