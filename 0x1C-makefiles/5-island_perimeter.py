#!/usr/bin/python3

"""
This module contains a functions that calculates the perimeter of an
island
"""


def island_perimeter(grid):
    """
    @grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    """
    flag = False
    x_1, y_1 = (0, 0)
    x_2, y_2 = (0, 0)

    for y, row in enumerate(grid):
        for x, val in enumerate(row):
            if val == 1 and not flag:
                x_1, y_1 = x, y
                x_2, y_2 = x + 1, y + 1
                flag = True
            elif val == 1 and flag:
                x_2, y_2 = x + 1, y + 1

    height = y_2 - y_1
    breadth = x_2 - x_1
    perimeter = 2 * (height + breadth)
    return perimeter
