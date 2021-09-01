scores = []

for i in range(3):
    scores.append(int(input(f"Enter Score {i+1} ")))

print("Average " + str(sum(scores) / len(scores)) )