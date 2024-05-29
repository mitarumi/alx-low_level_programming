#!/usr/bin/python3
'''
Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid:
'''


def neighbors(grid, up, down, row_neighbors, col_neighbors):
    '''
    Return number of
    sides of the lake
    '''
    num_of_sides = 0

    '''
    up
    '''
    if up > 0 and grid[up - 1][down]:
        num_of_sides += 1

    '''
    down
    '''
    if up < row_neighbors - 1 and grid[up + 1][down]:
        num_of_sides += 1

    '''
    left
    '''
    if down > 0 and grid[up][down - 1]:
        num_of_sides += 1

    '''
    right
    '''
    if down < col_neighbors - 1 and grid[up][down + 1]:
        num_of_sides += 1

