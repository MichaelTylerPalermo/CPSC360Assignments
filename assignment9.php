<html>
	<head>
		<title> Assignment 9: PHP Basics </title>
	</head>
		<body>
			<?php
			$startnum = 1;	//our starting number in the sequence
			$endnum =5;		//ending num
			$sum=0;			//initializing the sum variable
			$inbetween = $endnum - $startnum +1;		//how many numbers are being added (5-1 = 4+1 = 5)
			for ($x =$startnum; $x<=$endnum;$x++){		//start the loop at the starting number in the sequence and end at the ending value.
				$sum = $sum + $x;		//ex: sum = 10 + 5;
			}
			echo "The sum of ".$inbetween." consecutive numbers from ".$startnum." to ".$endnum." is ".$sum."."; //printing out the formatted string
			?>
		</body>
</html>