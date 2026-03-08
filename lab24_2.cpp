#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

void printList(list<string> s){
	list<string>::iterator i;
	for( i = s.begin(); i != s.end(); i++){
		cout << *i << " ";
	}		
	cout << "\n";	
}

int main(){
	
	list<string> line_up;
	list<string>::iterator loc;
	
	line_up.push_back("Alice");
	line_up.push_back("Bob");
	
	loc = find(line_up.begin(),line_up.end(),"Bob");
	line_up.insert(loc,"Oscar");
	
	// --- เริ่มเขียนต่อจากตรงนี้ ---
	
	// Luffy, Sanji, Nami มาต่อแถวด้านหลังตามลำดับ
	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");
	
	// 2 คนที่หัวแถวได้เข้าไปในส้วมแล้ว (เอาออก 2 คนแรก)
	line_up.pop_front();
	line_up.pop_front();
	
	// Narutu มาแทรกแถวหลัง Luffy
	loc = find(line_up.begin(), line_up.end(), "Luffy");
	if (loc != line_up.end()) {
		advance(loc, 1); // เลื่อนไปตำแหน่ง "หลัง" Luffy
		line_up.insert(loc, "Narutu");
	}
	
	// Prayath ท้องเสียเลยมาแทรกหน้าสุด
	line_up.push_front("Prayath");
	
	// Tony มาแทรกด้านหลัง Prayath
	loc = find(line_up.begin(), line_up.end(), "Prayath");
	if (loc != line_up.end()) {
		advance(loc, 1); // เลื่อนไปตำแหน่ง "หลัง" Prayath
		line_up.insert(loc, "Tony");
	}
	
	// Bob เปลี่ยนใจออกไปขี้ที่อื่น
	loc = find(line_up.begin(), line_up.end(), "Bob");
	if (loc != line_up.end()) {
		line_up.erase(loc);
	}
	
	// 3 คนที่หัวแถวได้เข้าไปในส้วมแล้ว
	line_up.pop_front();
	line_up.pop_front();
	line_up.pop_front();
	
	// --- สิ้นสุดการแก้ไข ---
	
	printList(line_up);
		
	return 0;
}