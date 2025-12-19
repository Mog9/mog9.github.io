/* Terminal Theme CSS */
:root {
    --bg-color: #0d0d0d;
    --terminal-orange: #ffb347; /* Warm orange from your template */
    --font-mono: 'Courier New', Courier, monospace;
}

* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    background-color: var(--bg-color);
    color: var(--terminal-orange);
    font-family: var(--font-mono);
    height: 100vh;
    display: flex;
    flex-direction: column;
    justify-content: space-between;
    overflow: hidden; /* Keeps it to a single terminal screen */
    border: 10px solid #1a1a1a; /* Subtle frame effect */
}

/* Navbar */
.navbar {
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 2rem 4rem;
}

.pfp-circle {
    width: 60px;
    height: 60px;
    border-radius: 50%;
    border: 2px solid var(--terminal-orange);
    overflow: hidden;
    background: #222;
    transition: transform 0.3s ease;
}

.pfp-circle:hover {
    transform: scale(1.1);
}

.pfp-circle img {
    width: 100%;
    height: 100%;
    object-fit: cover;
}

.nav-right a {
    color: var(--terminal-orange);
    text-decoration: none;
    margin-left: 2rem;
    font-weight: bold;
    font-size: 0.9rem;
    letter-spacing: 1px;
}

.nav-right a:hover {
    text-decoration: underline;
    text-shadow: 0 0 8px var(--terminal-orange);
}

/* Hero Section */
.hero {
    text-align: center;
}

.hero h1 {
    font-size: 5rem;
    letter-spacing: 10px;
    margin-bottom: 0.5rem;
    text-transform: uppercase;
}

.subtitle {
    font-size: 1.2rem;
    opacity: 0.8;
}

/* Socials Footer */
.socials {
    display: flex;
    justify-content: center;
    gap: 3rem;
    padding-bottom: 4rem;
}

.social-item a {
    color: var(--terminal-orange);
    text-decoration: none;
    display: flex;
    flex-direction: column;
    align-items: center;
    gap: 10px;
}

.social-item i {
    font-size: 2.5rem;
}

.social-item span {
    font-size: 0.8rem;
    text-transform: uppercase;
}

.social-item a:hover {
    text-shadow: 0 0 10px var(--terminal-orange);
    transform: translateY(-3px);
    transition: all 0.2s ease;
}

/* Responsive for Mobile */
@media (max-width: 768px) {
    .navbar {
        flex-direction: column;
        gap: 20px;
        padding: 1rem;
    }
    .nav-right a {
        margin: 0 10px;
        font-size: 0.7rem;
    }
    .hero h1 {
        font-size: 3rem;
    }
}