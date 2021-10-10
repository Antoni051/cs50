select title 
from movies join ratings ON ratings.movie_id = movies.id
where ratings.rating = 7;
