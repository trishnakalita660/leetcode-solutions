# Write your MySQL query statement below
select firstName, lastName, b.city, b.state from Person
 left  join Address b on Person.personId = b.personId ;