//
//  Constants.h
//  VLC Remote
//
//  Created by Srikanth VM on 30/03/14.
//  Copyright (c) 2014 Kantu Labs. All rights reserved.
//

// URLS

#define STATUS             @"/requests/status.xml"
#define BROWSE             @"/requests/browse.xml?uri="
#define ARTWORK            @"/art"
#define VOLUME             STATUS @"?command=volume&val="
#define PLAY_FILE          STATUS @"?command=in_play&input="
#define NEXT_TRACK         STATUS @"?command=pl_next"
#define PREV_TRACK         STATUS @"?command=pl_previous"
#define PLAY_PAUSE_TRACK   STATUS @"?command=pl_pause"
#define STOP_TRACK         STATUS @"?command=pl_stop"
#define FULLSCREEN         STATUS @"?command=fullscreen"
#define ADJUST_VOL         STATUS @"?command=volume&val="
#define CLEAR_QUEUE        STATUS @"?command=pl_empty"


// Browse Element Attributes

#define ROOT_ELEMENT       @"root"
#define CHILD_ELEMENT      @"element"
#define CATEGORY_ELEMENT   @"category"
#define INFO_ELEMENT       @"info"

#define FILE_TYPE          @"type"
#define FILE_PATH          @"path"
#define FILE_URI           @"uri"
#define FILE_NAME          @"name"

// TRACK STATUS

#define TRACK_ARTIST       @"artist"
#define TRACK_TITLE        @"title"
#define TRACK_ALBUM        @"album"
#define TRACK_NAME         @"filename"

// Misc

#define DIR_FILE           @"dir"
#define LAST_VISITED_DIR   @"last_visited_dir"
#define REMOTE_IP          @"remote_ip"

