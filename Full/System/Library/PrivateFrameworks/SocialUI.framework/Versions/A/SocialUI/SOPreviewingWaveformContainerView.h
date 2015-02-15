/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSView.h>

@class SOPreviewingWaveformView, NSTextField;

@interface SOPreviewingWaveformContainerView : NSView {

	SOPreviewingWaveformView* _waveformView;
	NSTextField* _timeStamp;

}

@property (nonatomic,retain) SOPreviewingWaveformView * waveformView;              //@synthesize waveformView=_waveformView - In the implementation block
@property (nonatomic,retain) NSTextField * timeStamp;                              //@synthesize timeStamp=_timeStamp - In the implementation block
-(NSTextField *)timeStamp;
-(void)clearWaveform;
-(SOPreviewingWaveformView *)waveformView;
-(void)setWaveformImage:(id)arg1 ;
-(void)setWaveformView:(SOPreviewingWaveformView *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTime:(double)arg1 ;
-(void)setTimeStamp:(NSTextField *)arg1 ;
@end

