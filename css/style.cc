@import url('https://fonts.googleapis.com/css2?family=Courier+Prime:wght@400;700&family=VT323&display=swap');

* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

:root {
    --bg-color: #0a0a0a;
    --terminal-orange: #ff9a56;
    --border-color: #ff8566;
    --text-color: #ff9a56;
    --hover-color: #ffb380;
}

body {
    background-color: var(--bg-color);
    color: var(--text-color);
    font-family: 'Courier Prime', monospace;
    min-height: 100vh;
    display: flex;
    align-items: center;
    justify-content: center;
    padding: 20px;
}

.container {
    position: relative;
    width: 100%;
    max-width: 1400px;
    height: 90vh;
    min-height: 600px;
    border: 3px solid var(--border-color);
    border-radius: 15px;
    padding: 40px;
    box-shadow: 0 0 30px rgba(255, 133, 102, 0.4), inset 0 0 50px rgba(255, 154, 86, 0.05);
    background-color: rgba(10, 10, 10, 0.95);
}

/* Top Left - Profile Picture */
.top-left {
    position: absolute;
    top: 30px;
    left: 30px;
    z-index: 10;
}

.pfp-link {
    text-decoration: none;
    display: inline-block;
}

.pfp-circle {
    width: 80px;
    height: 80px;
    border-radius: 50%;
    border: 3px solid var(--border-color);
    overflow: hidden;
    background-color: #1a1a1a;
    transition: all 0.3s ease;
    box-shadow: 0 0 15px rgba(255, 154, 86, 0.5);
}

.pfp-circle:hover {
    border-color: var(--hover-color);
    box-shadow: 0 0 25px rgba(255, 154, 86, 0.7);
    transform: scale(1.05);
}

.pfp-circle img {
    width: 100%;
    height: 100%;
    object-fit: cover;
}

/* Top Right - Navigation */
.top-right {
    position: absolute;
    top: 40px;
    right: 40px;
    display: flex;
    align-items: center;
    gap: 10px;
    font-size: 18px;
    font-weight: bold;
    z-index: 10;
}

.top-right a {
    color: var(--text-color);
    text-decoration: none;
    transition: all 0.3s ease;
    position: relative;
}

.top-right a::after {
    content: '';
    position: absolute;
    bottom: -5px;
    left: 0;
    width: 0;
    height: 2px;
    background-color: var(--hover-color);
    transition: width 0.3s ease;
}

.top-right a:hover {
    color: var(--hover-color);
    text-shadow: 0 0 10px rgba(255, 154, 86, 0.8);
}

.top-right a:hover::after {
    width: 100%;
}

.separator {
    color: var(--border-color);
    opacity: 0.6;
}

/* Center Content */
.center-content {
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
    text-align: center;
}

.main-name {
    font-size: 120px;
    font-family: 'VT323', monospace;
    letter-spacing: 8px;
    color: var(--text-color);
    text-shadow: 0 0 20px rgba(255, 154, 86, 0.6), 0 0 40px rgba(255, 154, 86, 0.3);
    animation: glow 2s ease-in-out infinite alternate;
    margin-bottom: 20px;
}

.subtitle {
    font-size: 20px;
    color: var(--text-color);
    opacity: 0.8;
    letter-spacing: 2px;
}

@keyframes glow {
    from {
        text-shadow: 0 0 20px rgba(255, 154, 86, 0.6), 0 0 40px rgba(255, 154, 86, 0.3);
    }
    to {
        text-shadow: 0 0 30px rgba(255, 154, 86, 0.9), 0 0 50px rgba(255, 154, 86, 0.5);
    }
}

/* Bottom Center - Social Links */
.bottom-center {
    position: absolute;
    bottom: 40px;
    left: 50%;
    transform: translateX(-50%);
}

.social-links {
    display: flex;
    gap: 60px;
    align-items: center;
}

.social-item {
    display: flex;
    flex-direction: column;
    align-items: center;
    text-decoration: none;
    color: var(--text-color);
    transition: all 0.3s ease;
    gap: 10px;
}

