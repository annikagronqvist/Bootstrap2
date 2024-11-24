<!DOCTYPE html>
<html lang="sv">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bootstrap Övning</title>
    
    <!-- Länk till Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css" rel="stylesheet">
    
    <!-- Länk till din egen CSS-fil -->
    <link rel="stylesheet" href="css/style.css">
</head>
<body>

    <!-- Navbar -->
    <nav class="navbar navbar-expand-lg bg-body-tertiary">
        <div class="container-fluid">
            <!-- Företagets namn, håller sig till vänster -->
            <a class="navbar-brand" href="#">Företag Oy Ab</a>

            <!-- Navbar rubriker, ordnas vertikalt på små skärmar -->
            <div class="navbar-nav ms-auto d-flex flex-column flex-lg-row">
                <a class="nav-link active" aria-current="page" href="#">Framsidan</a>
                <a class="nav-link" href="#">Om företaget</a>
                <a class="nav-link" href="#">Tjänster</a>
                <a class="nav-link disabled" aria-disabled="true" href="#">Kontakt</a>
            </div>
        </div>
    </nav>

    <!-- Huvudinnehåll -->
    <div class="container mt-5">
        <div class="row">
            <div class="col">
                <h1>Hemsidans huvudrubrik</h1>
                <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.</p>
            </div>
        </div>
    </div>

    <!-- Bildsektion -->
    <div class="container mt-5">
        <div class="row">
            <div class="col-md-4">
                <img src="img/bild1.jpg" class="img-fluid" alt="Bild 1">
                <h2>Här kommer en rubrik</h2>
                <p>Här kommer lite innehåll</p>
            </div>
            <div class="col-md-4">
                <img src="img/bild2.jpg" class="img-fluid" alt="Bild 2">
                <h2>Här kommer en rubrik</h2>
                <p>Här kommer lite innehåll</p>
            </div>
            <div class="col-md-4">
                <img src="img/bild3.jpg" class="img-fluid" alt="Bild 3">
                <h2>Här kommer en rubrik</h2>
                <p>Här kommer lite innehåll</p>
            </div>
        </div>
    </div>

    <!-- Länk till Bootstrap JS -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>

</body>
</html>