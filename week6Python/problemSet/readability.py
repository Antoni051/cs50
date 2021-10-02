import string

def main():
    text = input("Insert Text: ")
    length = len(text)
    letters = letterCount(text, length)
    words = wordCount(text)
    sentences = sentenceCount(text,length)

    lettersPer100 = (letters / words) * 100
    sentencesPer100 = (sentences / words) * 100

    index = round(0.0588 * lettersPer100 - 0.296 * sentencesPer100)

    if index <= 1:
        print("Before grade 1")
    elif index >=16:
        print("16+")
    else:
        print(f"Grade {index}")

def letterCount(text, len):
    count = 0
    for i in range(0, len):
        if str.isalpha(text[i]) == True:
            count += 1
    return count

def wordCount(text):
    list = text.split()
    count = len(list)
    return count

def sentenceCount(text, len):
    count = 0
    for i in range(0, len):
        x = text[i]
        if x == "." or x == "?" or x == "!":
            count+=1
    return count

main()