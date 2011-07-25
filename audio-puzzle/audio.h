#include <sdl/SDL_audio.h>
#include <sdl/SDL_mixer.h>

void AudioInit();
void AudioShutdown();
void PlayAudio(char*, int, int, int);
void PlayBlockSound(int, int);

enum ear
{
	LEFT,
	RIGHT,
	BOTH
};
