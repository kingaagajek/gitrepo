<?php if(!defined('IN_GS')){ die('you cannot load this page directly.'); } ?>
<?php include('header.inc.php'); ?>

   <div class="container">
      <div class="row">
         <div class="col-md-8">
            <section class="my-4">
               <h2>Aktualności</h2>
               <ul class="list-group">
                  <li class="list-group-item mb-2">
                     <a href="<?php get_theme_url(); ?>/images/news.png">
                        <img src="<?php get_theme_url(); ?>/images/news.png" class="rounded float-left" width="100">
                     </a>
                     Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.
                  </li>
                  <li class="list-group-item mb-2">
                     <a href="<?php get_theme_url(); ?>/images/news.png">
                        <img src="<?php get_theme_url(); ?>/images/news.png" class="rounded float-left img-fluid" width="100">
                     </a>
                     Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</li>
               </ul>
            </section>
         </div>
         <div class="col-md-4">
<?php include('aside.php'); ?>
         </div>
      </div>
   </div>
<?php include('footer.inc.php'); ?>
   <!-- jQuery library -->
   <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
   <!-- Popper JS -->
   <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js"></script>
   <!-- Latest compiled JavaScript -->
   <script src="https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js"></script>
</body>

</html>
