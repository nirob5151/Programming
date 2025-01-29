
processes = [
    ('P1', 10, 3),
    ('P2', 1, 1),
    ('P3', 2, 4),
    ('P4', 1, 5),
    ('P5', 5, 2)
]

sorted_processes = sorted(processes, key=lambda x: x[2])

print("Processes sorted by priority:")
print("Process  Burst Time  Priority")
for process in sorted_processes:
    print(f"{process[0]} {process[1]} {process[2]}")
