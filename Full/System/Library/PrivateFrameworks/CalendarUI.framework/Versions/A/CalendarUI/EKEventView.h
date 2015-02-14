/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class EKEventViewController;

@interface EKEventView : NSView {

	EKEventViewController* _controller;

}

@property (__weak) EKEventViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)initWithEventViewController:(id)arg1 ;
-(EKEventViewController *)controller;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)setController:(EKEventViewController *)arg1 ;
@end

