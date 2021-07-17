from pymath import SimpleOps


def main():
    ops = SimpleOps(True)
    base = 2
    squared = ops.square(base)
    print(squared)

    cubed = ops.cube(base)
    print(cubed)

if __name__ == '__main__':
    main()