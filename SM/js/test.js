document.addEventListener("DOMContentLoaded", function () {
    let headings = document.querySelectorAll("p"); // Select all <p> tags

    headings.forEach(heading => {
        heading.addEventListener("click", function () {
            let nextOl = this.nextElementSibling; // Get the next sibling <ol>
            
            if (nextOl && nextOl.tagName === "OL") {
                nextOl.style.display = nextOl.style.display === "none" ? "block" : "none"; // Toggle display
            }
        });
    });
});
