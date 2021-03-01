from pymath import square_cpp, cube_cpp, square_cuda, cube_cuda


def main():
    base = 2
    squared = square_cuda(base=base)
    print(squared)

    cubed = cube_cpp(base=base)
    print(cubed)

if __name__ == '__main__':
    main()