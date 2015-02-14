/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/Versions/A/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationCenter/NotificationCenter-Structs.h>
#import <AppKit/NSView.h>

@class _NCMachSendRight, _NCWidgetServiceViewController;

@interface _NCWidgetContainerView : NSView {

	BOOL _inSetFrame;
	_NCMachSendRight* _currentFence;
	BOOL _sendFrameChangesToHost;
	_NCWidgetServiceViewController* _owner;

}

@property (__weak) _NCWidgetServiceViewController * owner;              //@synthesize owner=_owner - In the implementation block
@property (assign) BOOL sendFrameChangesToHost;                         //@synthesize sendFrameChangesToHost=_sendFrameChangesToHost - In the implementation block
-(void)setSendFrameChangesToHost:(BOOL)arg1 ;
-(BOOL)sendFrameChangesToHost;
-(void)setFrame:(CGRect)arg1 ;
-(void)setOwner:(_NCWidgetServiceViewController *)arg1 ;
-(_NCWidgetServiceViewController *)owner;
@end

