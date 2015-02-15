/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/EKUILayoutItem.h>

@protocol EKUILayoutItem;
@class NSString, EKUIGadget, EKEventViewController, NSMutableOrderedSet, EKUIGadgetContainerView, EKUIGadgetContainerDividerView, NSDictionary, NSMutableDictionary, NSArray, CalDefaultDictionary;

@interface EKUIGadgetContainer : NSObject <EKUILayoutItem> {

	char _doNotPassdownExpandedState;
	char _ignoresMouseEvents;
	char _canBecomeKey;
	char _selectsFirstKeyViewOnClick;
	char _isTopLevelContainer;
	char _isExpanded;
	char _isHovered;
	char _activeKeyboardHover;
	double _maximumHeightBeforeScrolling;
	NSString* _accessibilityDescription;
	EKUIGadgetContainer* _nextContainer;
	EKUIGadgetContainer* _previousContainer;
	EKUIGadget* _firstGadget;
	/*^block*/id _shouldDisplayDividerAboveBlock;
	EKEventViewController* _eventViewController;
	id<EKUILayoutItem> _parentItem;
	NSString* _uuid;
	NSMutableOrderedSet* _mutableSubitems;
	NSMutableOrderedSet* _currentlyDisplayedItems;
	EKUIGadgetContainerView* _containerView;
	EKUIGadgetContainerDividerView* _topDivider;
	EKUIGadgetContainerDividerView* _bottomDivider;
	NSDictionary* _metrics;
	NSMutableDictionary* _conditionalMetrics;
	NSArray* _topConstraints;
	NSArray* _bottomConstraints;
	NSArray* _subitemLabelConstraints;
	CalDefaultDictionary* _spacingOverrides;

}

