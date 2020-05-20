import os
import math
import nltk
from nltk import word_tokenize
from nltk.util import ngrams
from collections import Counter

# Computes Jaccard Similarity
def jaccard_similarity(l1, l2):
    l1 = set(l1)
    l2 = set(l2)
    return 1.0 * len(l1 & l2)/len(l1 | l2)
    
# Computes Cosine Similarity
def cosine_similarity(l1, l2):
    
    vec1 = Counter(l1)
    vec2 = Counter(l2)

    intersection = set(vec1.keys()) & set(vec2.keys())
    numerator = sum([vec1[x] * vec2[x] for x in intersection])

    sum1 = sum([vec1[x]**2 for x in vec1.keys()])
    sum2 = sum([vec2[x]**2 for x in vec2.keys()])
    denominator = math.sqrt(sum1) * math.sqrt(sum2)

    if not denominator:
        return 0.0
    
    return float(numerator) / denominator

data1 = []
data2 = []

example_file1 = open("ex1.c")
data1.append(example_file1.read())

example_file2 = open("ex2.c")
data2.append(example_file2.read())

# cnt = Counter()
for text in data1:
    # print (text)
    token = nltk.word_tokenize(text)
    bigrams = ngrams(token, 2)
    l1 = list(ngrams(token, 2))
    # cnt = Counter(bigrams)
# print (cnt)

for text in data2:
    # print (text)
    token = nltk.word_tokenize(text)
    bigrams = ngrams(token, 2)
    l2 = list(ngrams(token, 2))

lst_bigrams = list(bigrams)

hashes = [(hash(lst_bigrams[i]), i) for i in range(len(lst_bigrams))]
print(lst_bigrams)
print(hashes[0:4])

# Both jaccard similarity and cosine similarity appear to be highest for ngram = 2 , i.e bigrams
jsimilarity = jaccard_similarity(l1,l2)
csimilarity = cosine_similarity(l1,l2)
print("Jaccard Similarity : ", jsimilarity)
print("Cosine Similarity : ", csimilarity)

# Self Testing
# a = [('a','b'), ('b','c'), ('c','d'), ('e','f')]
# b = [('f','g'), ('a','b'), ('a','b'), ('h','i')]
# print("Sample jsim : ", jaccard_similarity(a,b))
# print("Sample csim : ", cosine_similarity_ngrams(a, b))
