# Write your MySQL query statement below

select  date_id,make_name, count(distinct(lead_id)) as unique_leads,
count(distinct(partner_id)) as unique_partners from DailySales
group by date_id, make_name
;



# {"headers": ["date_id", "make_name", "lead_id", "unique_leads", "unique_partners"], "values": [["2020-12-07", "honda", 0, 3, 2], ["2020-12-07", "toyota", 0, 1, 2], ["2020-12-08", "honda", 1, 2, 2], ["2020-12-08", "toyota", 0, 2, 3]]}

# {"headers": ["date_id", "make_name", "unique_leads", "unique_partners"], "values": [["2020-12-07", "honda", 3, 2], ["2020-12-07", "toyota", 1, 2], ["2020-12-08", "honda", 2, 2], ["2020-12-08", "toyota", 2, 3]]}