@property (assign) double maximumHeightBeforeScrolling;                         //@synthesize maximumHeightBeforeScrolling=_maximumHeightBeforeScrolling - In the implementation block
@property (assign) char doNotPassdownExpandedState;                             //@synthesize doNotPassdownExpandedState=_doNotPassdownExpandedState - In the implementation block
@property (assign) char ignoresMouseEvents;                                     //@synthesize ignoresMouseEvents=_ignoresMouseEvents - In the implementation block
@property (assign) char canBecomeKey;                                           //@synthesize canBecomeKey=_canBecomeKey - In the implementation block
@property (assign) char selectsFirstKeyViewOnClick;                             //@synthesize selectsFirstKeyViewOnClick=_selectsFirstKeyViewOnClick - In the implementation block
@property (copy) NSString * accessibilityDescription;                           //@synthesize accessibilityDescription=_accessibilityDescription - In the implementation block
@property (assign) char isTopLevelContainer;                                    //@synthesize isTopLevelContainer=_isTopLevelContainer - In the implementation block
@property (readonly) char isAnimating; 
@property (readonly) char hasKeyboardFocus; 
@property (__weak) EKUIGadgetContainer * nextContainer;                         //@synthesize nextContainer=_nextContainer - In the implementation block
@property (__weak) EKUIGadgetContainer * previousContainer;                     //@synthesize previousContainer=_previousContainer - In the implementation block
@property (__weak) EKUIGadget * firstGadget;                                    //@synthesize firstGadget=_firstGadget - In the implementation block
@property (copy) id shouldDisplayDividerAboveBlock;                             //@synthesize shouldDisplayDividerAboveBlock=_shouldDisplayDividerAboveBlock - In the implementation block
@property (__weak) EKEventViewController * eventViewController;                 //@synthesize eventViewController=_eventViewController - In the implementation block
@property (__weak) id<EKUILayoutItem> parentItem;                               //@synthesize parentItem=_parentItem - In the implementation block
@property (retain) NSString * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSMutableOrderedSet * mutableSubitems;                       //@synthesize mutableSubitems=_mutableSubitems - In the implementation block
@property (retain) NSMutableOrderedSet * currentlyDisplayedItems;               //@synthesize currentlyDisplayedItems=_currentlyDisplayedItems - In the implementation block
@property (retain) EKUIGadgetContainerView * containerView;                     //@synthesize containerView=_containerView - In the implementation block
@property (retain) EKUIGadgetContainerDividerView * topDivider;                 //@synthesize topDivider=_topDivider - In the implementation block
@property (retain) EKUIGadgetContainerDividerView * bottomDivider;              //@synthesize bottomDivider=_bottomDivider - In the implementation block
@property (retain) NSDictionary * metrics;                                      //@synthesize metrics=_metrics - In the implementation block
@property (retain) NSMutableDictionary * conditionalMetrics;                    //@synthesize conditionalMetrics=_conditionalMetrics - In the implementation block
@property (retain) NSArray * topConstraints;                                    //@synthesize topConstraints=_topConstraints - In the implementation block
@property (retain) NSArray * bottomConstraints;                                 //@synthesize bottomConstraints=_bottomConstraints - In the implementation block
@property (retain) NSArray * subitemLabelConstraints;                           //@synthesize subitemLabelConstraints=_subitemLabelConstraints - In the implementation block
@property (retain) CalDefaultDictionary * spacingOverrides;                     //@synthesize spacingOverrides=_spacingOverrides - In the implementation block
@property (assign) char isExpanded;                                             //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign) char isHovered;                                              //@synthesize isHovered=_isHovered - In the implementation block
@property (assign,nonatomic) char activeKeyboardHover;                          //@synthesize activeKeyboardHover=_activeKeyboardHover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)enclosingGadgetContainerForLayoutItem:(id)arg1 ;
-(NSString *)uuid;
-(id)firstKeyView;
-(id)lastKeyView;
-(void)setUuid:(NSString *)arg1 ;
-(NSDictionary *)metrics;
-(EKEventViewController *)eventViewController;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(void)setActiveKeyboardHover:(char)arg1 ;
-(void)setEventViewController:(EKEventViewController *)arg1 ;
-(char)updateWithDiff:(id)arg1 ;
-(char)needsExpansion;
-(char)wantsAnimationSuppression;
-(id)enclosingGadgetContainer;
-(void)updateScrollState;
-(void)animationDidFinish:(id)arg1 ;
-(double)horizontalInset;
-(id)claimedPboardTypes;
-(void)enumerateSubitemsUsingBlock:(/*^block*/id)arg1 ;
-(char)isExpansionAllowed;
-(void)setExpanded:(char)arg1 andUpdateFirstResponder:(char)arg2 ;
-(void)saveCompleteChange;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(void)setDoNotPassdownExpandedState:(char)arg1 ;
-(void)addSubitems:(id)arg1 ;
-(void)addSubitem:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 isTopLevel:(char)arg2 ;
-(void)setCanBecomeKey:(char)arg1 ;
-(void)setShouldDisplayDividerAboveBlock:(id)arg1 ;
-(void)addSubitemsByClasses:(id)arg1 ;
-(void)setFirstGadget:(EKUIGadget *)arg1 ;
-(void)setSelectsFirstKeyViewOnClick:(char)arg1 ;
-(void)setNextContainer:(EKUIGadgetContainer *)arg1 ;
-(void)setPreviousContainer:(EKUIGadgetContainer *)arg1 ;
-(void)setTopSpacing:(double)arg1 bottomSpacing:(double)arg2 betweenSpacing:(double)arg3 ;
-(void)setTopSpacing:(double)arg1 topSpacingExpanded:(double)arg2 bottomSpacing:(double)arg3 bottomSpacingExpanded:(double)arg4 betweenSpacing:(double)arg5 betweenSpacingExpanded:(double)arg6 ;
-(void)setConditionalSpacing:(double)arg1 forKey:(id)arg2 withCondition:(/*^block*/id)arg3 ;
-(void)setSpacing:(double)arg1 betweenTopSubitem:(id)arg2 bottomSubitem:(id)arg3 withCondition:(/*^block*/id)arg4 ;
-(id)bottomConstraint;
-(void)calculateKeyViewLoop;
-(void)firstResponderChanged:(id)arg1 ;
-(id)lastVisibleGadget;
-(void)savePartialChange;
-(id)topConstraint;
-(void)setIsTopLevelContainer:(char)arg1 ;
-(void)setMutableSubitems:(NSMutableOrderedSet *)arg1 ;
-(void)setCurrentlyDisplayedItems:(NSMutableOrderedSet *)arg1 ;
-(void)setTopConstraints:(NSArray *)arg1 ;
-(void)setBottomConstraints:(NSArray *)arg1 ;
-(void)setSpacingOverrides:(CalDefaultDictionary *)arg1 ;
-(void)setSubitemLabelConstraints:(NSArray *)arg1 ;
-(void)setConditionalMetrics:(NSMutableDictionary *)arg1 ;
-(void)setTopDivider:(EKUIGadgetContainerDividerView *)arg1 ;
-(void)setBottomDivider:(EKUIGadgetContainerDividerView *)arg1 ;
-(EKUIGadgetContainerDividerView *)topDivider;
-(EKUIGadgetContainerDividerView *)bottomDivider;
-(char)itemIsAdjacentlyBelowVisibleDividerLine:(id)arg1 ;
-(id)shouldDisplayDividerAboveBlock;
-(char)makeFirstValidKeyViewFirstResponder;
-(void)setExpanded:(char)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(char)doNotPassdownExpandedState;
-(NSMutableOrderedSet *)mutableSubitems;
-(void)updateGadgetVisibilityWithUpdateConstraints:(char)arg1 ;
-(char)_performExpansionAnimationIfNeeded:(char)arg1 ;
-(void)_subItem:(id)arg1 didSetExpandedState:(char)arg2 willPerformAnimation:(char)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(char)canBecomeKey;
-(id)_firstVisibleItem;
-(id)_lastVisibleItem;
-(void)collapseAllSubitemsExceptItem:(id)arg1 ;
-(void)removeSubitem:(id)arg1 ;
-(NSMutableOrderedSet *)currentlyDisplayedItems;
-(EKUIGadgetContainer *)nextContainer;
-(EKUIGadgetContainer *)previousContainer;
-(void)enumerateCurrentlyDisplayedItemsWithNeighborsUsingBlock:(/*^block*/id)arg1 ;
-(char)shouldDrawBottomDivider;
-(void)enumerateAllDescendantsDepthFirstUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)topConstraints;
-(id)getSpacingForKey:(id)arg1 ;
-(NSArray *)bottomConstraints;
-(CalDefaultDictionary *)spacingOverrides;
-(EKUIGadget *)firstGadget;
-(id)firstValidKeyView;
-(void)_updateTopConstraint;
-(void)_updateBottomConstraint;
-(void)_addConstraintBetweenTopItem:(id)arg1 bottomItem:(id)arg2 ;
-(void)_addHorizontalConstraintToSubitem:(id)arg1 previousItem:(id)arg2 nextItem:(id)arg3 ;
-(void)alignSubitemLabels;
-(NSArray *)subitemLabelConstraints;
-(void)enumerateAllDescendantsBreadthFirstUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)conditionalMetrics;
-(char)subItemsAreAnimating;
-(char)selectsFirstKeyViewOnClick;
-(void)_collapseAllSubItemsForThisContainerOnlyExceptItem:(id)arg1 ;
-(char)activeKeyboardHover;
-(char)shouldDrawTopDivider;
-(void)_printKeyViewLoop;
-(void)subitemWantsFirstResponder:(id)arg1 ;
-(void)subitemDidBecomeFirstResponder:(id)arg1 ;
-(id)alignmentLabel;
-(void)removeSubitems:(id)arg1 ;
-(char)itemIsAdjacentToExpandedContainer:(id)arg1 ;
-(void)enumerateSubcontainersUsingBlock:(/*^block*/id)arg1 ;
-(void)_addHiddenConstraintToSubitem:(id)arg1 ;
-(id)_firstItem;
-(id)_lastItem;
-(void)mouseUpInContainerView:(id)arg1 ;
-(char)_windowIsVisible;
-(void)containerViewBecameFirstResponder:(id)arg1 ;
-(void)containerViewResignedFirstResponder:(id)arg1 ;
-(char)containerView:(id)arg1 didReceiveOpenEvent:(id)arg2 ;
-(char)hasKeyboardFocus;
-(void)drawContainerInBounds:(CGRect)arg1 dirtyRect:(CGRect)arg2 ;
-(double)maximumHeightBeforeScrolling;
-(void)setMaximumHeightBeforeScrolling:(double)arg1 ;
-(char)isTopLevelContainer;
-(char)isHovered;
-(void)setIsHovered:(char)arg1 ;
-(void)setNeedsUpdateConstraints:(char)arg1 ;
-(void)updateConstraints;
-(id)view;
-(NSString *)accessibilityDescription;
-(char)isAnimating;
-(char)isEditable;
-(char)performDragOperation:(id)arg1 ;
-(char)ignoresMouseEvents;
-(EKUIGadgetContainerView *)containerView;
-(void)setContainerView:(EKUIGadgetContainerView *)arg1 ;
-(id)scrollView;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(id<EKUILayoutItem>)parentItem;
-(char)isContainer;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(void)setIgnoresMouseEvents:(char)arg1 ;
-(void)setParentItem:(id<EKUILayoutItem>)arg1 ;
-(id)event;
-(id)subitems;
-(void)setEvent:(id)arg1 ;
-(void)setIsExpanded:(char)arg1 ;
-(char)isScrolling;
@end
