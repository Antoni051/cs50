s = input("Do you agree? ")
print("Respond using Y or N")

if s.lower() in ["y", "yes"]:
    print("Agreed.")
else:
    print("Disagreed.")