/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiTunes7Item.h>

@class NSString;

@interface _AMiTunes7Playlist : _AMiTunes7Item

@property (readonly) long long duration; 
@property (readonly) long long index; 
@property (copy) NSString * name; 
@property (copy,readonly) _AMiTunes7Playlist * parent; 
@property (assign) char shuffle; 
@property (readonly) long long size; 
@property (assign) int songRepeat; 
@property (readonly) int specialKind; 
@property (copy,readonly) NSString * time; 
@property (readonly) char visible; 
-(void)moveTo:(id)arg1 ;
-(char)shuffle;
-(void)setShuffle:(char)arg1 ;
-(int)songRepeat;
-(void)setSongRepeat:(int)arg1 ;
-(int)specialKind;
-(id)searchFor:(id)arg1 only:(int)arg2 ;
-(char)visible;
-(NSString *)time;
-(long long)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)index;
-(long long)size;
-(_AMiTunes7Playlist *)parent;
-(id)tracks;
@end

