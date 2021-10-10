select title, rating From
movies join ratings on movies.id = ratings.movie_id
where year = 2010
order by rating desc,title
