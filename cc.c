<?php 
	
	session_start();

	$products = $_SESSION['products'];

	if( isset( $_POST['product_id'] ) ){

		$product_id = $_POST['product_id'];

		unset( $_SESSION['products'][ $product_id ] );
	}
?>


<!DOCTYPE html>

<html lang="en">

<head>

  	<title>Bootstrap Example</title>

  	<meta charset="utf-8">

  	<meta name="viewport" content="width=device-width, initial-scale=1">

  	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">

</head>


<body>

	<div class="container">
  		
  		<h2>Bordered Table</h2>
  		
  		<p>The .table-bordered class adds borders to a table:</p>     <br>       
  		
  		<table class="table table-bordered">

    		<thead>

      			<tr>

        			<th> Item </th>

			        <th> Price </th>

			        <th> Quantity </th>

			        <th> Total </th>

			        <th>  </th>

			    </tr>

		    </thead>

		    <tbody>

      			<?php 

      				$i = 0;

      				foreach ( $products as $product ) { 	?>


					<tr>

				        <td><?php echo $product['main_food'] ?></td>

				        <td>12$</td>

				        <td width="2%"> <input type="number" name="form-control" value="1"> </td>

				        <td>john@example.com</td>

				        <td width="1%">
				        	<button type="button" class="btn btn-default btn-sm remove_button" id="remove_<?php echo $i; ?>">
					          <span class="glyphicon glyphicon-remove"  style="color:RED"></span>  
					        </button>

				        </td>

	      			</tr>

				<?php      				
      					
						$i++;

      				}
      			?>
     

    		</tbody>

  		</table>


  		<div>
	  		
	  		
  			<form method="get" action="checkout.php">
  				
  				<button type="submit" class="btn btn-success pull-right"> 

  					Procced to checkout  <span class="glyphicon glyphicon-chevron-right"></span> 

	  			</button>	

  			</form>


	  		<form method="get" action="">
	  			
	  			<button type="submit" class="btn btn-warning pull-left">  

	  				<span class="glyphicon glyphicon-chevron-left"></span> Continue shopping 

	  			</button>	

	  		</form>	

  		</div>


  		<div class="col-md-4 col-md-offset-8" style="padding-top: 30px; padding-right: 0"> 
  			
  			<table class="table">
				  
				  <tr>
			        <td colspan="2" align="center" style="background-color: #f0ad4e; color: #FFF"> CART TOTALS </td>
			      </tr>

			      <tr>
			        <th style="background-color: #f6f6f6">Cart Subtotal</td>
			        <td>$12.00</td>
			      </tr>
			   
			      <tr>
			        <th style="background-color: #f6f6f6">Shipping and Handling</td>
			        <td>Free Shipping</td>
			      </tr>
			   
			      <tr>
			        <th style="background-color: #f6f6f6">Order Total</td>
			        <td>12$</td>
			      </tr>

			      <tr><td></td><td></td></tr>

			</table>

  		</div>


	</div>

</body>

	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>

	<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>

</html>




<script type="text/javascript">
	

	$(document).ready( function(){

		$(".remove_button").click( function(){

			$(this).parent().parent().remove();

			var id = $(this).attr("id");

			id = id.replace("remove_", "");

		 	$.ajax({

                    type: "post",

                    data: { 
                    		"product_id": id,
                    },

                    success: function( responce ){
                		
                		console.log( responce );
                	}
        	});
		});
	});
</script>
