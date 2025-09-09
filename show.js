const movies = [
  {
    title: "Avengers: Endgame",
    image: "https://m.media-amazon.com/images/I/81ExhpBEbHL._AC_UF894,1000_QL80_.jpg"
  },
  {
    title: "Oppenheimer",
    image: "https://m.media-amazon.com/images/I/81OBSHM6RgL._AC_UF894,1000_QL80_.jpg"
  },
  {
    title: "RRR",
    image: "https://m.media-amazon.com/images/I/81oRzYy6kXL._AC_UF894,1000_QL80_.jpg"
  },
  {
    title: "Spider-Man: No Way Home",
    image: "https://m.media-amazon.com/images/I/81F%2BGkJ2UUL._AC_UF894,1000_QL80_.jpg"
  }
];

const movieList = document.getElementById("movieList");

// Show all movie cards
function displayMovies(filter = "") {
  movieList.innerHTML = "";

  const filtered = movies.filter(movie => 
    movie.title.toLowerCase().includes(filter.toLowerCase())
  );

  filtered.forEach(movie => {
    const card = document.createElement("div");
    card.className = "movie-card";

    card.innerHTML = `
      <img src="${movie.image}" alt="${movie.title}" />
      <div class="details">
        <h3>${movie.title}</h3>
        <button onclick="bookNow('${movie.title}')">Book Now</button>
      </div>
    `;

    movieList.appendChild(card);
  });
}

function bookNow(title) {
  alert(`Tickets for "${title}" booked! 🎟️`);
}

// Search functionality
document.getElementById("searchInput").addEventListener("input", (e) => {
  displayMovies(e.target.value);
});

// Initial render
displayMovies();
