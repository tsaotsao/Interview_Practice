from pyexpat import model
from tracemalloc import stop
import pandas as pd
import numpy as np
import warnings
warnings.filterwarnings('ignore')

print ('setosa')
from sklearn.datasets import load_iris
iris = load_iris()
df = pd.DataFrame(iris['data'], columns=iris['feature_names'])
df['target'] = iris['target']
df = df[['sepal length (cm)', 'petal width (cm)','target']]

df = df.iloc[0:100]

df.head()
print(df)


X = df.drop('target', axis=1)
y = df['target']
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y,
                                                   test_size=0.33, random_state=126)

from sklearn.neighbors import KNeighborsClassifier
from sklearn.preprocessing import StandardScaler
from sklearn.pipeline import make_pipeline
accs = []
for n in range(2,7):
    model_pl = make_pipeline(StandardScaler(), KNeighborsClassifier(n_neighbors=n))
    model_pl.fit(X_train, y_train)
    print(f'鄰居數{n}，整體正確率：{model_pl.score(X_test, y_test).round(2)}')
