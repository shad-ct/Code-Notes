# bootstrap

# links 

--CSS
    <link rel="stylesheet" href="css/bootstrap.css" >
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap-icons@1.11.3/font/bootstrap-icons.min.css">
--JS
    <script src="https://code.jquery.com/jquery-3.2.1.slim.min.js" integrity="sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN" crossorigin="anonymous"></script>
    <script src="/js/bootstrap.js"></script>


# Container 
    class ="container"

    # container-fluid ==> 100% width 

    # container breakpoints 
    eg : .container-sm-12
    
            .container-sm
            .container-md
            .container-lg
            .container-xl
            .container-xxl


# Grid 
    *Total 12 columns 
    .col-sm (blah blah)

    .row {
        <col-1>
        <col-sm-4>
    }


# Text Class
    text-center 
    3 in one : 
                text-start 
                text-md-center
                text-xl-end
    text-uppercase/lowercase/capitalize=====> make 1st letter capital 


# Alerts 
    
    .alert alert-primary/secondary role="alert"
    to close : class="btn-close" data-bs-dismiss="alert" 
    
# Collapse 

    btn ==> class ="btn btn-warning" data-bas-toggle="collapse" type="button" 
    ** To targeted id : data-bs-target="#id"
    div class="collapse" 

# Cards
    .card
        .card-body
            .card-title
                .card-text
                .card-img-top
    
# padding 
    class = "p-2"

# size : display-1