#include <iostream>
#include <string>


using namespace std;

int main () {

  string playerName, choicel;
  int score = 0, life = 3;

  // ประกาศตัวแปรเพื่อรับการเลือกคำตอบของผู้เล่น
  // เช่นการเป็น ตัวเลขให้ประกาศเป็น int choice1;
  // ถ้ารับคำตอบเป็นตัวอักษร ให้ประกาศเป็น char choice1;
  //

  cout << "Welcome to Mini Adventure Game." << endl;
  cout << "Please enter your name : ";

  // เขียนคำสั่งรับชื่อ แล้วเก็บในตัวแปร playerName
  cin  >> playerName;

  if (playerName.length() >8) {
        playerName.erase (playerName.begin()+8, playerName.end());
        cout << "Your name has been changed to " << playerName << endl;
    }else {
        cout << playerName << endl;
    }


  // เขียนคำสั่งแสดงผล คำบรรยายสภาพแวดล้อม สถานการณ์ และคำทักทายที่มีชื่อตัวละคร
  // เช่น cout << "Hello " << playerName << ". You are in Robinson. You are walking happily. Suddenly you realize that forgetting the wallet."
  // << " But you're lazy to get back to get it." << endl;
  cout << "Hello" << playerName << " . You are in Chachoengsao Vocational College. You are playing basketball. But the ball to the teacher. What are you going to do? . " << endl;


  // เขียนคำสั่งแสดงผล คำถามให้ผู้ใช้ตัดสินใจ
  // เช่น cout << "What should you do? (A)sk for money,(S)teal : ";

  cout << "What should you do? (S)say sorry, (N)not care : ";
  // เขียนคำสั่งรับคำตอบจากผู้ใช้ แล้วให้คะแนนหรือทำโทษ จากการตัดสินใจนั้น
  // เช่น
  //     cin >> choice1;
  //     switch(choice1) {
  //        case "S" : score += 10; life -= 1; cout << "You stole money from people. Now you can shopping.";
  //        case "A" : score += 50; cout << "You ask for money from people then you get 100 baht. You are very happy. Now you can shopping."
  //     }

  cin >> choicel;
  switch(choicel) { //มันerrorอะไรอ่ะอาจารย์
    case "S" : score += 100; cout << "You say sorry to the teacher. Now you can playing basketball.";
    case "N" : score -= 20;  life -= 1; cout << "You do not care about your own actions. Make you be blamed.";
  }

  // ฝึกสร้างสถานการณ์และสร้างเงื่อนไข อีก 2 สถานการณ์


  // สรุปผลคะแนนและพลังชีวิต เช่น cout << "Congratulations! You win the game with " << score << "Score. See you next time on next game. GG." << endl;
    cout << "Congratuations! You win the game with " << score << "Score. See you next time on next game." << endl;
  return 0;
}
