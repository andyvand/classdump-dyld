/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class QLPreviewView, NSWindow;

@interface QLPreviewSwipeController : NSObject {

	QLPreviewView* _previewView;
	QLPreviewView* _transitionPreviewView;
	NSWindow* _transitionWindow;
	/*^block*/id _completionBlock;
	int _status;
	int _swipeStatus;
	char _forwardSwipe;
	char _validateSwipe;

}

@property (assign) QLPreviewView * previewView;              //@synthesize previewView=_previewView - In the implementation block
@property (readonly) char forwardSwipe;                      //@synthesize forwardSwipe=_forwardSwipe - In the implementation block
@property (assign) int status;                               //@synthesize status=_status - In the implementation block
-(char)forwardSwipe;
-(void)abortSwipe;
-(void)setPreviewView:(QLPreviewView *)arg1 ;
-(void)swipeWithEvent:(id)arg1 containingView:(id)arg2 options:(int)arg3 beginBlock:(/*^block*/id)arg4 previewFrameBlock:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_swipeEndedAndCompleted:(char)arg1 ;
-(void)dealloc;
-(int)status;
-(QLPreviewView *)previewView;
-(void)setStatus:(int)arg1 ;
@end

