from datetime import datetime
x=int(input())
for i in range(0,x):
  dayy=['monday','tuesday','wednesday','thursday','friday','saturday','sunday']
  year=int(input())
  tday = datetime(year,1,1)
  print(day[tday.weekday()]) 
