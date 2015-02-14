/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKUILayoutItem <NSObject>
@optional
-(void)setActiveKeyboardHover:(char)arg1;
-(id)getAlignmentLabelAndAddToSubviewsIfNeeded;
-(void)animationDidFinish:(id)arg1;
-(double)horizontalInset;
-(id)claimedPboardTypes;
-(void)enumerateSubitemsUsingBlock:(/*^block*/id)arg1;
-(void)setNeedsUpdateConstraints:(char)arg1;
-(CGSize*)intrinsicContentSize;
-(char)performDragOperation:(id)arg1;

@required
-(id)uuid;
-(id)firstKeyView;
-(id)lastKeyView;
-(id)eventViewController;
-(char)shouldDisplayForEvent:(id)arg1;
-(id)initWithEventViewController:(id)arg1;
-(void)setEventViewController:(id)arg1;
-(char)updateWithDiff:(id)arg1;
-(char)needsExpansion;
-(char)wantsAnimationSuppression;
-(id)enclosingGadgetContainer;
-(void)updateScrollState;
-(id)view;
-(char)isEditable;
-(id)scrollView;
-(id)parentItem;
-(char)isContainer;
-(char)isExpanded;
-(void)setExpanded:(char)arg1;
-(void)setParentItem:(id)arg1;
-(id)event;
-(void)setEvent:(id)arg1;
-(char)isScrolling;

@end

