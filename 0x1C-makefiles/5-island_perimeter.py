#!/usr/bin/python3
"""
5-island_perimeter module

contains a function that returns perimeter of an island
"""


def island_perimeter(grid):
    """computers perimeter of an island described in a grid

    Args:
    grid(list): list of list of integers
    """
    perimeter = 0
    height = len(grid)
    if height == 0:
        return perimeter

    width = len(grid[0])
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                sides = [
                    grid[i - 1][j] if i != 0 else 0,
                    grid[i][j + 1] if j < width - 1 else 0,
                    grid[i + 1][j] if i < height - 1 else 0,
                    grid[i][j - 1] if j != 0 else 0,
                ]
                perimeter += sum([1 if v == 0 else 0 for v in sides])


return perimeter
