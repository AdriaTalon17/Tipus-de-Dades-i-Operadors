/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{

  drive_mb = drive_gb;       
  drive_mb = drive_mb * 1024;     
  
  drive_kb = drive_mb;
  drive_kb= drive_mb * 1024;

  real_drive_mb= drive_gb ;
  real_drive_mb= real_drive_mb * 1000;

  real_drive_kb= real_drive_mb;
  real_drive_kb=  real_drive_kb * 1000;

  missing_drive_kb= drive_kb;
  missing_drive_kb= drive_kb - real_drive_kb;
  

  Serial.begin(9600);              //set up Serial library at 9600 bps
 Serial.print("Your HD is ");    
  Serial.print(drive_gb);
  Serial.println(" GB large.");    // Write your theorical HD storage in Gb
  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");    // Calculate and write your theorical HD storage in Mb
  Serial.print(drive_kb);
  Serial.println(" Kilobytes ");   // Calculate and write your theorical HD storage in Kb
  Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
 Serial.print(" Megabytes, ");     // Calculate and write your real HD storage in Mb
 Serial.print(real_drive_kb);
 Serial.println(" Kilobytes ");    // Calculate and write your real HD storage in Kb
  Serial.print("You are missing "); 
  Serial.print( missing_drive_kb );
  Serial.println(" Kilobytes ");   // Calculate and write your missing HD storage in Kb
  }
//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
