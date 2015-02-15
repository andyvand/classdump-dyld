/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSView;


@protocol QLIndexSheetDelegate <QLIndexSheetViewDelegate>
@property (readonly) unsigned long long indexSheetMaxColumns; 
@property (readonly) unsigned long long indexSheetMaxRows; 
@property (readonly) char indexSheetHasDarkBackground; 
@property (readonly) char indexSheetShowsControls; 
@property (readonly) NSView * indexSheetHostingView; 
@property (readonly) CGRect indexSheetFrame; 
@required
-(CGImageRef)copyIndexSheetTransitionImageWithFrame:(CGRect*)arg1 transitionFrame:(CGRect*)arg2;
-(unsigned long long)indexSheetMaxColumns;
-(unsigned long long)indexSheetMaxRows;
-(char)indexSheetHasDarkBackground;
-(char)indexSheetShowsControls;
-(NSView *)indexSheetHostingView;
-(CGRect)indexSheetFrame;

@end
