#ifndef Loading_Screen_H
#define Loading_Screen_H

class LoadingScreen {

private:

	const int duration=1000;
	const int barWidth = 20;

public:

	LoadingScreen();
	void show();
	void returningScreen();

};
#endif // !Loading_Screen_H
