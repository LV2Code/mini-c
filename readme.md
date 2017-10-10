<?php 

	session_start();

	// echo "<pre>";

	$proudcts_in_cart = count( $_SESSION['products'] );
?>


<!DOCTYPE html>
<!--[if IE 8 ]><html class="ie" xmlns="http://www.w3.org/1999/xhtml" xml:lang="en-US" lang="en-US"> <![endif]-->
<!--[if (gte IE 9)|!(IE)]><!--><html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en-US" lang="en-US"><!--<![endif]-->
<head>
    <!-- Basic Page Needs -->
    <meta charset="utf-8">
    <!--[if IE]><meta http-equiv='X-UA-Compatible' content='IE=edge,chrome=1'><![endif]-->
    <title>Menu -  Order Online</title>

    <!-- Mobile Specific Metas -->
    <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">

    <!-- Bootstrap  -->
    <link rel="stylesheet" type="text/css" href="css/bootstrap.css" >

    <!-- Theme Style -->
    <link rel="stylesheet" type="text/css" href="css/style.css">

    <!-- Responsive -->
    <link rel="stylesheet" type="text/css" href="css/responsive.css">
    <link rel="stylesheet" type="text/css" href="css/jquery.datetimepicker.css">

    <!-- Colors -->
    <link rel="stylesheet" type="text/css" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">
    <link rel="stylesheet" type="text/css" href="css/color1.css" id="colors">
    <link rel="stylesheet" type="text/css" href="css/shortcode.css" id="colors">
	<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/limonte-sweetalert2/6.10.1/sweetalert2.min.css" />

    <!-- Animation Style -->
    <link rel="stylesheet" type="text/css" href="css/animate.css">


    <style type="text/css">
    	
    	.hover { 

    			border: 2px solid #2ecc71;
    	 }

    	 .hover div div h6 a{

    	 	color: RED;
    	 }

    	 img{

    	 	margin-top: 0px !important;
    	 }

    	 li{

    	 	overflow: hidden;
    	 }

    </style>

    <!--[if lt IE 9]>165.234Daress123$
        <script src="javascript/html5shiv.js"></script>
        <script src="javascript/respond.min.js"></script>
        <![endif]-->
    </head>    

    <body class=""> 
        
        <div class="box">


