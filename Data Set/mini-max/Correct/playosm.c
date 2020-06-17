#!/bin/python3

import sys

top_min=10000000000000
top_max=0

arr = list(map(int, input().strip().split(' ')))

for i in range(len(arr)):
    toplam=0
    for j in arr:
        toplam=toplam+j
    toplam=toplam-arr[i]
    if toplam>top_max:
        top_max=toplam
        
    if toplam<top_min:
        top_min=toplam
        
print(top_min,top_max)
