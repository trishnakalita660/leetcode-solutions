# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
delete a from Person a
join Person b on a.email = b.email
where a.id>b.id;