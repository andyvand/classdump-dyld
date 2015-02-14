/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class IKStatusLayer, NSString;

@interface IKNStatusView : NSView {

	IKStatusLayer* _status;
	char _updateStatusTextAfterMovingToWindow;
	id _delegate;

}

@property (copy) NSString * statusText; 
@property (assign) double progress; 
@property (assign) char canCancel; 
@property (assign) id delegate;                      //@synthesize delegate=_delegate - In the implementation block
-(void)resizeStatusLayer;
-(void)setCanCancel:(char)arg1 ;
-(char)canCancel;
-(void)resetStatus;
-(void)setDelegate:(id)arg1 ;
-(void)setWantsLayer:(char)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)delegate;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(double)progress;
-(void)setStatusText:(NSString *)arg1 ;
-(NSString *)statusText;
-(void)setProgress:(double)arg1 ;
@end

