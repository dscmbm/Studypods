#!/usr/bin/env python
# coding: utf-8

# In[1]:


import pandas as pd
import numpy as np
import seaborn as sns
from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt


# In[2]:


df= pd.read_csv("CO2 Emissions_Canada.csv")
df.columns


# In[3]:


y = df[['CO2 Emissions(g/km)']]
x = df[[ 'Engine Size(L)', 'Cylinders','Fuel Consumption Comb (mpg)']]
x


# In[4]:


#x.hist(bins= 15 ,color='green',edgecolor = 'black',linewidth = 1.0)


# In[5]:


from sklearn.model_selection import train_test_split
xtrain,xtest,ytrain,ytest = train_test_split(x,y,test_size =1/3,random_state = 0)


# In[6]:


lg = LinearRegression()
lg.fit(xtrain,ytrain)


# In[7]:


ytrain


# In[8]:


y_pred = lg.predict(xtest)


# In[9]:


y_pred 


# In[10]:


ytest


# In[ ]:


y_pred_2 = lg.predict()


# In[ ]:




