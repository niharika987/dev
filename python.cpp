from datetime import datetime
for i in range(0,int(input())):
  day=['monday','tuesday','wednesday','thursday','friday','saturday','sunday']
  year=int(input())
  today = datetime(year,1,1)
  print(day[today.weekday()]) 
