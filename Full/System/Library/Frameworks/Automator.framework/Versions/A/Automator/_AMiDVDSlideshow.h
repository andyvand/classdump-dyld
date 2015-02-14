/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiDVDItem.h>

@class NSString, NSArray, _AMiDVDMenu, _AMiDVDButton;

@interface _AMiDVDSlideshow : _AMiDVDItem

@property (copy) NSString * backgroundAudio; 
@property (copy) NSArray * data; 
@property (assign) char displayArrows; 
@property (assign) double duration; 
@property (assign) char DVDROM; 
@property (assign) char loop; 
@property (copy) NSString * name; 
@property (copy,readonly) _AMiDVDMenu * parent; 
@property (copy) NSString * playlist; 
@property (assign) double soundtrackVolume; 
@property (copy,readonly) _AMiDVDButton * sourcebutton; 
@property (assign) int transitionDirection; 
@property (readonly) double transitionDuration; 
@property (assign) int transitionType; 
-(int)transitionDirection;
-(void)setTransitionDirection:(int)arg1 ;
-(double)transitionDuration;
-(int)transitionType;
-(void)setTransitionType:(int)arg1 ;
-(NSString *)backgroundAudio;
-(void)setBackgroundAudio:(NSString *)arg1 ;
-(NSString *)playlist;
-(void)setPlaylist:(NSString *)arg1 ;
-(double)soundtrackVolume;
-(void)setSoundtrackVolume:(double)arg1 ;
-(char)displayArrows;
-(void)setDisplayArrows:(char)arg1 ;
-(char)DVDROM;
-(void)setDVDROM:(char)arg1 ;
-(_AMiDVDButton *)sourcebutton;
-(char)loop;
-(id)images;
-(void)setLoop:(char)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSArray *)data;
-(_AMiDVDMenu *)parent;
-(void)setData:(NSArray *)arg1 ;
@end

