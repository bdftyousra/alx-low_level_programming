#!/usr/bin/python3
""" This module computes the perimeter of an island"""


def island_perimeter(grid):
    """ island_perimeter:
                    Args: grid, a list of list of integers
                    Return: perimeter of the island described in grid
    """

    perimeter = 0
    env_list = []

    for items in range(len(grid)):
        if items == 0 or items == len(grid):
            continue
        for cell in range(len(grid[items])):
            if cell == 0 or cell == len(grid[items]):
                continue
            else:
                if grid[items][cell] == 1:
                    env_list = [grid[items - 1][cell], grid[items][cell + 1],
                                grid[items + 1][cell],  grid[items][cell - 1]]
                    count = 0
                    for j in env_list:
                        if j == 0:
                            count = count + 1
                    if (count == 4):
                        return 4
                    elif (count == 3):
                        perimeter = perimeter + 3
                    elif (count == 2):
                        perimeter = perimeter + 2
                    elif (count == 1):
                        perimeter = perimeter + 1
                    else:
                        pass
                    env_list = []
                else:
                    pass
    return perimeter
