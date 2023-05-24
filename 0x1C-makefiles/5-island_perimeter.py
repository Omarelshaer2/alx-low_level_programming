#!/usr/bin/python3
"""this Module is calculating the perimeter of island."""


def num_water_neighbors(grid, i, j):
    """Returning the number of water neighbors."""

    num = 0

    if i <= 0 or not grid[i - 1][j]:
        num += 1
    if j <= 0 or not grid[i][j - 1]:
        num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Returning perimeter of island to its original case."""

    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perim += num_water_neighbors(grid, i, j)

    return perim
