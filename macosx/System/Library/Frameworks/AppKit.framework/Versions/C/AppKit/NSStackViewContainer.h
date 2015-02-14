/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSMapTable, NSArray, NSMutableArray, NSStackView;

@interface NSStackViewContainer : NSView {

	NSMapTable* _viewToAfterSpacerMap;
	NSMapTable* _viewToCustomAfterSpaceMap;
	NSMapTable* _visibilityPriorities;
	NSArray* _containerConstraints;
	NSMutableArray* _containerViews;
	NSMutableArray* _droppedViews;
	NSArray* _currentSpacers;
	NSStackView* _stackView;
	char _wantsFlexibleLeadingEdge;
	char _wantsFlexibleTrailingEdge;
	SCD_Struct_NS19 _flags;

}

@property (__weak) NSStackView * stackView; 
@property (copy) NSArray * allViews; 
@property (readonly) NSArray * droppedViews; 
@property (readonly) NSArray * visibleViews; 
@property (readonly) NSArray * currentSpacers; 
@property (assign) char wantsFlexibleLeadingEdge; 
@property (assign) char wantsFlexibleTrailingEdge; 
@property (readonly) double trailingEdgeSpacing; 
@property (retain) NSArray * containerConstraints; 
@property (readonly) NSMapTable * visibilityPriorities; 
@property (readonly) NSMapTable * viewToAfterSpacerMap; 
@property (readonly) NSMapTable * viewToCustomAfterSpaceMap; 
@property (readonly) NSMutableArray * containerViews; 
@property (readonly) NSMutableArray * _droppedViews; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateConstraints;
-(void)layout;
-(void)replaceSubview:(id)arg1 with:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(id)_replacementConstraintForConstraint:(id)arg1 whenReplacingView:(id)arg2 withView:(id)arg3 ;
-(double)freeSpace;
-(char)shouldBeArchived;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(void)setWantsFlexibleLeadingEdge:(char)arg1 ;
-(void)setWantsFlexibleTrailingEdge:(char)arg1 ;
-(void)_updateSpacing;
-(void)_updateSubviews;
-(id)initWithStackView:(id)arg1 ;
-(NSArray *)currentSpacers;
-(void)_updateSpacerHuggingPriorities;
-(void)_refreshStackConstraints;
-(char)wantsFlexibleLeadingEdge;
-(char)wantsFlexibleTrailingEdge;
-(double)trailingEdgeSpacing;
-(void)setCustomSpacing:(double)arg1 afterView:(id)arg2 animated:(char)arg3 ;
-(double)customSpacingAfterView:(id)arg1 ;
-(char)containsView:(id)arg1 ;
-(NSArray *)visibleViews;
-(void)insertView:(id)arg1 atIndex:(unsigned long long)arg2 animated:(char)arg3 ;
-(void)removeView:(id)arg1 animated:(char)arg2 ;
-(NSArray *)allViews;
-(NSArray *)droppedViews;
-(void)setAllViews:(NSArray *)arg1 ;
-(void)setVisibilityPriority:(float)arg1 forView:(id)arg2 ;
-(float)visibilityPriorityForView:(id)arg1 ;
-(void)dropViews:(id)arg1 ;
-(void)readdViews:(id)arg1 ;
-(double)currentSpaceRequired;
-(double)estimateSpaceRequiredByView:(id)arg1 ;
-(void)_commonStackViewContainerInit;
-(NSMutableArray *)containerViews;
-(NSMapTable *)viewToAfterSpacerMap;
-(NSMapTable *)viewToCustomAfterSpaceMap;
-(NSMapTable *)visibilityPriorities;
-(NSMutableArray *)_droppedViews;
-(void)_insertWithoutUpdateSubview:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)afterSpacerForView:(id)arg1 ;
-(void)setCurrentSpacers:(NSArray *)arg1 ;
-(NSArray *)containerConstraints;
-(void)setContainerConstraints:(NSArray *)arg1 ;
-(void)_updateContainerConstraints;
-(void)containerResized:(id)arg1 ;
-(double)spaceRequired;
@end

