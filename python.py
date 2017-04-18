import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt('random_walks.txt')
x = data[:,0]

plt.hist(x, bins = 50)
plt.show()
plt.savefig('rand.png')
