/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiDVDItem.h>

@class NSString;

@interface _AMiDVDMenu : _AMiDVDItem

@property (copy) NSString * assignedTheme; 
@property (copy) NSString * background; 
@property (copy) NSString * backgroundAsset; 
@property (copy) NSString * backgroundAudio; 
@property (copy) NSString * buttonFont; 
@property (copy) NSString * buttonFontColor; 
@property (assign) double buttonFontSize; 
@property (assign) double duration; 
@property (assign) long long horizontalTitleOffset; 
@property (copy) NSString * name; 
@property (copy,readonly) _AMiDVDMenu * parent; 
@property (copy) NSString * playlist; 
@property (assign) char snapToGrid; 
@property (assign) double soundtrackVolume; 
@property (copy) NSString * title; 
@property (copy) NSString * titleFont; 
@property (copy) NSString * titleFontColor; 
@property (assign) double titleFontSize; 
@property (assign) int transitionDirection; 
@property (readonly) double transitionDuration; 
@property (assign) int transitionType; 
@property (assign) char useIntro; 
@property (assign) char useOutro; 
@property (assign) long long verticalTitleOffset; 
-(id)slideshows;
-(int)transitionDirection;
-(void)setTransitionDirection:(int)arg1 ;
-(double)transitionDuration;
-(int)transitionType;
-(void)setTransitionType:(int)arg1 ;
-(id)dropzones;
-(id)movies;
-(id)textObjects;
-(NSString *)assignedTheme;
-(void)setAssignedTheme:(NSString *)arg1 ;
-(NSString *)backgroundAsset;
-(void)setBackgroundAsset:(NSString *)arg1 ;
-(NSString *)backgroundAudio;
-(void)setBackgroundAudio:(NSString *)arg1 ;
-(NSString *)buttonFont;
-(void)setButtonFont:(NSString *)arg1 ;
-(NSString *)buttonFontColor;
-(void)setButtonFontColor:(NSString *)arg1 ;
-(double)buttonFontSize;
-(void)setButtonFontSize:(double)arg1 ;
-(long long)horizontalTitleOffset;
-(void)setHorizontalTitleOffset:(long long)arg1 ;
-(NSString *)playlist;
-(void)setPlaylist:(NSString *)arg1 ;
-(char)snapToGrid;
-(void)setSnapToGrid:(char)arg1 ;
-(double)soundtrackVolume;
-(void)setSoundtrackVolume:(double)arg1 ;
-(NSString *)titleFontColor;
-(void)setTitleFontColor:(NSString *)arg1 ;
-(double)titleFontSize;
-(void)setTitleFontSize:(double)arg1 ;
-(char)useIntro;
-(void)setUseIntro:(char)arg1 ;
-(char)useOutro;
-(void)setUseOutro:(char)arg1 ;
-(long long)verticalTitleOffset;
-(void)setVerticalTitleOffset:(long long)arg1 ;
-(NSString *)background;
-(void)setBackground:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)buttons;
-(NSString *)titleFont;
-(void)setTitleFont:(NSString *)arg1 ;
-(_AMiDVDMenu *)parent;
@end

