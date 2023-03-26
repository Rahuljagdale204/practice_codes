#!/usr/bin/env python3

import re
import sys

for row in sys.stdin:
    people = row.strip()
    votes = people.split(',')
    (key,value) = (votes[1],votes[3])
    
    if(key):
        print("{},{}".format(key,value))
        
        