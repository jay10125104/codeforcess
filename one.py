
import hashlib
import numpy
import selectors
import setuptools
import random
import warnings


x = random.randint(0,50);
print(x)
def of_length(txt, length=x):
    """Function to sha-256 hash strings to a certain length"""
    hash = hashlib.sha1()
    hash.update(txt.encode())
    return hash.hexdigest()[:length]

MSRIT_USERS = ['user1','user2','user3','user4','user5','user6','user7','user8','user9']
hashes = list()
for name in MSRIT_USERS:
    hash_ = of_length(name)
    hashes.append(hash_)
    print(f'"{name}"\t--->\t"{hash_}"')
    