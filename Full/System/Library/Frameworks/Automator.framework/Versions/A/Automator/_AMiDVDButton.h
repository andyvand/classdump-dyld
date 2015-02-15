/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiDVDItem.h>

@class NSString, _AMiDVDMenu;

@interface _AMiDVDButton : _AMiDVDItem

@property (copy) NSString * buttonShapeName; 
@property (readonly) int buttonType; 
@property (copy) NSString * customAsset; 
@property (copy) NSString * fontColor; 
@property (copy) NSString * fontDropShadow; 
@property (assign) char fontDropShadowEnabled; 
@property (copy) NSString * fontName; 
@property (assign) double fontSize; 
@property (assign) long long horizontalOffset; 
@property (readonly) char isBack; 
@property (readonly) char isFolder; 
@property (readonly) char isForward; 
@property (assign) char isMotionButton; 
@property (readonly) char isMovie; 
@property (readonly) char isSlideshow; 
@property (copy) NSString * label; 
@property (assign) int labelAlignment; 
@property (assign) int labelPosition; 
@property (copy) NSString * name; 
@property (copy,readonly) _AMiDVDMenu * parent; 
@property (assign) double scalingFactor; 
@property (assign) char selectionState; 
@property (copy,readonly) NSString * targetFolder; 
@property (copy,readonly) NSString * targetMovie; 
@property (copy,readonly) NSString * targetSlideshow; 
@property (assign) int transitionDirection; 
@property (readonly) double transitionDuration; 
@property (assign) int transitionType; 
@property (assign) long long verticalOffset; 
-(int)labelPosition;
-(void)setLabelPosition:(int)arg1 ;
-(NSString *)buttonShapeName;
-(void)setButtonShapeName:(NSString *)arg1 ;
-(int)buttonType;
-(NSString *)customAsset;
-(void)setCustomAsset:(NSString *)arg1 ;
-(NSString *)fontDropShadow;
-(void)setFontDropShadow:(NSString *)arg1 ;
-(char)fontDropShadowEnabled;
-(void)setFontDropShadowEnabled:(char)arg1 ;
-(char)isBack;
-(char)isForward;
-(char)isMotionButton;
-(void)setIsMotionButton:(char)arg1 ;
-(char)isMovie;
-(char)isSlideshow;
-(int)labelAlignment;
-(void)setLabelAlignment:(int)arg1 ;
-(NSString *)targetMovie;
-(NSString *)targetSlideshow;
-(int)transitionDirection;
-(void)setTransitionDirection:(int)arg1 ;
-(double)transitionDuration;
-(int)transitionType;
-(void)setTransitionType:(int)arg1 ;
-(char)isFolder;
-(void)setHorizontalOffset:(long long)arg1 ;
-(long long)horizontalOffset;
-(NSString *)fontColor;
-(void)setFontColor:(NSString *)arg1 ;
-(NSString *)targetFolder;
-(long long)verticalOffset;
-(void)setVerticalOffset:(long long)arg1 ;
-(char)selectionState;
-(void)setSelectionState:(char)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)fontName;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(_AMiDVDMenu *)parent;
-(void)setScalingFactor:(double)arg1 ;
-(double)scalingFactor;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
@end

