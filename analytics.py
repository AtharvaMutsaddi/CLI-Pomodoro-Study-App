import pandas as pd
import matplotlib.pyplot as plt
data= pd.read_csv("feedback.csv")
# print(data)
Gcount=0
Acount=0
Bcount=0
for x in data['Rating']:
    if(x=='G'):
        Gcount+=1
    elif(x=='B'):
        Bcount+=1
    elif(x=='A'):
        Acount+=1
countarr=[Gcount, Bcount, Acount]
plt.bar(['Good', 'Bad', 'Average'], countarr)
plt.title("Your Analytics")
plt.ylabel("Count")
plt.show()