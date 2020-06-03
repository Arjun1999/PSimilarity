import nltk
import sys
import math
from nltk import word_tokenize
from nltk.util import ngrams
from collections import Counter

def cosine_similarity(l1, l2):

    vec1 = Counter(l1)
    vec2 = Counter(l2)

    # print("Vec 1 : ", vec1)
    # print("Vec 2: ", vec2)

    intersection = set(vec1.keys()) & set(vec2.keys())
    numerator = sum([vec1[x] * vec2[x] for x in intersection])

    sum1 = sum([vec1[x]**2 for x in vec1.keys()])
    sum2 = sum([vec2[x]**2 for x in vec2.keys()])
    denominator = math.sqrt(sum1) * math.sqrt(sum2)

    if not denominator:
        return 0.0

    return float(numerator) / denominator


# Has to be changed to include rightmost minimum too
def get_min(get_key = lambda x: x):
    def rightmost_minimum(l):
        minimum = float('inf')
        minimum_index = -1
        pos = 0

        
        while(pos < len(l)):
            if (get_key(l[pos]) < minimum):
                minimum = get_key(l[pos])
                minimum_index = pos
            pos += 1
        
        return l[minimum_index]
    return rightmost_minimum

# Have used the inbuilt hash function (Should try a self defined rolling hash function)
def winnowing(kgrams, k, t):
    modified_min_func = get_min(lambda key_value: key_value[0])
    
    document_fingerprints = []
    
    # print(kgrams)
    hash_table = [ (hash(kgrams[i]) , i)  for i in range(len(kgrams)) ]
    # print(hash_table)
    
    window_length = t - k + 1
    window_begin = 0
    window_end = window_length
    
    minimum_hash = None

    while (window_end < len(hash_table)):
        window = hash_table[window_begin:window_end]
        window_minimum = modified_min_func(window)
        
        if(minimum_hash != window_minimum):
            # print(window_minimum)
            document_fingerprints.append(window_minimum[0]) #not taking positions into consideration
            minimum_hash = window_minimum

        window_begin = window_begin + 1
        window_end = window_end + 1

    return document_fingerprints

def generate_kgrams(data, k):
    for text in data :
        token = nltk.word_tokenize(text)
        kgrams = ngrams(token, k)
        lst_kgrams = list(kgrams)
        # print("Kgrams : ", lst_kgrams)
        return lst_kgrams


# only conversion to lowercase for now
def preprocess(document):
    preprocessed_document = []
    for item in document :
        item = item.lower()
        preprocessed_document.append(item) 
    # print(preprocessed_document)
    return preprocessed_document

def generate_fingerprints(file_name, k, t) :
    data = []
    f = open(file_name)
    data.append(f.read())
    
    preprocessed_data = preprocess(data)
    kgrams = generate_kgrams(preprocessed_data, k)
    document_fingerprints = winnowing(kgrams, k, t)
    return document_fingerprints
    # print("Document Fingerprints: ", document_fingerprints)
    

# fingerprints1 = generate_fingerprints("python_ex1.py", 2, 4)
# fingerprints2 = generate_fingerprints("python_ex2.py", 2, 4)

program1 = sys.argv[1]
program2 = sys.argv[2]

fingerprints1_0 = generate_fingerprints((program1+"_lev0.txt"), 11, 15)
fingerprints2_0 = generate_fingerprints((program2+"_lev0.txt"), 11, 15)

fingerprints1_1 = generate_fingerprints((program1+"_lev1.txt"), 11, 15)
fingerprints2_1 = generate_fingerprints((program2+"_lev1.txt"), 11, 15)

fingerprints1_2 = generate_fingerprints((program1+"_lev2.txt"), 11, 15)
fingerprints2_2 = generate_fingerprints((program2+"_lev2.txt"), 11, 15)

# print("Fingerprints for File1 : \n", fingerprints1)
# print("\n\nFingerprints for File2 : \n", fingerprints2)

cosine_similarity_lev0 = cosine_similarity(fingerprints1_0, fingerprints2_0)
cosine_similarity_lev1 = cosine_similarity(fingerprints1_1, fingerprints2_1)
cosine_similarity_lev2 = cosine_similarity(fingerprints1_2, fingerprints2_2)

print("Cosine similarity Level 0 : \n", cosine_similarity_lev0)
print("Cosine similarity Level 1 : \n", cosine_similarity_lev1)
print("Cosine similarity Level 2 : \n", cosine_similarity_lev2)

total_similarity_score = ((0.5*cosine_similarity_lev0) + (0.3*cosine_similarity_lev1) + (0.2*cosine_similarity_lev2))
print("Total similarity score : \n", total_similarity_score)
# Cosine similarity seems to be highest for k = 4 and t = 7, should try others.
# However , not convinced whether Cosine Similarity should be a measure to compare fingerprints.
