/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiTunes8Window.h>

@class SBObject, _AMiTunes8Playlist;

@interface _AMiTunes8BrowserWindow : _AMiTunes8Window

@property (assign) char minimized; 
@property (copy,readonly) SBObject * selection; 
@property (copy) _AMiTunes8Playlist * view; 
-(char)minimized;
-(void)setMinimized:(char)arg1 ;
-(_AMiTunes8Playlist *)view;
-(void)setView:(_AMiTunes8Playlist *)arg1 ;
-(SBObject *)selection;
@end

