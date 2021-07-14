#!/usr/bin/python3
"""
Module function
"""

def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid."""

    perim = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):

            if grid[i][j] == 1:

                try:
                    if grid[i - 1][j] == 0 or i == 0:
                        perim += 1
                except IndexError:
                    perim += 1

                try:
                    if grid[i + 1][j] == 0:
                        perim += 1
                except IndexError:
                    perim += 1

                try:
                    if grid[i][j - 1] == 0 or j == 0:
                        perim += 1
                except IndexError:
                    perim += 1

                try:
                    if grid[i][j + 1] == 0:
                        perim += 1
                except IndexError:
                    perim += 1
    return perim
