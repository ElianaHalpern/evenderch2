//
// Created by eliana on 1/3/19.
//

#include "MySerialServer.h"

void MySerialServer:: open(int port, ClientHandler* c){
//מתחברת ללקוח על הפורט שקיבלנו (יש זמן מוגבל) ולאחר ההתחברות מפעילה את הclienthendler כדי לשוחח איתו
//כל זה בלולאה שעוברת על כל הלקוחות
//לטפל בתשובות שמקבלים ולהדפיס ללקוח, אם חוזר נאל סימן שהגענו לסוף התקשורת איתו
//בסוף הלולאה או אם עבר הרבה זמן ואין תקשורת שולחים לstop
}

void MySerialServer:: stop(){
//להעתיק את המפה לתוך קובץ ולסגור את התרד
}

bool MySerialServer:: isOpen(){

}