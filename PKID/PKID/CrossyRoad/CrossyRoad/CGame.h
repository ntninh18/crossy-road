#pragma once
#ifndef CGAME_H
#define CGAME_H
#include "Library.h"
#include <Windows.h>
#include <time.h>
#include <thread>
#include <conio.h>


#define MAX_CAR 10
#define MAX_SPEED 5
#define MAX_CAR_LENGTH 60
#define WIDTH_CONSOLE 100
#define HEIGH_CONSOLE 20
class CGAME {
	CTRUCK* axt;
	CCAR* axh;
	CDINOSAUR* akl;
	CBIRD* ac;
	CPEOPLE cn;
	bool pause;	//state of game: do stop?
	int speed;
public:
	CGAME(); //Chuẩn bị dữ liệu cho tất cả các đối tượng
	void drawBoard(int x, int y, int width, int height, int curPosX = 0, int curPosY = 0);
	void drawGame(); //Thực hiện vẽ trò chơi ra màn hình sau khi có dữ liệu
	~CGAME(); // Hủy tài nguyên đã cấp phát
	CPEOPLE getPeople();//Lấy thông tin người
	CVEHICLE* getVehicle();//Lấy danh sách các xe
	CANIMAL* getAnimal(); //Lấy danh sách các thú
	void resetGame(); // Thực hiện thiết lập lại toàn bộ dữ liệu như lúc đầu
	void exitGame(HANDLE); // Thực hiện thoát Thread
	void startGame(); // Thực hiện bắt đầu vào trò chơi
	void loadGame(istream); // Thực hiện tải lại trò chơi đã lưu
	void saveGame(istream); // Thực hiện lưu lại dữ liệu trò chơi
	void pauseGame(HANDLE); // Tạm dừng Thread
	void resumeGame(HANDLE); //Quay lai Thread
	void updatePosPeople(char); //Thực hiện điều khiển di chuyển của CPEOPLE
	void updatePosVehicle(); //Thực hiện cho CTRUCK & CCAR di chuyển
	void updatePosAnimal();//Thực hiện cho CDINAUSOR & CBIRD di chuyển
};

#endif