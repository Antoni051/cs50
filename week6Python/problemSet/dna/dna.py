import csv
from genericpath import isfile
from sys import argv


def num_matches(base_string, to_find):
    number = base_string.count(to_find)
    return number


def read_database(database_path):
    database = []
    with open(database_path) as file:
        csv_reader = csv.reader(file)
        header = next(csv_reader)
        for row in csv_reader:
            database.append(row)
    header.remove("name")

    return database, header


def read_files(database_path: str, seq_path: str):
    data = read_database(database_path)
    header = data[1]
    with open(seq_path, 'r') as file:
        sequence = file.read()

    dict_str = {}

    for unique_str in range(len(header)):
        dict_str[header[unique_str]] = 0

    for dna_strings, number in dict_str.items():
        number = num_matches(sequence, dna_strings)
        dict_str[dna_strings] = number

    return dict_str


# too much pain
def match_person(person, database_path):
    data = read_database(database_path)
    people, header = data
    lst_person = []
    for i in person.values():
        lst_person.append(i)
    for j in range(len(lst_person)):
        lst_person[j] = str(lst_person[j])
    for elements in people:
        name = elements[0]
        elements.pop(0)
        if elements == lst_person:
            return name


def main():
    verify()
    database_path = argv[1]
    sequence_path = argv[2]

    person = read_files(database_path, sequence_path)
    print(match_person(person, database_path))


def verify():
    # verify it has the required arguments
    if len(argv) != 3:
        exit("Usage: python3 dna.py database.csv sequence.txt")
    # verify the files exist
    if isfile(argv[1]) is not True or isfile(argv[2]) is not True:
        exit("Paths to database or sequence are incorrect")


if __name__ == "__main__":
    main()
