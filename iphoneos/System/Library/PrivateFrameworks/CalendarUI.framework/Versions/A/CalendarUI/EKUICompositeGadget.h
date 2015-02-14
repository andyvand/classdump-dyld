/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUIGadget.h>

@protocol EKUILayoutItem;
@class EKEventViewController, NSView, NSString;

@interface EKUICompositeGadget : EKUIGadget {

	char _isExpanded;
	EKEventViewController* _eventViewController;
	NSView* _view;
	NSString* _uuid;
	id<EKUILayoutItem> _parentItem;

}

@property (__weak) EKEventViewController * eventViewController;              //@synthesize eventViewController=_eventViewController - In the implementation block
@property (setter=setExpanded:) char isExpanded; 
@property (retain) NSView * view;                                            //@synthesize view=_view - In the implementation block
@property (retain) NSString * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (__weak) id<EKUILayoutItem> parentItem;                            //@synthesize parentItem=_parentItem - In the implementation block
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(EKEventViewController *)eventViewController;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
-(char)updateWithDiff:(id)arg1 ;
-(char)needsExpansion;
-(char)wantsAnimationSuppression;
-(void)updateScrollState;
-(void)enumerateSubitemsUsingBlock:(/*^block*/id)arg1 ;
-(id)subgadgets;
-(void)updateConstraints;
-(NSView *)view;
-(char)isEditable;
-(void)setView:(NSView *)arg1 ;
-(id<EKUILayoutItem>)parentItem;
-(char)isContainer;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(void)setParentItem:(id<EKUILayoutItem>)arg1 ;
-(id)event;
-(void)updateKeyViewLoop;
-(void)setEvent:(id)arg1 ;
@end

