import processing.serial.*;

Serial myPort;

//defining the shapes
int rectX, rectY;
int rect1X, rect1Y;
int rectSize = 200;
color rectColor, rect1Color, baseColor;
color rectHighlight, rect1Highlight;
//setting the booleans for the mousover interaction
boolean rectOver = false;
boolean rect1Over = false;


void setup() {
  size(650, 500);
  myPort = new Serial(this, "/dev/ttyUSB0", 9600);
  //colors of the buttons
  rectColor = color(0, 255, 0);
  rectHighlight = color(100);
  rect1Color = color(255, 0,0);
  rect1Highlight = color(100);

  //position of the buttons
  rectX = width/10;
  rectY = height-300;
  rect1X = width/2;
  rect1Y = height-300;


  background(140,150,150);
  //texts on the interface
  textSize(40);
  fill(255,255,255);
  text("Turn the light", 180, 70);
  textSize(30);
  fill(0, 255, 0);
  text("ON", 140, 170);
  textSize(30);
  fill(255, 0, 0);
  text("OFF", 390, 170);


  noStroke();
  fill(100);
  rect(0, 450, 900, 50);

}

void draw() {

  update(mouseX, mouseY);

  //to get the opacity on mouseover
  if (rectOver) {
    fill(rectHighlight);
  } else {
    fill(rectColor);
  }
  rect(rectX, rectY, rectSize, rectSize, 15);

  if (rect1Over) {
    fill(rect1Highlight);
  } else {
    fill(rect1Color);
  }
  rect(rect1X, rect1Y, rectSize, rectSize, 15);


}

//gets as input the mouse position and checks whether the cursor is on top of any of the two buttons
void update(int x, int y) {
  if ( overRect(rectX, rectY, rectSize, rectSize) ) {
    rectOver = true;
    rect1Over = false;
  
  } else if ( overRect1(rect1X, rect1Y, rectSize, rectSize) ) {
    rect1Over = true;
    rectOver = false;
    
  }  else {
    rect1Over = rectOver = false;
  }
}
//events when the mouse is pressed: send a value through serial. Also, a check on the monitor is done to see whether the values are actually sent.
void mousePressed() {
  if (rectOver) {

   myPort.write(1);
   println("on");

}
  if (rect1Over) {
       myPort.write(0);
   println("off");
  }
 
}

boolean overRect(int x, int y, int width, int height)  {
  if (mouseX >= x && mouseX <= x+width &&
      mouseY >= y && mouseY <= y+height) {
    return true;
  } else {
    return false;
  }
}

boolean overRect1(int x, int y, int width, int height)  {
  if (mouseX >= x && mouseX <= x+width &&
      mouseY >= y && mouseY <= y+height) {
    return true;
  } else {
    return false;
  }
}