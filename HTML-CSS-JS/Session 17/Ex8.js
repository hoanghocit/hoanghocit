let date_1 = prompt("Mời Bạn Nhập Ngày Thứ Nhất (YYYY-MM-DD): ");
let date_2 = prompt("Mời Bạn Nhập Ngày Thứ Hai (YYYY-MM-DD):");

let ngay_1 = new Date(date_1);
let ngay_2 = new Date(date_2);
let dolenhNgay = Math.abs(ngay_2 - ngay_1) / (1000 * 60 * 60 * 24);

alert("Độ Lệch Là "+dolenhNgay+" Ngày!");