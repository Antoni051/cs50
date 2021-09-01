people = {
    "Brian": "682346892346892",
    "David": "043920749230497",
    "John": "092384808704328"
}

#using a dictionary datasturcture = assosciative array
#lookup time of O(n)

name = input("Name: ")
if name in people:
    number = people[name]
    print(f"Number: {number}")