.social-icon {
    width: 50px;
    height: 50px;
    border: 2px solid var(--border-color);
    border-radius: 50%;
    display: flex;
    align-items: center;
    justify-content: center;
    padding: 12px;
    transition: all 0.3s ease;
    background-color: rgba(255, 154, 86, 0.1);
}

.social-icon svg {
    width: 26px;
    height: 26px;
    color: var(--text-color);
    fill: var(--text-color);
}

.social-item span {
    font-size: 16px;
    font-weight: bold;
    letter-spacing: 1px;
    color: var(--text-color);
}

.social-item:hover {
    color: var(--hover-color);
    transform: translateY(-5px);
}

.social-item:hover .social-icon {
    border-color: var(--hover-color);
    background-color: rgba(255, 154, 86, 0.2);
    box-shadow: 0 0 20px rgba(255, 154, 86, 0.5);
}

.social-item:hover .social-icon svg {
    color: var(--hover-color);
    fill: var(--hover-color);
}

/* Page Content Styles (for blog, project, etc. pages) */
.page-container {
    max-width: 1200px;
    margin: 0 auto;
    padding: 40px 20px;
}

.page-header {
    text-align: center;
    margin-bottom: 50px;
    padding-bottom: 30px;
    border-bottom: 2px solid var(--border-color);
}

.page-header h1 {
    font-size: 60px;
    font-family: 'VT323', monospace;
    letter-spacing: 4px;
    color: var(--text-color);
    text-shadow: 0 0 15px rgba(255, 154, 86, 0.5);
    margin-bottom: 15px;
}

.page-header p {
    font-size: 18px;
    opacity: 0.8;
    color: var(--text-color);
}

.back-link {
    display: inline-block;
    margin-bottom: 30px;
    color: var(--text-color);
    text-decoration: none;
    font-size: 18px;
    transition: all 0.3s ease;
}

.back-link:hover {
    color: var(--hover-color);
    text-shadow: 0 0 10px rgba(255, 154, 86, 0.5);
}

.back-link::before {
    content: '← ';
}

.content-section {
    background-color: rgba(255, 154, 86, 0.05);
    border: 2px solid var(--border-color);
    border-radius: 10px;
    padding: 30px;
    margin-bottom: 30px;
}

.content-section h2 {
    font-size: 32px;
    margin-bottom: 20px;
    color: var(--text-color);
}

.content-section p {
    line-height: 1.8;
    font-size: 16px;
    opacity: 0.9;
    color: var(--text-color);
}

/* Responsive Design */
@media (max-width: 1024px) {
    .main-name {
        font-size: 80px;
    }
    
    .top-right {
        font-size: 14px;
        gap: 8px;
    }
}

@media (max-width: 768px) {
    .container {
        padding: 20px;
        height: auto;
        min-height: 100vh;
    }
    
    .top-left {
        top: 20px;
        left: 20px;
    }
    
    .top-right {
        position: relative;
        top: auto;
        right: auto;
        width: 100%;
        justify-content: center;
        flex-wrap: wrap;
        margin-top: 80px;
        font-size: 14px;
    }
    
    .center-content {
        position: relative;
        top: auto;
        left: auto;
        transform: none;
        margin-top: 40px;
    }
    
    .main-name {
        font-size: 60px;
        letter-spacing: 4px;
    }
    
    .subtitle {
        font-size: 16px;
    }
    
    .pfp-circle {
        width: 60px;
        height: 60px;
    }
    
    .bottom-center {
        position: relative;
        bottom: auto;
        left: auto;
        transform: none;
        margin-top: 60px;
        margin-bottom: 20px;
    }
    
    .social-links {
        gap: 40px;
    }
    
    .social-icon {
        width: 40px;
        height: 40px;
        padding: 10px;
    }
    
    .social-icon svg {
        width: 20px;
        height: 20px;
    }
}

@media (max-width: 480px) {
    .main-name {
        font-size: 48px;
    }
    
    .separator {
        display: none;
    }
    
    .top-right a {
        font-size: 12px;
    }
    
    .social-links {
        gap: 30px;
    }
}