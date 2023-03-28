#Paul van Sittert 21.3.23
import string


s = """Imagine a vast sheet of paper on which straight Lines, Triangles, Squares, Pentagons, Hexagons, and other figures, instead of remaining fixed in their places, move freely about, on or in the surface, but without the power of rising above or sinking below it, very much like shadows - only hard and with luminous edges - and you will then have a pretty correct notion of my country and countrymen. Alas, a few years ago, I should have said "my universe": but now my mind has been opened to higher views of things."""

s_lower = s.lower()

words = s_lower.split()

punctuation_list  =  list(string.punctuation)

w_clean = list()

for x in words:
    if len(x)==0:
        continue
    elif len(x)==1:
        if x in punctuation_list:
            continue

    if x[0] in punctuation_list:
        x = (x[1:len(x)])

    if x[len(x)-1] in punctuation_list:
        x = (x[0:len(x)-1])

    w_clean.append(x)

print(w_clean)
print("Cleaned Words = ", len(w_clean))
clean_uniqueWords = set()
clean_uniqueWords.update(w_clean)
print("Cleaned Unique Words = ", len(clean_uniqueWords))

clean_word_freq = dict()

for x in w_clean:
    if x in clean_word_freq:
        clean_word_freq[x] +=1
    else:
        clean_word_freq[x] = 1

print(clean_word_freq)