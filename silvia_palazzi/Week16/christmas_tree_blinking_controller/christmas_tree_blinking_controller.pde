import processing.serial.*;

Serial myPort;

//defining the shapes
int rectX, rectY;
int rect1X, rect1Y;
int rect2X, rect2Y;
int rectSize = 100;
color rectColor, rect1Color, rect2Color, baseColor;
color rectHighlight, rect1Highlight, rect2Highlight;
//setting the booleans for the mousover interaction
boolean rectOver = false;
boolean rect1Over = false;
boolean rect2Over = false;

void setup() {
  size(750, 400);
   myPort = new Serial(this, "/dev/ttyUSB0", 9600);
  //colors of the buttons
  rectColor = color(150, 255,90);
  rectHighlight = color(100);
  rect1Color = color(230, 255, 80);
  rect1Highlight = color(100);
  rect2Color = color(150, 55,90);
  rect2Highlight = color(100);
  //position of the buttons
  rectX = width/4 -rectSize;
  rectY = height/2+rectSize/4;
  rect1X = width/2-rectSize/2;
  rect1Y = height/2+rectSize/4;
  rect2X = width/5+4*rectSize;
  rect2Y = height/2+rectSize/4;

  background(195, 247, 237);
  //texts on the interface
  textSize(40);
  fill(244, 143, 2);
  text("Getting prepared to Christmas tree", 40, 100);
  textSize(20);
  fill(17, 150, 10);
  text("one blink", 90, 200);
  textSize(20);
  fill(247, 209, 22);
  text("two blink", 330, 200);
  textSize(20);
  fill(155, 26, 86);
  text("three blink", 550, 200);

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

  if (rect2Over) {
    fill(rect2Highlight);
  } else {
    fill(rect2Color);
  }
  rect(rect2X, rect2Y, rectSize, rectSize, 15);

}

//gets as input the mouse position and checks whether the cursor is on top of any of the three buttons
void update(int x, int y) {
  if ( overRect(rectX, rectY, rectSize, rectSize) ) {
    rectOver = true;
    rect1Over = false;
    rect2Over = false;
  } else if ( overRect1(rect1X, rect1Y, rectSize, rectSize) ) {
    rect1Over = true;
    rectOver = false;
    rect2Over = false;
  }  else if ( overRect2(rect2X, rect2Y, rectSize, rectSize) ) {
    rect2Over = true;
    rect1Over = false;
    rectOver = false;
  } else {
    rect1Over = rectOver = rect2Over = false;
  }
}
//events when the mouse is pressed: send a value through serial. Also, a check on the monitor is done to see whether the values are actually sent.
void mousePressed() {
  if (rectOver) {

   myPort.write('1');
   println("1");

}
  if (rect1Over) {
       myPort.write('2');
   println("2");
  }
  if (rect2Over) {
       myPort.write('3');
   println("3");
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

boolean overRect2(int x, int y, int width, int height)  {
  if (mouseX >= x && mouseX <= x+width &&
      mouseY >= y && mouseY <= y+height) {
    return true;
  } else {
    return false;
  }
}