/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class EKUICompositeGadget;

@interface EKUICompositeView : NSView {

	EKUICompositeGadget* _gadget;

}

@property (__weak) EKUICompositeGadget * gadget;              //@synthesize gadget=_gadget - In the implementation block
-(void)setGadget:(EKUICompositeGadget *)arg1 ;
-(EKUICompositeGadget *)gadget;
-(void)updateConstraints;
@end

