# Searching via input : 

```
movies.map(
  (movie) =>
    movie.title.toLowerCase().startsWith(searchQuery) && (
      <MovieCard movie={movie} key={movie.id} />
    )
)
```

here baed on the input "searchquery" shows the MovieCard.
