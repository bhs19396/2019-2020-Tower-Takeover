<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width">
    <title>repl.it</title>
  </head>
  <body onload="displayInfo()">    

<script>

function displayInfo(){

  var o = document.getElementById("output");
  var build = "";

  build += ` <div id ="info"> `
  build += ` <h2> Welcome to Bayside Highschool Robotics Code for Tower Takeover </h2> `
  build += ` <hr> `
  build += ` <br> `
  build += ` <img src = "https://www.vexrobotics.com/media/catalog/product/cache/1/image/9df78eab33525d08d6e5fb8d27136e95/t/t/tt-fullfield-gamekit.jpg" height = 800 width = 800 > `
  build += ` <h3> 
  
            There are sixty-six (66) Cubes; twenty-two (22) of
            each color (orange, green, and purple). There are
            seven (7) Towers around the field; five (5) of these
            can be used by either Alliance, and two (2) are
            Alliance-specific. Cubes are Scored into four (4)
            Goal Zones (two per Alliance), in the corners of
            the field.

            <hr>

            Each Cube scored in a Goal Zone is worth a base of
            one (1) point. For each Cube of a given color that is
            Placed into a Tower, the point value for Cubes of
            that color increases by one (1) point.
            For example, if there are three (3) green Cubes
            Placed in Towers at the end of the Match, then all
            green Cubes Scored in Goal Zones are worth four
            (4) points.

            <hr>

            The Alliance that scores more points in Autonomous
            Period receives bonus points, as well as receiving 2
            purple Cubes, which may be introduced at any time
            during the Driver Control period 

            </h3>`

  build += ` </div> `

o.innerHTML = build;
}

</script>

<style>

#info {

  border-radius: 20px 20px 20px 20px;
  color: brown;
  margin: 10px;
  text-align: center;

}


</style>

    <div id = "output"> </div>
    
  </body>
</html>
