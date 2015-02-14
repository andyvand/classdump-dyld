/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewSlideshowDelegate;
@class QLPreviewView, NSTimer;

@interface QLPreviewSlideshow : NSObject {

	QLPreviewView* _previewView;
	id<QLPreviewSlideshowDelegate> _delegate;
	double _staticDuration;
	NSTimer* _slideshowTimer;
	int _status;

}

@property (retain) QLPreviewView * previewView;                          //@synthesize previewView=_previewView - In the implementation block
@property (assign) id<QLPreviewSlideshowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double staticDuration;                                //@synthesize staticDuration=_staticDuration - In the implementation block
@property (assign) char running; 
@property (readonly) int status; 
+(id)keyPathsForValuesAffectingRunning;
-(char)running;
-(void)setRunning:(char)arg1 ;
-(void)setPreviewView:(QLPreviewView *)arg1 ;
-(void)setStaticDuration:(double)arg1 ;
-(void)_startSlideshow;
-(void)_stopSlideshow;
-(void)_updateSlideshow;
-(void)_stopTimer;
-(void)_slideshowGoToNextItem:(id)arg1 ;
-(void)_slideshowItemPlayedToTheEnd;
-(void)_prepareSlideshowForNextItem;
-(double)staticDuration;
-(id)init;
-(void)setDelegate:(id<QLPreviewSlideshowDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<QLPreviewSlideshowDelegate>)delegate;
-(int)status;
-(QLPreviewView *)previewView;
@end

