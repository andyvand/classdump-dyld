/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <AppKit/NSView.h>

@class CALayer;

@interface _WKThumbnailView : NSView {

	RetainPtr<WKView>* _wkView;
	WebPageProxy* _webPageProxy;
	char _originalMayStartMediaWhenInWindow;
	char _originalSourceViewIsInWindow;
	char _snapshotWasDeferred;
	double _lastSnapshotScale;
	char _waitingForSnapshot;
	double _scale;

}

@property (assign,nonatomic) double scale;                                                         //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) char usesSnapshot; 
@property (assign,setter=_setThumbnailLayer:,nonatomic) CALayer * _thumbnailLayer; 
@property (assign,setter=_setWaitingForSnapshot:,nonatomic) char _waitingForSnapshot;              //@synthesize waitingForSnapshot=_waitingForSnapshot - In the implementation block
-(id)initWithFrame:(CGRect)arg1 fromWKView:(id)arg2 ;
-(void)setUsesSnapshot:(char)arg1 ;
-(double)scale;
-(void)_requestSnapshotIfNeeded;
-(void)_viewWasParented;
-(void)_viewWasUnparented;
-(void)_didTakeSnapshot:(CGImageRef)arg1 ;
-(char)usesSnapshot;
-(void)_setThumbnailLayer:(id)arg1 ;
-(CALayer *)_thumbnailLayer;
-(char)_waitingForSnapshot;
-(void)_setWaitingForSnapshot:(char)arg1 ;
-(void)viewDidMoveToWindow;
-(void)setScale:(double)arg1 ;
@end

