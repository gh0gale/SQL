# Write your MySQL query statement below
SELECT DISTINCT(activity_date) AS day,COUNT(DISTINCT(user_id)) AS active_users
FROM Activity
WHERE (activity_date,user_id) IN (
    SELECT activity_date,user_id
    FROM Activity
    WHERE activity_type != ' '
    AND activity_date BETWEEN '2019-06-28' AND '2019-07-28'
)
GROUP BY day