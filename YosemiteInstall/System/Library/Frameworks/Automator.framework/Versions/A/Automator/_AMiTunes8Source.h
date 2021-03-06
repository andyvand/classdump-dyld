/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiTunes8Item.h>

@interface _AMiTunes8Source : _AMiTunes8Item

@property (readonly) long long capacity; 
@property (readonly) long long freeSpace; 
@property (readonly) int kind; 
-(id)audioCDPlaylists;
-(id)devicePlaylists;
-(id)libraryPlaylists;
-(id)playlists;
-(id)radioTunerPlaylists;
-(id)userPlaylists;
-(void)update;
-(void)eject;
-(long long)capacity;
-(long long)freeSpace;
-(int)kind;
@end

