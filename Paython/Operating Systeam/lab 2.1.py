processes = [
    ('P1', 10, 3),
    ('P2', 1, 1),
    ('P3', 2, 4),
    ('P4', 1, 5),
    ('P5', 5, 2)
]

sorted_processes = sorted(processes, key=lambda x: x[2])

print("Processes sorted by priority:")
print("Process  Burst Time  Priority  CT   TT     WT")

CT = []
TT = []
WT = []
Arrival = 0
CTsum = 0
for process in sorted_processes:
    CTsum += process[1]
    CT.append(CTsum)

    turnaround_time = CTsum - Arrival
    TT.append(turnaround_time)

    waiting_time = turnaround_time - process[1]
    WT.append(waiting_time)
    print(
        f"{process[0]}       {process[1]}           {process[2]}         {CTsum}    {turnaround_time}      {waiting_time}")

avg_WT = sum(WT) / len(WT)
avg_TT = sum(TT) / len(TT)