<!-- Flat Tab-->
        <section class="flat-row flat-tab-menu menu-2">
            <div class="container">
                <div class="row">
                   
                </div><!--/.row-->

                <div class="row">
                    <div class="col-md-9 flat-tabs ">
                        <div class="bg-tabs">
                            <div class="title-section style1 martp-0px">
							<h1 class="title marbt-33px ">Order Online</h1>
                                <div class="top-section">
                                
                                 </div>
                                    
                            </div>
                      

                            <ul class="menu-tab">
                                <li class="active"><a href="javascript:;">Customize your own</a></li>
                                <li><a href="javascript:;">Tonics </a></li>
                                <li><a href="javascript:;">Ready to Roll </a></li>
                                <li><a href="javascript:;">Espresso Herbal </a></li>

                            </ul>

                           

                        </div><!--/.bg-tabs-->
                        

                        <div class="content-tab">
						

                            <div class="content-inner">
								<p align="center"><strong>$12 Create your own fresh take on good, healthy food. 6 Step to Nirvana</strong></p>
								<div class="flat-divider d35px"></div>
								<div class="col-md-12">
									<h1 class="phone">1. START GOOD</h1>
									
								</div>
								<div class="main_food">
									<div class="col-md-3">
	                                    <ul class="menu-fd">
	                                        <li>
	                                            <div class="media-wrap">
	                                                <a href="javascript:;" class="pull-left">
	                                                    <img src="images/menufood/1.png" alt="client" class="img-responsive">
	                                                </a>
	                                                <div class="media-body">
	                                                    <h6><a href="javascript:;">GLUTEN FREE CHIA</a> <BR>OR</h6>
														
	                                                    <h6><a href="javascript:;">NATURAL RICE</a></h6>
	                                                </div>
	                                                
	                                            </div>
	                                        </li>
										</ul>
									</div>
									<div class="col-md-1">
										<div class="foror">OR</div> 
									</div>
									<div class="col-md-3">
	                                    <ul class="menu-fd">
	                                        <li>
	                                            <div class="media-wrap">
	                                                <a href="javascript:;" class="pull-left">
	                                                    <img src="images/menufood/2.png" alt="client" class="img-responsive">
	                                                </a>
	                                                <div class="media-body">
	                                                    <h6><a href="javascript:;">A BROTH BOWL</a></h6>
	                                                    
	                                                </div>
	                                                
	                                            </div>
	                                        </li>
											
										</ul>
									</div>
									<div class="col-md-1">
										<div class="foror">OR</div> 
									</div>
									<div class="col-md-3">
	                                    <ul class="menu-fd">
	                                        <li>
	                                            <div class="media-wrap">
	                                                <a href="javascript:;" class="pull-left">
	                                                    <img src="images/menufood/3.png" alt="client" class="img-responsive">
	                                                </a>
	                                                <div class="media-body">
	                                                    <h6><a href="javascript:;">A SALAD</a></h6>
	                                                    
	                                                </div>
	                                                
	                                            </div>
	                                        </li>
											
										</ul>
									</div>

								</div>
								
								
								<div class="col-md-12">
									<h1 class="phone">2. FUEL UP</h1>
									<p align="center">Choose 1 item<br>Extra choice add $4.00</p>
									
								</div>
								
								<div class="fuel_up">
									
									<div class="col-md-6">

										<ul class="menu-fd">
											<li >
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/4.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">BEEF</a></h6>
														
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/5.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">LAMB</a></h6>
													</div>

												</div>
											</li>
											<li id="sub_food_1_3">
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/6.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">CHICKEN</a></h6>

													</div>

												</div>
											</li>
										</ul>
									</div>
									<div class="col-md-6">

										<ul class="menu-fd">
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/7.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">PORK</a></h6>
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/8.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">VEGAN</a></h6>
													</div>

													<ul class="menu-in">
														<li>Tofu/Herb Balls</li>
													</ul>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/9.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Neptune Mix</a></h6>
													</div>

													 <ul class="menu-in">
														<li>Prawn, squid, mussel</li>
													</ul>
												</div>
											</li>
										</ul>
									</div>
									
								</div>
								
								<div class="col-md-12">
									<h1 class="phone">3. STAY FRESH</h1>
									<p align="center">Choose 1 item<br>Extra choice add $3.00</p>
									
								</div>
								
								<div class="stay_fresh">

									<div class="col-md-6">

										<ul class="menu-fd">
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/10.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Coss & Cress</a></h6>
														
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/11.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Spinach & Slaw</a></h6>
													</div>

												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/12.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Root Veg</a></h6>

													</div>

												</div>
											</li>
										</ul>
									</div>
									<div class="col-md-6">

										<ul class="menu-fd">
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/13.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Kale & leaf</a></h6>
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/14.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Asian Green & Rice Vermicilli</a></h6>
													</div>
												</div>
											</li>
										</ul>
									</div>
								
								
								</div>


								<div class="col-md-12">
									<h1 class="phone">4. ADD ZING</h1>
									<p align="center">Choose any 3 items<br>Extra choice add $2.00</p>
									
								</div>
								
								<div class="add_zing">
									
									<div class="col-md-6">

										<ul class="menu-fd">
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/15.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Tomato</a></h6>
														
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/16.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Avo</a></h6>
													</div>

												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/17.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Florets</a></h6>

													</div>

												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/18.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Eggs</a></h6>

													</div>

												</div>
											</li>
										</ul>
									</div>
									<div class="col-md-6">

										<ul class="menu-fd">
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/19.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Sauerkraut</a></h6>
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/20.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Baby Beets & preserved lemon</a></h6>
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/21.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Olives</a></h6>
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/22.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Antipasto mix</a></h6>
													</div>
												</div>
											</li>
										</ul>
									</div>

								</div>
								
								
								
								<div class="col-md-12">
									<h1 class="phone">5. ENERGISE</h1>
									<p align="center">Choose any 2 items<br>Extra choice add $2.00</p>
									
								</div>
								
								<div class="energise">
									
									<div class="col-md-6">

										<ul class="menu-fd">
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/23.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Seed Mix</a></h6>
														
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/24.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Sprouts</a></h6>
													</div>

												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/25.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Fresh Herbs</a></h6>

													</div>

												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/26.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Ved Crisps</a></h6>

													</div>

												</div>
											</li>
										</ul>
									</div>
									<div class="col-md-6">

										<ul class="menu-fd">
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/27.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Fresh Chilli & ginger</a></h6>
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/28.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Carrot / capsicum</a></h6>
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/29.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Nori</a></h6>
													</div>
												</div>
											</li>
										</ul>
									</div>
								

								</div>
								
								<div class="col-md-12">
									<h1 class="phone">6. IT'S YOURS</h1>
									<p align="center">Choose 1 item<br>Extra choice add $1.00</p>
									
								</div>
								
								<div class="its_yours">

									<div class="col-md-6">

										<ul class="menu-fd">
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/30.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Chilli citrus</a></h6>
														
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/31.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Asian Miso</a></h6>
													</div>

												</div>
											</li>
										</ul>
									</div>
									<div class="col-md-6">

										<ul class="menu-fd">
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/32.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Avo / Mango</a></h6>
													</div>
												</div>
											</li>
											<li>
												<div class="media-wrap">
													<a href="javascript:;" class="pull-left">
														<img src="images/menufood/33.png" alt="client" class="img-responsive">
													</a>
													<div class="media-body">
														<h6><a href="javascript:;">Maple Olive vin</a></h6>
													</div>
												</div>
											</li>
										</ul>
									</div>
									

								</div>
								
                                <div class="clearfix"></div>
                                <div class="flat-divider d35px"></div>
                            </div><!-- /.content-inner -->

                            
                            <div class="content-inner">
                                
									<div class="col-md-12">
										<h1 class="phone">JUICED (12oz)</h1>
										<p align="center"> (cold pressed) </p>
										
									</div>
									
									<div class="col-md-6">

										<ul class="menu-fd">
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">Good Green</a></h6>
													<span>$7.00</span>
												</div>
												<ul class="menu-in">
													<li>kale / celery / kiwi / pear / apple / mint</li>
												</ul>
											</div>
										</li>
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">Radical Red</a></h6>
													<span>$7.00</span>
												</div>
												<ul class="menu-in">
													<li>beets / strawberry / blueberry / spinach / parsley</li>
												</ul>
											</div>
										</li>
										</ul>
									</div>
									<div class="col-md-6">

										<ul class="menu-fd">
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">Ott Orange</a></h6>
													<span>$7.00</span>
												</div>
												<ul class="menu-in">
													<li>orange / carrot / ginger / chilli / lemon</li>
												</ul>
											</div>
										</li>
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">Yolo Yellow</a></h6>
													<span>$7.00</span>
												</div>

												<ul class="menu-in">
													<li>pineapple / mango / apple / banana / tumeric / pepper</li>
												</ul>
											</div>
										</li>
										</ul>
									</div>
									
									
									
									<div class="col-md-12">
										<h1 class="phone">BLENDED (22oz)</h1>
									</div>
									
									<div class="col-md-6">

										<ul class="menu-fd">
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">Thriving</a></h6>
													<span>$8.00</span>
												</div>
												<ul class="menu-in">
													<li>organic, raw, live bio, fermented</li>
												</ul>
											</div>
										</li>
										
										
									</div>
									<div class="col-md-6">

										<ul class="menu-fd">
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">or Clean</a></h6>
												</div>
												<ul class="menu-in">
													<li>slim, shape, recover</li>
												</ul>
											</div>
										</li>
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">mixed with</a></h6>
												</div>

												<ul class="menu-in">
													<li>standard / trim soy almond coconut H2O</li>
												</ul>
											</div>
										</li>
										
									</div>
									
									
									<div class="col-md-12">
										<h1 class="phone">+ BOOSTS</h1>
										<p align="center"> (extra cost) </p>
										
									</div>
									
									<div class="col-md-6">

										<ul class="menu-fd">
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">Thriving Protien</a></h6>
													<span>$3.50</span>
												</div>
												<ul class="menu-in">
													<li>(clean protien)</li>
												</ul>
											</div>
										</li>
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">Clean Energy</a></h6>
													<span>$3.00</span>
												</div>
												<ul class="menu-in">
													<li>(raw, alkalising, pre-workout)</li>
												</ul>
											</div>
										</li>
										</ul>
									</div>
									<div class="col-md-6">

										<ul class="menu-fd">
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">Greens + Reds</a></h6>
													<span>$3.00</span>
												</div>
												<ul class="menu-in">
													<li>(wholefood multivit)</li>
												</ul>
											</div>
										</li>
										<li>
											<div class="media-wrap">
												<div class="media-body">
													<h6><a href="javascript:;">Acai Blend</a></h6>
													<span>$3.50</span>
												</div>

												<ul class="menu-in">
													<li>(powerful antioxidants)</li>
												</ul>
											</div>
										</li>
										</ul>
									</div>

								
								<div class="clearfix"></div>
                                <div class="flat-divider d35px"></div>
                            </div><!-- /.content-inner -->

							<div class="content-inner">
                                
								
								<div class="col-md-12">
									<h1 class="phone">READY TO ROLL</h1>
									<p align="center">MINI: $9.00 (2 choices)<br>MIDI: $13.00 (2 choices) <br> MAXI: $17.00 (3 choices)</p>
									
								</div>
								
								<div class="col-md-6">

									<ul class="menu-fd">
									<li>
										<div class="media-wrap">
											<a href="javascript:;" class="pull-left">
												<img src="images/menufood/34.png" alt="client" class="img-responsive">
											</a>
											<div class="media-body">
												<h6><a href="javascript:;">Beefed Chilled</a></h6>
												</div>
												<ul class="menu-in">
													<li>beef, bok choy </li>
													<li>cabbage, mung bean, veg crisps</li>
													<li>coriander, cashew, chilli, honey</li>
												</ul>
											
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<a href="javascript:;" class="pull-left">
												<img src="images/menufood/35.png" alt="client" class="img-responsive">
											</a>
											<div class="media-body">
												<h6><a href="javascript:;">Caulied Rice</a></h6>
												</div>
												<ul class="menu-in">
													<li>cranberry, tomato </li>
													<li>parsley, kale, onion</li>
													<li>almonds, turmeric, cumin</li>
												</ul>
											
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<a href="javascript:;" class="pull-left">
												<img src="images/menufood/36.png" alt="client" class="img-responsive">
											</a>
											<div class="media-body">
												<h6><a href="javascript:;">Pulsed Legumes</a></h6>
												</div>
												<ul class="menu-in">
													<li>chickpea, kidney </li>
													<li>black avo, mango</li>
													<li>celery, toasted coconut</li>
												</ul>
											
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<a href="javascript:;" class="pull-left">
												<img src="images/menufood/37.png" alt="client" class="img-responsive">
											</a>
											<div class="media-body">
												<h6><a href="javascript:;">Miso'd Tofu</a></h6>
												</div>
												<ul class="menu-in">
													<li>tofu, bok choy, nori </li>
													<li>miso, coriander, chilli</li>
													<li>ginger, spring onion</li>
												</ul>
											
										</div>
									</li>
									
									</ul>
								</div>
								<div class="col-md-6">

									<ul class="menu-fd">
									<li>
										<div class="media-wrap">
											<a href="javascript:;" class="pull-left">
												<img src="images/menufood/38.png" alt="client" class="img-responsive">
											</a>
											<div class="media-body">
												<h6><a href="javascript:;">Neptune Nicosi</a></h6>
												</div>
												<ul class="menu-in">
													<li>beans, tomato </li>
													<li>olive, egg, mussel</li>
													
												</ul>
											
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<a href="javascript:;" class="pull-left">
												<img src="images/menufood/39.png" alt="client" class="img-responsive">
											</a>
											<div class="media-body">
												<h6><a href="javascript:;">Zoodled</a></h6>
												</div>
												<ul class="menu-in">
													<li>zucchini, pumpkin </li>
													<li>pesto, spinach, lemon</li>
													<li>sunflower seed, pumpkin seeds</li>
												</ul>
											
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<a href="javascript:;" class="pull-left">
												<img src="images/menufood/40.png" alt="client" class="img-responsive">
											</a>
											<div class="media-body">
												<h6><a href="javascript:;">So Greens</a></h6>
												</div>
												<ul class="menu-in">
													<li>bean, brocilli </li>
													<li>apple, avo, capsicum</li>
													<li>mint, almond</li>
												</ul>
											
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<a href="javascript:;" class="pull-left">
												<img src="images/menufood/41.png" alt="client" class="img-responsive">
											</a>
											<div class="media-body">
												<h6><a href="javascript:;">Quinoa & Amaranth</a></h6>
												</div>
												<ul class="menu-in">
													<li>wild rice, beetroot, orange </li>
													<li>red cabbage, corn, pomegranate</li>
													<li>walnut, star anise, cardomon</li>
												</ul>
											
										</div>
									</li>
									
									</ul>
								</div>
								
                                
								<div class="clearfix"></div>
                                <div class="flat-divider d35px"></div>
                            </div><!-- /.content-inner -->
							<div class="content-inner">
                                <div class="col-md-12">
									<h1 class="phone">ESPRESSO</h1>
									
								</div>
								
								<div class="col-md-6">

									<ul class="menu-fd">
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Short (8 oz)</a></h6>
												<span>$3.00</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Long (8 oz)</a></h6>
												<span>$3.50</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Macchiato (8 oz)</a></h6>
												<span>$3.50</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Macchiato (12 oz)</a></h6>
												<span>$4.00</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Piccolo (8 oz)</a></h6>
												<span>$3.50</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Flat White (8 oz)</a></h6>
												<span>$4.00</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Flat White (12 oz)</a></h6>
												<span>$4.50</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Cold Brew (16 oz)</a></h6>
												<span>$5.00</span>
											</div>
											<ul>
											<li>(Single Origin 18 hour brew)</li>
											</ul>
										</div>
									</li>
									
									</ul>
								</div>
								<div class="col-md-6">

									<ul class="menu-fd">
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Cappucino (8 oz)</a></h6>
												<span>$4.00</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Cappucino (12 oz)</a></h6>
												<span>$4.50</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Latte (8 oz)</a></h6>
												<span>$4.50</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Latte (12 oz)</a></h6>
												<span>$5.00</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Mocha (8 oz)</a></h6>
												<span>$5.00</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Mocha (12 oz)</a></h6>
												<span>$5.50</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Hot Choc (8 oz)</a></h6>
												<span>$4.50</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Hot Choc (12 oz)</a></h6>
												<span>$5.00</span>
											</div>
										</div>
									</li>
									</ul>
								</div>
								
								
								<div class="col-md-12">
									<h1 class="phone">HERBAL</h1>
									<p align="center">GOLDEN: Turmeric / Manuka Honey (antioxidant, anti-inflammatory)<br>
									VELVET: Beetroot / Ayruvedic Chai (detox/energise)<br>
									CHAI: House Brew. No sugar / honey
									</p>
								</div>
								
								<div class="col-md-6">

									<ul class="menu-fd">
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Tea (12	 oz)</a></h6>
												<span>$4.00</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Latte (12 oz)</a></h6>
												<span>$5.50</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Extras - Decaf</a></h6>
												<span>$0.80</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Extras - Soy</a></h6>
												<span>$0.80</span>
											</div>
										</div>
									</li>
									
									
									</ul>
								</div>
								<div class="col-md-6">

									<ul class="menu-fd">
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Extras - Shot</a></h6>
												<span>$0.80</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Extras - Coconut H2O</a></h6>
												<span>$0.80</span>
											</div>
										</div>
									</li>
									<li>
										<div class="media-wrap">
											<div class="media-body">
												<h6><a href="javascript:;">Extras - Almond</a></h6>
												<span>$0.80</span>
											</div>
										</div>
									</li>
									
									</ul>
								</div>
								
								<div class="clearfix"></div>
                                <div class="flat-divider d35px"></div>
                                
                            </div><!-- /.content-inner -->

                        </div><!-- /.content-tab -->
                    </div><!--flat-tabs-->  
					
					<div class="col-md-3">
						<div class="title-section style1 martp-0px">

							<form method="get" action="cart.php">
								<button type="submit" class="btn btn-default btn-lg">
									Cart <i class="fa fa-shopping-cart fa-lg" aria-hidden="true"> 
										 <span class="badge"> <?php echo $proudcts_in_cart; ?> </span>  </i>
								</button>
							</form>
                        </div>
					</div>
					
					
                </div><!--row-->
            </div><!--container -->
        </section>




 </div><!--box -->

 <!-- Javascript -->
 <script type="text/javascript" src="js/jquery.min.js"></script>
 <script type="text/javascript" src="js/jquery.datetimepicker.full.min.js"></script> 
 <script type="text/javascript" src="js/bootstrap.min.js"></script> 
 <script type="text/javascript" src="js/jquery.easing.js"></script> 
 <script type="text/javascript" src="js/imagesloaded.min.js"></script> 
 <script type="text/javascript" src="js/jquery.isotope.min.js"></script>
 <script type="text/javascript" src="js/jquery-waypoints.js"></script> 
 <script type="text/javascript" src="js/jquery.magnific-popup.min.js"></script>   
 <script type="text/javascript" src="js/jquery.cookie.js"></script>
 <script type="text/javascript" src="js/parallax.js"></script>
 <script type="text/javascript" src="js/smoothscroll.js"></script>   
 <script type="text/javascript" src="js/jquery.flexslider-min.js"></script>
 <script type="text/javascript" src="js/owl.carousel.js"></script>
 <script type="text/javascript" src="js/jquery-validate.js"></script>

 <script type="text/javascript" src="js/jquery.fancybox.js"></script>
 <script type="text/javascript" src="js/main.js"></script>

 <!-- Revolution Slider -->
 <script type="text/javascript" src="js/jquery.themepunch.tools.min.js"></script>
 <script type="text/javascript" src="js/jquery.themepunch.revolution.min.js"></script>
 <script type="text/javascript" src="js/slider.js"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/limonte-sweetalert2/6.10.1/sweetalert2.min.js"></script>

