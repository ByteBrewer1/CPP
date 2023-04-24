#!/bin/python3
# AUTHOR :: RAHUL MISTRY
# DATE   :: 24 / 04 / 2023
import math
import os
import random
import re
import sys

#
# Complete the 'dayOfProgrammer' function below.
#
# The function is expected to return a STRING.
# The function accepts INTEGER year as parameter.
#

def dayOfProgrammer(year):
    # Write your code here
    if year==1918:
        return '29.09.1918'
    elif year <= 1917 and year % 4 == 0:
        return f'12.09.{year}'
    elif year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
        return f'12.09.{year}'
    else:
        return f'13.09.{year}'

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    year = int(input().strip())

    result = dayOfProgrammer(year)

    fptr.write(result + '\n')

    fptr.close()
