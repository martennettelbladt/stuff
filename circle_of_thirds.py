# Circle of thirds
# Mårten Nettelbladt / 2025-01-28

import math

note = []

for i in range(24):
    note.append(math.floor(3.5 * i) % 12)
    print(note[i])
