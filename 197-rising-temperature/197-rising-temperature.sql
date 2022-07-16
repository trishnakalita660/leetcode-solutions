# Write your MySQL query statement below
select Weather.id from Weather
join weather w on datediff(weather.recordDate, w.recordDate) =1 and weather.Temperature > w.Temperature