</body>
</html>


<script type="text/javascript">
	

	$(document).ready( function(){

		var main_food;

		$(".main_food div ul").click( function(){

			$(".main_food div ul").not(this).removeClass("hover");

			main_food = $(this).find( ".media-body h6 a" ).text();

			$(this).toggleClass("hover");
		});
		

		var fuel_up;

		$(".fuel_up div ul li").click( function(){

			$(".fuel_up div ul li").not(this).removeClass("hover");

			fuel_up = $(this).find( ".media-body h6 a" ).text();

			$(this).toggleClass("hover");
		});
		

		var stay_fresh;

		$(".stay_fresh div ul li").click( function(){

			$(".stay_fresh div ul li").not(this).removeClass("hover");

			stay_fresh = $(this).find( ".media-body h6 a" ).text();

			$(this).toggleClass("hover");
		});
		


		var add_zing = [];
		
		var add_zing_item = [];


		$(".add_zing div ul li").click( function(){


			if( add_zing.length == 3 ){

				var top = add_zing[0];

				add_zing.shift();

				top.removeClass("hover");
			}

			add_zing_item.push( $(this).find( ".media-body h6 a" ).text() );

			add_zing.push( $(this) );

			$(this).toggleClass("hover");

		});


		var energise = [];

		var energise_item = [];


		$(".energise div ul li").click( function(){


			if( energise.length == 2 ){

				var top = energise[0];

				energise.shift();

				top.removeClass("hover");
			}

			energise_item.push( $(this).find( ".media-body h6 a" ).text() );

			energise.push( $(this) );

			$(this).toggleClass("hover");

		});


		var its_yours;

		$(".its_yours div ul li").click( function(){

			$(".its_yours div ul li").not(this).removeClass("hover");

			its_yours = $(this).find( ".media-body h6 a" ).text();
			
			$(this).toggleClass("hover");
		});


		$("ul").click( function(){


			var c_main_food = $(".main_food div .hover").length;

			var c_fuel_up = $(".fuel_up div .hover").length;

			var c_stay_fresh = $(".stay_fresh div .hover").length;

			var c_add_zing = $(".add_zing div .hover").length;

			var c_energise = $(".energise div .hover").length;

			var c_its_yours = $(".its_yours div .hover").length;

// GLUTEN FREE CHIANATURAL RICEA BROTH BOWLA SALAD
			if( c_main_food == 1 &&  c_fuel_up == 1 && c_stay_fresh == 1 && c_add_zing == 3 && c_energise == 2 && c_its_yours == 1 ){


		        swal({
						  title: 'Are you sure?',
						  text: "You want to add "+main_food+" to cart",
						  type: 'success',
						  showCancelButton: true,
						  confirmButtonColor: '#27ae60',
						  cancelButtonColor: '#d33',
						  confirmButtonText: 'Yes, I do!'

					}).then(function () {

						 $.ajax({
			                        type: "post",

			                        url: "get_products.php",

			                        data: { 
			                        		"main_food": main_food,
			                        		"fuel_up": fuel_up,
			                        		"stay_fresh": stay_fresh,
			                        		"add_zing_item": add_zing_item,
			                        		"energise_item": energise_item,
			                        		"its_yours": its_yours,
			                        },

			                        success: function( responce ){
		                        		
		                        		console.log( responce );
		                        	}
		                	});

					 //  	swal(
						// 	    'Success!',
						// 	    main_food+' added to cart.',
						// 	    'success'
						// )
				}) 
			}

		});


	});

</script>
