/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:38 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <AppKit/NSSlider.h>

@interface StdMovieUISlider : NSSlider
+(void)initialize;
+(Class)cellClass;
-(void)setLoadedPercentage:(double)arg1 ;
-(void)setSelectionStart:(double)arg1 duration:(double)arg2 ;
-(void)getSelectionStart:(double*)arg1 duration:(double*)arg2 ;
-(char)isInView;
-(char)acknowledgeSelectionChange;
-(double)loadedPercentage;
-(void)deselect;
-(char)gotoPrevious;
-(char)gotoNext;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isFlipped;
-(void)setEditable:(char)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(double)minValue;
@end

