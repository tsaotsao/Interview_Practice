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
df = df[['sepal width (cm)', 'petal length (cm)','target']]

df = df.iloc[0:]

df.head()
print(df)


X = df.drop('target', axis=1)
y = df['target']
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y,
                                                   test_size=0.49, random_state=50)

from sklearn.neighbors import KNeighborsClassifier
model = KNeighborsClassifier()
model.fit(X_train, y_train)
print(model.score(X_test, y_test))

from sklearn.preprocessing import StandardScaler
from sklearn.pipeline import make_pipeline
accs = []
for n in range(2,7):
    model_pl = make_pipeline(StandardScaler(), KNeighborsClassifier(n_neighbors=n))
    model_pl.fit(X_train, y_train)
    print(f'鄰居數{n}，整體正確率：{model_pl.score(X_test, y_test).round(2)}')

from sklearn.metrics import confusion_matrix, accuracy_score, classification_report
y_pred = model.predict(X_test)
confmat = confusion_matrix(y_test, y_pred)
print("Accurancy: ", accuracy_score(y_test, y_pred))
print("Confusion Matrix:", confmat)
print("classification report: ", classification_report(y_test, y_pred))

import matplotlib.pyplot as plt
fig, ax = plt.subplots(figsize = (2.5, 2.5))
ax.matshow(confmat, cmap=plt.cm.Blues, alpha=0.3)
for i in range(confmat.shape[0]):
    for j in range(confmat.shape[1]):
        ax.text(x=j,y=i,s=confmat[i, j], va='center', ha='center')
plt.xlabel('predicted label')
plt.ylabel('true label')
plt.show()


def plot_decision_boundary(X_test, y_test, model, debug=False):
    points = 500
    x1_max, x2_max = X_test.max()
    x1_min, x2_min = X_test.min()

    X1, X2 = np.meshgrid(np.linspace(x1_min-0.1, x1_max+0.1, points),
                        np.linspace(x2_min-0.1, x2_max+0.1, points))
    x1_label, x2_label = X_test.columns
    fig, ax = plt.subplots()
    X_test.plot(kind='scatter', x=x1_label, y=x2_label, c=y_test, cmap='coolwarm',
                colorbar=False, figsize=(6,4), s=30, ax=ax)
    grids = np.array(list(zip(X1.ravel(), X2.ravel())))
    ax.contourf(X1, X2, model.predict(grids).reshape(X1.shape), alpha=0.3,
               cmap='coolwarm')
    if debug:
        df_debug = X_test.copy()
        df_debug['y_test'] = y_test
        y_pred = model.predict(X_test)
        df_debug['y_pred'] = y_pred
        df_debug = df_debug[y_pred != y_test]
        df_debug.plot(kind='scatter', x=x1_label, y=x2_label,
                      s=50,  color='none', edgecolor='y', ax=ax)
        for i in df_debug.index:
            ax.text(s=df_debug.loc[i,'y_test'], x=df_debug.loc[i, x1_label]+0.01,
                       y=df_debug.loc[i, x2_label]-0.05)
    plt.show()

plot_decision_boundary(X_test, y_test, model, True)