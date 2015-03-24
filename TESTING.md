# IN OUT #


```

school_solution < test1 > test1_school.out

my_solution < test1 > test1_my.out

diff test1_school.out test1_my.out

```
הפלט של  diff צריך להיות ריק !



# DIFF #
Synopsis: diff [options ](.md) from-file to-file
Some of what can [options](options.md) be:

**-b, --ignore-space-change
Ignore changes in amount of white space**

**-i, --ignore-case
Ignore changes in case; consider upper- and lower-case letters equivalent**

**-w, --ignore-all-space
Ignore white space when comparing lines**

**-y, --side-by-side
Use the side by side output format**

# TAR #
> כלי חזק מאד, אנחנו נשתמש באופן מאד בסיסי
> המטרה העיקרית:  ליצור ארכיון (קובץ בודד) ממספר קבצים, ולהפך, לפרוש ארכיון למספר קבצים
> מטרה נוספת: לקבץ (zip)

יצירת ארכיון:
```
tar czvf archive_name.tgz *.cc README
```
פרישת ארכיון:
```
tar xzvf archive_name.tgz 
```


  * x – exctract
  * c – create
  * z – zip
  * v – verbose
  * f - filename