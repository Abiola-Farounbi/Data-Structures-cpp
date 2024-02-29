//
//  main.cpp
//  MusicPlayer
//
//  Created by Abiola Farounbi on 11/12/2023.
//

#include <iostream>
#include "MusicPlayer.hpp"


int main() {
        PlayList * myPlaylist = new PlayList();

        myPlaylist->addSong("Imagine", "John Lennon");
        myPlaylist->addSong("Bohemian Rhapsody", "Queen");
        myPlaylist->addSong("Hallelujah", "Leonard Cohen");
    
        myPlaylist->displayPlayList();
   
      
       

    return 0;
}
