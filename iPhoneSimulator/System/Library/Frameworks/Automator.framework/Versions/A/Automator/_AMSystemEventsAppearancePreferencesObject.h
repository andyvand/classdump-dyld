/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMSystemEventsItem.h>

@class NSColor;

@interface _AMSystemEventsAppearancePreferencesObject : _AMSystemEventsItem

@property (assign) int appearance; 
@property (assign) char doubleClickMinimizes; 
@property (assign) long long fontSmoothingLimit; 
@property (assign) int fontSmoothingStyle; 
@property (copy) NSColor * highlightColor; 
@property (assign) long long recentApplicationsLimit; 
@property (assign) long long recentDocumentsLimit; 
@property (assign) long long recentServersLimit; 
@property (assign) int scrollArrowPlacement; 
@property (assign) int scrollBarAction; 
@property (assign) char smoothScrolling; 
-(char)doubleClickMinimizes;
-(void)setDoubleClickMinimizes:(char)arg1 ;
-(long long)fontSmoothingLimit;
-(void)setFontSmoothingLimit:(long long)arg1 ;
-(int)fontSmoothingStyle;
-(void)setFontSmoothingStyle:(int)arg1 ;
-(void)setHighlightColor:(NSColor *)arg1 ;
-(long long)recentApplicationsLimit;
-(void)setRecentApplicationsLimit:(long long)arg1 ;
-(long long)recentDocumentsLimit;
-(void)setRecentDocumentsLimit:(long long)arg1 ;
-(long long)recentServersLimit;
-(void)setRecentServersLimit:(long long)arg1 ;
-(int)scrollArrowPlacement;
-(void)setScrollArrowPlacement:(int)arg1 ;
-(int)scrollBarAction;
-(void)setScrollBarAction:(int)arg1 ;
-(char)smoothScrolling;
-(void)setSmoothScrolling:(char)arg1 ;
-(int)appearance;
-(void)setAppearance:(int)arg1 ;
-(NSColor *)highlightColor;
@end

