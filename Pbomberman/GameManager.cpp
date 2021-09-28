#include "GameManager.h"


GameManager::GameManager() {
	gWindow = nullptr;
	gRenderer = nullptr;
	texturaBomber1 = nullptr;
	texturaBomber2 = nullptr;
	texturaEnemigo1= nullptr;
	texturaEnemigo2 = nullptr;
	texturaEnemigo3 = nullptr;
	texturaEnemigo4 = nullptr;
	texturaEnemigo5 = nullptr;

	texturaExplosion1 = nullptr;
	texturaExplosion2 = nullptr;
	texturaExplosion3 = nullptr;
	texturaExplosion4 = nullptr;
	texturaExplosion5 = nullptr;
}

bool GameManager::onInit() {

	//Initialization flag
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "SDL could not initialize! SDL_Error: " << SDL_GetError() << endl;
		success = false;
	}
	else
	{
		//Create window
		gWindow = SDL_CreateWindow("Bomber Man USFX", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == nullptr)
		{
			cout << "Window could not be created! SDL_Error: " << SDL_GetError() << endl;
			success = false;
		}
		else
		{

			////Create vsynced renderer for window
			gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
			if (gRenderer == nullptr)
			{
				cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << endl;
				success = false;
			}
			else
			{
				//Initialize renderer color
				SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

				//Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if (!(IMG_Init(imgFlags) & imgFlags))
				{
					printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
					success = false;
				}
			}
		}
	}

	return success;
};

bool GameManager::loadMedia()
{
	//Loading success flag
	bool success = true;

	//Load PNG texture
	gTexture = loadTexture("texture.png");
	if (gTexture == NULL)
	{
		printf("Failed to load texture image!\n");
		success = false;
	}

	return success;
}


void GameManager::close()
{
	//Free loaded image
	SDL_DestroyTexture(gTexture);
	gTexture = nullptr;

	//Destroy window	
	SDL_DestroyRenderer(gRenderer);
	SDL_DestroyWindow(gWindow);
	gWindow = nullptr;
	gRenderer = nullptr;

	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}


int GameManager::onExecute() {
	if (!onInit()) {
		cout << "Failed to initialize!" << endl;
		return -1;
	}
	else
	{
		//Main loop flag
		bool quit = false;

		//Event handler
		SDL_Event event;

		texturaBomber1 = new Texture(gRenderer);
		texturaBomber1->loadFromImage("resources/bomber.bmp");
		texturaBomber2 = new Texture(gRenderer);
		texturaBomber2->loadFromImage("resources/textures.bmp");
		texturaEnemigo1 = new Texture(gRenderer);
		texturaEnemigo1->loadFromImage("resources/textures.bmp");
		Enemigo* b3 = new Enemigo(texturaEnemigo1);
		texturaEnemigo2 = new Texture(gRenderer);
		texturaEnemigo2->loadFromImage("resources/textures.bmp");
		Enemigo* b4 = new Enemigo(texturaEnemigo2);
		texturaEnemigo3 = new Texture(gRenderer);
		texturaEnemigo3->loadFromImage("resources/textures.bmp");
		Enemigo* b5 = new Enemigo(texturaEnemigo3);
		texturaEnemigo4 = new Texture(gRenderer);
		texturaEnemigo4->loadFromImage("resources/textures.bmp");
		Enemigo* b6 = new Enemigo(texturaEnemigo4);
		texturaEnemigo5 = new Texture(gRenderer);
		texturaEnemigo5->loadFromImage("resources/textures.bmp");
		Enemigo* b7 = new Enemigo(texturaEnemigo5);

		
		texturaExplosion1 = new Texture(gRenderer);
		texturaExplosion1->loadFromImage("resources/textures.bmp");
		Enemigo* b8 = new Enemigo(texturaExplosion1);
		texturaExplosion2 = new Texture(gRenderer);
		texturaExplosion2->loadFromImage("resources/textures.bmp");
		Enemigo* b9 = new Enemigo(texturaExplosion2);
		texturaExplosion3 = new Texture(gRenderer);
		texturaExplosion3->loadFromImage("resources/textures.bmp");
		Enemigo* b10 = new Enemigo(texturaExplosion3);
		texturaExplosion4 = new Texture(gRenderer);
		texturaExplosion4->loadFromImage("resources/textures.bmp");
		Enemigo* b11 = new Enemigo(texturaExplosion4);
		texturaExplosion5 = new Texture(gRenderer);
		texturaExplosion5->loadFromImage("resources/textures.bmp");
		Enemigo* b12 = new Enemigo(texturaExplosion5);

		Bomber* b1 = new Bomber(texturaBomber1);
		Bomber* b2 = new Bomber(texturaBomber2);
		b1->setImagenX(3);
		b1->setImagenY(3);
		b1->setAncho(20);
		b1->setAlto(30);

		b2->setImagenX(570);
		b2->setImagenY(3);
		b2->setAncho(30);
		b2->setAlto(35);
		actoresJuego.push_back(b1);
		actoresJuego.push_back(b2);
		actoresJuego.push_back(b3);
		actoresJuego.push_back(b4);
		actoresJuego.push_back(b5);
		actoresJuego.push_back(b6);
		actoresJuego.push_back(b7);
		actoresJuego.push_back(b8);
		actoresJuego.push_back(b9);
		actoresJuego.push_back(b10);
		actoresJuego.push_back(b11);
		actoresJuego.push_back(b12);
		b3->setImagenX(6);
		b3->setImagenY(6);
		b3->setAncho(20);
		b3->setAlto(30);
		//While application is running
		while (!quit)
		{
			//Handle events on queue
			while (SDL_PollEvent(&event) != 0)
			{
				//User requests quit
				if (event.type == SDL_QUIT)
				{
					quit = true;
				}
			}

			//Clear screen
			//SDL_RenderClear(gRenderer);

			//Render texture to screen
			//SDL_RenderCopy(gRenderer, gTexture, NULL, NULL);


			////Clear screen
			SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
			SDL_RenderClear(gRenderer);

			//Update screen

			/*onLoop();
			onRender();*/
			for (int i = 0; i < actoresJuego.size(); i++) {
				((GameActor*)actoresJuego[i])->setPosicionX(rand() % SCREEN_WIDTH);
				((GameActor*)actoresJuego[i])->setPosicionY(rand() % SCREEN_HEIGHT);

				actoresJuego[i]->render();
			}
			SDL_RenderPresent(gRenderer);
		}
	}

	//Free resources and close SDL
	close();

	return 0;

}

SDL_Texture* GameManager::loadTexture(std::string path)
{
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load(path.c_str());
	if (loadedSurface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
	}
	else
	{
		//Create texture from surface pixels
		newTexture = SDL_CreateTextureFromSurface(gRenderer, loadedSurface);
		if (newTexture == NULL)
		{
			printf("Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		//Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	return newTexture;
}