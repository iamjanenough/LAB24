#include <set> // ต้องเพิ่ม Library นี้เพื่อให้ใช้ set ได้

int count(int data[], int size) {
    // สร้าง set ของเลข integer
    set<int> unique_numbers;
    
    // วนลูปนำข้อมูลจาก array ใส่เข้าไปใน set
    for(int i = 0; i < size; i++) {
        unique_numbers.insert(data[i]);
    }
    
    // จำนวนสมาชิกใน set คือจำนวนตัวเลขที่ไม่ซ้ำกัน
    return unique_numbers.size();
}