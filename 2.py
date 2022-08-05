from datetime import date
 
# Function to find number of days
def numOfDays(date1, date2):
    return (date2-date1).days
     
d,m,y= input("Enter date-1 : ").split()
date1 = date( int(y), int(m), int(d))

d,m,y= input("Enter date-2 : ").split()
date2= date( int(y), int(m), int(d))

ans = numOfDays(date1,date2)
if ans>0:
    print(ans, "days");
else:
    print(-ans, "days")
