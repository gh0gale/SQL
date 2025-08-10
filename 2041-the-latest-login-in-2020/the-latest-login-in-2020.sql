# Write your MySQL query statement below
SELECT user_id,MAX(time_stamp) as last_stamp
FROM Logins
WHERE LEFT(time_stamp,4) = '2020'
GROUP BY user_id;