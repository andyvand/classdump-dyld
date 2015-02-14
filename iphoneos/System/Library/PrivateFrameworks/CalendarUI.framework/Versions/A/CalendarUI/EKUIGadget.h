/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/EKUILayoutItem.h>

@protocol EKUILayoutItem;
@class NSView, EKUIGadgetScrollView, EKEventViewController, NSString, NSLayoutConstraint;

@interface EKUIGadget : NSObject <EKUILayoutItem> {

	char _isVisible;
	char _shouldScrollToTop;
	char _isScrolling;
	char _scrollsOutsideMainScrollArea;
	NSView* _gadgetView;
	id<EKUILayoutItem> _parentItem;
	NSView* _firstKeyView;
	NSView* _lastKeyView;
	EKUIGadgetScrollView* _scrollView;
	EKEventViewController* _eventViewController;
	NSString* _uuid;
	NSLayoutConstraint* _scrollContentHeightConstraint;
	NSLayoutConstraint* _scrollViewMaxHeightConstraint;

}

@property (retain) NSView * gadgetView;                                             //@synthesize gadgetView=_gadgetView - In the implementation block
@property (__weak) id<EKUILayoutItem> parentItem;                                   //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,nonatomic,__weak) NSView * firstKeyView;                          //@synthesize firstKeyView=_firstKeyView - In the implementation block
@property (assign,nonatomic,__weak) NSView * lastKeyView;                           //@synthesize lastKeyView=_lastKeyView - In the implementation block
@property (retain) EKUIGadgetScrollView * scrollView;                               //@synthesize scrollView=_scrollView - In the implementation block
@property (setter=setExpanded:) char isExpanded; 
@property (__weak) EKEventViewController * eventViewController;                     //@synthesize eventViewController=_eventViewController - In the implementation block
@property (retain) NSString * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign) char isVisible;                                                  //@synthesize isVisible=_isVisible - In the implementation block
@property (assign) char shouldScrollToTop;                                          //@synthesize shouldScrollToTop=_shouldScrollToTop - In the implementation block
@property (retain) NSLayoutConstraint * scrollContentHeightConstraint;              //@synthesize scrollContentHeightConstraint=_scrollContentHeightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * scrollViewMaxHeightConstraint;              //@synthesize scrollViewMaxHeightConstraint=_scrollViewMaxHeightConstraint - In the implementation block
@property (assign) char isScrolling;                                                //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign) char scrollsOutsideMainScrollArea;                               //@synthesize scrollsOutsideMainScrollArea=_scrollsOutsideMainScrollArea - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(void)scrollToTop;
-(NSString *)uuid;
-(void)setFirstKeyView:(NSView *)arg1 ;
-(void)setLastKeyView:(NSView *)arg1 ;
-(NSView *)firstKeyView;
-(NSView *)lastKeyView;
-(void)setUuid:(NSString *)arg1 ;
-(char)hasContent;
-(double)maxHeight;
-(EKEventViewController *)eventViewController;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
-(char)updateWithDiff:(id)arg1 ;
-(char)needsExpansion;
-(char)wantsAnimationSuppression;
-(id)enclosingGadgetContainer;
-(void)updateScrollState;
-(void)animationDidFinish:(id)arg1 ;
-(id)claimedPboardTypes;
-(void)updateWithChanges:(id)arg1 ;
-(void)saveCompleteChange;
-(void)mouseEnteredGadgetView;
-(void)mouseExitedGadgetView;
-(char)shouldScrollToTop;
-(void)setShouldScrollToTop:(char)arg1 ;
-(void)setGadgetScrollsOutsideMainScrollArea:(char)arg1 ;
-(void)savePartialChange;
-(void)saveCompleteChangeWithoutPromptingUserAboutDecline;
-(char)scrollsOutsideMainScrollArea;
-(NSView *)gadgetView;
-(void)_scrollViewFrameDidChange:(id)arg1 ;
-(void)setScrollsOutsideMainScrollArea:(char)arg1 ;
-(NSLayoutConstraint *)scrollContentHeightConstraint;
-(NSLayoutConstraint *)scrollViewMaxHeightConstraint;
-(void)setScrollContentHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setScrollViewMaxHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setIsScrolling:(char)arg1 ;
-(char)isInterestedInChanges:(id)arg1 ;
-(void)scrollToBottom;
-(void)inspectorWindowWillClose;
-(id)timeZoneToDisplayEventIn;
-(void)setGadgetView:(NSView *)arg1 ;
-(void)dealloc;
-(void)setNeedsUpdateConstraints:(char)arg1 ;
-(void)updateConstraints;
-(id)view;
-(char)isVisible;
-(char)isEditable;
-(char)performDragOperation:(id)arg1 ;
-(EKUIGadgetScrollView *)scrollView;
-(id<EKUILayoutItem>)parentItem;
-(char)isContainer;
-(char)isExpanded;
-(void)setIsVisible:(char)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(void)setScrollView:(EKUIGadgetScrollView *)arg1 ;
-(void)setParentItem:(id<EKUILayoutItem>)arg1 ;
-(id)event;
-(void)setEvent:(id)arg1 ;
-(char)isScrolling;
@end

