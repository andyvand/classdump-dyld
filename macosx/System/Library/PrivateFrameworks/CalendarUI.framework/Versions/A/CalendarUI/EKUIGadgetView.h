/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSView.h>

@class EKUIGadget, NSTrackingArea, NSView;

@interface EKUIGadgetView : NSView {

	EKUIGadget* _gadget;
	NSTrackingArea* _trackingArea;
	NSView* _cachedPreviousKeyView;
	NSView* _cachedNextKeyView;

}

@property (__weak) EKUIGadget * gadget;                         //@synthesize gadget=_gadget - In the implementation block
@property (retain) NSTrackingArea * trackingArea;               //@synthesize trackingArea=_trackingArea - In the implementation block
@property (__weak) NSView * cachedPreviousKeyView;              //@synthesize cachedPreviousKeyView=_cachedPreviousKeyView - In the implementation block
@property (__weak) NSView * cachedNextKeyView;                  //@synthesize cachedNextKeyView=_cachedNextKeyView - In the implementation block
-(void)setTrackingArea:(NSTrackingArea *)arg1 ;
-(void)setGadget:(EKUIGadget *)arg1 ;
-(EKUIGadget *)gadget;
-(NSView *)cachedPreviousKeyView;
-(void)setCachedPreviousKeyView:(NSView *)arg1 ;
-(NSView *)cachedNextKeyView;
-(void)setCachedNextKeyView:(NSView *)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(CGSize)intrinsicContentSize;
-(NSTrackingArea *)trackingArea;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)updateTrackingAreas;
@end

