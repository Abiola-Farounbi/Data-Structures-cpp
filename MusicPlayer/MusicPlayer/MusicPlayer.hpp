//
//  MusicPlayer.hpp
//  MusicPlayer
//
//  Created by Abiola Farounbi on 13/12/2023.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#ifndef MusicPlayer_hpp
#define MusicPlayer_hpp


struct SongDetails{
    string songName;
    string artist;
};

class Song
{
    public:
        Song* previous;
        Song* next;
        SongDetails songDetails;
    
        Song(string songName, string artist)
        {
            next = NULL;
            previous = NULL;
            songDetails.artist = artist;
            songDetails.songName = songName;
        }
};


class PlayList
{
   private:
      Song* front;
      Song* back;
   public:
      PlayList();
      ~PlayList();
      void addSong(string,string);
      void displayPlayList();
      void displayReversePlayList();
      void destroyList();
};


#endif /* MusicPlayer_hpp */
