//THE BUTTONS
//q,w - motor 1
//e,r - motor 2
//t,y - motor 3
//u,i - motor 4
//o,p - motor 5

#define motor11 2
#define motor12 3
#define motor21 4
#define motor22 5
#define motor31 6
#define motor32 7
#define motor41 8
#define motor42 9
#define motor51 10
#define motor52 11

void setup() 
{
  Serial.begin(9600);
   
  Serial.println("THE BUTTONS");
  Serial.println("q,w - motor 1");
  Serial.println("e,r - motor 2");
  Serial.println("t,y - motor 3");
  Serial.println("u,i - motor 4");
  Serial.println("o,p - motor 5");
  
  
  pinMode(motor11,OUTPUT);//retrives 5v power for 1st motor frm this pin
  pinMode(motor12,OUTPUT);
  
  pinMode(motor21,OUTPUT);//retrives 5v power for 2nd motor frm this pin
  pinMode(motor22,OUTPUT);

  pinMode(motor31,OUTPUT);//retrives 5v power for 3rd motor frm this pin
  pinMode(motor32,OUTPUT);

  pinMode(motor41,OUTPUT);//retrives 5v power for 4th motor frm this pin
  pinMode(motor42,OUTPUT);

  pinMode(motor51,OUTPUT);//retrives 5v power for 5th motor frm this pin
  pinMode(motor52,OUTPUT);
}

void loop() 
{
    char a=0;
    while(!Serial.available());
    a=Serial.read(); 
    if(a=='q')
    {
       motor1fwd();  
       
    }
    if(a=='w')
    {
       motor1bck(); 
          
    }
    else if(a=='e')
    {
        motor2fwd(); 
        
    }
    else if(a=='r')
    {
        motor2bck();  
         
    }
   
    else if (a=='t')
    {
        motor3fwd();
         
    }
    else if(a=='y')
    {
        motor3bck();
           
    }
     
    else if(a=='u')
    {
         motor4fwd();
         
    } 
    else if(a=='i')
    {
         motor4bck();
        
    } 
    else if(a=='o')
    {
         motor5fwd();
          
    } 
    else if(a=='p')
    {
         motor5bck();
         
    }
}


void motor1fwd(void)
{

         digitalWrite(motor11,HIGH);           
         digitalWrite(motor12,LOW);
         delay(50);
         digitalWrite(motor11,LOW);          
         digitalWrite(motor12,LOW);
         Serial.println("q"); 
}
void motor1bck(void)
{

         digitalWrite(motor11,LOW);           
         digitalWrite(motor12,HIGH);
         delay(50);
         digitalWrite(motor11,LOW);          
         digitalWrite(motor12,LOW);
         Serial.println("w");
}

void motor2fwd(void)
{
         digitalWrite(motor21,HIGH);
         digitalWrite(motor22,LOW);
         delay(50);
         digitalWrite(motor21,LOW);          
         digitalWrite(motor22,LOW);
         Serial.println("e");   
         
}

void motor2bck(void)
{
         digitalWrite(motor21,LOW);
         digitalWrite(motor22,HIGH);
         delay(50);
         digitalWrite(motor21,LOW);          
         digitalWrite(motor22,LOW);
         Serial.println("r"); 
         
}
void motor3fwd(void)
{
         digitalWrite(motor31,HIGH);
         digitalWrite(motor32,LOW);
         delay(50);
         digitalWrite(motor31,LOW);          
         digitalWrite(motor32,LOW);
         Serial.println("t");

}
void motor3bck(void)
{
         digitalWrite(motor31,LOW);
         digitalWrite(motor32,HIGH);
         delay(50);
         digitalWrite(motor31,LOW);          
         digitalWrite(motor32,LOW);
         Serial.println("y"); 
         
}

void motor4fwd(void)
{
         
         digitalWrite(motor41,HIGH);           
         digitalWrite(motor42,LOW);
         delay(50);
         digitalWrite(motor41,LOW);          
         digitalWrite(motor42,LOW);
         Serial.println("u"); 
}

void motor4bck(void)
{
         
         digitalWrite(motor41,LOW);           
         digitalWrite(motor42,HIGH);
         delay(100);
         digitalWrite(motor41,LOW);          
         digitalWrite(motor42,LOW);
         Serial.println("i"); 
         
}
void motor5fwd(void)
{
         
         digitalWrite(motor51,HIGH);           
         digitalWrite(motor52,LOW);
         delay(50);
         digitalWrite(motor51,LOW);          
         digitalWrite(motor52,LOW);
         Serial.println("o");
}
void motor5bck(void)
{
         
         digitalWrite(motor51,LOW);           
         digitalWrite(motor52,HIGH);
         delay(50);
         digitalWrite(motor51,LOW);          
         digitalWrite(motor52,LOW);
         Serial.println("p");  
}


