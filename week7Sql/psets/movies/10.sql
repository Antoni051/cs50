select name from people where id  in
(select directors.person_id 
from directors join movies ON movies.id = directors.movie_id
where id in (select movie_id from ratings where rating >= "9.0"));
