# Circle of thirds
# Mårten Nettelbladt / 2025-01-28

import math

note = []

for i in range(24):
    note.append(math.floor(3.5 * i) % 12)
    print(note[i])

# result:
# 0, 3, 7, 10, 2, 5, 9, 0, 4, 7, 11, 2, 6, 9, 1, 4, 8, 11, 3, 6, 10, 1, 5, 8
# three consecutive numbers form a minor or major triad
# the numbers indicate which note number of the 12 semitones in a chromatic scale, 0-11
