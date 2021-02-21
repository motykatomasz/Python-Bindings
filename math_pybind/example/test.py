from math_ops.math import square_cpp, cube_cpp


def main():
    base = 2
    squared = square_cpp(base=base)
    print(squared)

    cubed = cube_cpp(base=base)
    print(cubed)

if __name__ == '__main__':
    main()