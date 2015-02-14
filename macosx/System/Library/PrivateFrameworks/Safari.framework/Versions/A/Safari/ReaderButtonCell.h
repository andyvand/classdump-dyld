/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSButtonCell.h>

@interface ReaderButtonCell : NSButtonCell {

	long long _readerButtonState;

}

@property (assign) long long readerButtonState;              //@synthesize readerButtonState=_readerButtonState - In the implementation block
-(void)setReaderButtonState:(long long)arg1 ;
-(long long)readerButtonState;
-(void)drawBezelWithFrame:(CGRect)arg1 oldState:(long long)arg2 newState:(long long)arg3 fractionComplete:(double)arg4 inView:(id)arg5 ;
-(void)drawTitleWithFrame:(CGRect)arg1 oldState:(long long)arg2 newState:(long long)arg3 fractionComplete:(double)arg4 inView:(id)arg5 ;
-(void)_drawBezelWithFrame:(CGRect)arg1 state:(long long)arg2 opacity:(double)arg3 inView:(id)arg4 ;
-(void)_drawTitleWithFrame:(CGRect)arg1 state:(long long)arg2 fraction:(double)arg3 inView:(id)arg4 ;
-(void)_getLeftCap:(id*)arg1 fill:(id*)arg2 rightCap:(id*)arg3 forState:(long long)arg4 ;
-(void)_getTextColor:(id*)arg1 engravingColor:(id*)arg2 forState:(long long)arg3 alphaMultiplier:(double)arg4 ;
-(CGRect)_titleRectForBounds:(CGRect)arg1 state:(long long)arg2 ;
@end

