#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
if n % 2 == 0 and (n > 20 or (2 <= n and n <= 5)):
    print("Not Weird")
elif n % 2 == 0 and n <= 20 and n >= 6:
    print("Weird")
else:
    print("Weird")