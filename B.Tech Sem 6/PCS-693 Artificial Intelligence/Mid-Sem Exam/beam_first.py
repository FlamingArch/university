from math import log
from numpy import array
from numpy import argmax


def beam_search_decoder(data, k):
    sequences = [[list(), 0.0]]
    for row in data:
        all_candidates = list()
        for i in range(len(sequences)):
            seq, score = sequences[i]
            for j in range(len(row)):
                candidate = [seq + [j], score - log(row[j])]
                all_candidates.append(candidate)

        ordered = sorted(all_candidates, key=lambda tup: tup[1])

        sequences = ordered[:k]
    return sequences


data = array([[0.1, 0.2, 0.3, 0.4, 0.5],
              [0.2, 0.3, 0.4, 0.5, 0.1],
              [0.3, 0.4, 0.5, 0.1, 0.2],
              [0.4, 0.5, 0.1, 0.2, 0.3],
              [0.5, 0.4, 0.3, 0.2, 0.1],
])

data = array(data)
out = beam_search_decoder(data, 3)

for seq in out:
    print(seq)