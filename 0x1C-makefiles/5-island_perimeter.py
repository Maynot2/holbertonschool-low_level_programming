#!/usr/bin/python3
"""
    Contains a function to calculate the perimeter of an island
    and a function to calculate the number of neighbours a cell has
"""


def neighbours(grid, i, j):
    """Calculate the number of 1 neighbours a 1 cell has"""
    count = 0
    if grid[i][j + 1] == 1:
        count += 1
    if grid[i][j - 1] == 1:
        count += 1
    if grid[i + 1][j] == 1:
        count += 1
    if grid[i + 1][j] == 1:
        count += 1
    return count


def island_perimeter(grid):
    """Calculates the perimeter of an island"""
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4 - neighbours(grid, i, j)
    return perimeter
