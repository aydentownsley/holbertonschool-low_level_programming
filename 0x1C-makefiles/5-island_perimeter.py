#!/usr/bin/python3
""" Island Perimeter Module """


def island_perimeter(grid):
    """ Finds perimeter of an island """
    p = 0
    for l in range(len(grid)):
        for w in range(len(grid[l])):
            if grid[l][w] == 1:
                if l != 0:
                    if not grid[l - 1][w]:
                        p += 1
                else:
                    p += 1
                if l != len(grid) - 1:
                    if not grid[l + 1][w]:
                        p += 1
                else:
                    p += 1
                if w != 0:
                    if not grid[l][w - 1]:
                        p += 1
                else:
                    p += 1
                if w != len(grid[l]) - 1:
                    if not grid[l][w + 1]:
                        p += 1
                else:
                    p += 1
    return p
