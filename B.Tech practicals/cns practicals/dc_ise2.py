#!/usr/bin/env python3
import sys
(final, highest) = (None, -999999)

for row in sys.stdin:
    (key,value) = row.strip().split(",")
    if final and final != key:
        print("{0},{1}".format(final,highest))
        (final,highest) = (key,int(value))
    else:
        (final,highest) = (key,max(highest,int(value)))
    if (final!=NULL):
        print("{0},{1}".format(final,highest))
        
        