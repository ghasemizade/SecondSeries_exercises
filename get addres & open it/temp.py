import os

for root, dirs, files in os.walk(".txt"):
    for filename in files:
        os.startfile(filename)