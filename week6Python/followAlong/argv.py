from sys import argv

if len(argv) == 2:
    print(f"Hello , {argv[1]}")
else:
    print("Hello World")

# OR

for arg in argv:
    print(arg)