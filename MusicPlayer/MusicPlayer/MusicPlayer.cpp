//
//  MusicPlayer.cpp
//  MusicPlayer
//
//  Created by Abiola Farounbi on 13/12/2023.
//

#include "MusicPlayer.hpp"
#include <iostream>
using namespace std;

PlayList::PlayList()
{
    front = NULL;
    back = NULL;
}

PlayList::~PlayList()
{
   destroyList();
}

void PlayList::addSong(string artist, string songName)
{
    Song* item = new Song(artist,songName);
    if(back == NULL)
    {
        back = item;
        front = item;
    }
    else {
        back->next = item;
        item->previous = back;
        back = item;
    }
}


void PlayList::displayPlayList()
{
   cout << "Current Songs in the list:" << endl;
   Song* temp = front;
   while(temp != NULL)
   {
      cout << " " << temp->songDetails.artist << " " << temp->songDetails.songName << endl;
      temp = temp->next;
   }
}
void PlayList::displayReversePlayList()
{
    cout << "Current Songs in the list in reverse order:" << endl;
   Song* temp = back;
   while(temp != NULL)
   {
    cout << " " << temp->songDetails.artist << " " << temp->songDetails.songName << endl;
    temp = temp->previous;
   }
}
void PlayList::destroyList()
{
   Song* temp = back;
   while(temp != NULL)
   {
      Song* temp2 = temp;
      temp = temp->previous;
      delete temp2;
   }
   back = NULL;
   front = NULL;
}

