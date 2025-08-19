import matplotlib.pyplot as plt

# Replace these with the actual values you get from running your C program
n_values = [10, 50, 100, 500, 1000, 3000, 5000, 6000, 8000]   # 9 elements
time_values = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.000007, 0.000006, 0.000021]  # 9 elements

plt.figure(figsize=(8,6))
plt.plot(n_values, time_values, marker='o', linestyle='-', linewidth=2)

plt.title("Linear Search: Time vs Number of Elements (n)")
plt.xlabel("Number of Elements (n)")
plt.ylabel("Time Taken (seconds)")
plt.grid(True)

# Show plot
plt.show()
