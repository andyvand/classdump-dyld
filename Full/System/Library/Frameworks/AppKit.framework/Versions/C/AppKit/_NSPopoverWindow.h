/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>

@class NSPopover, NSPopoverFrame;

@interface _NSPopoverWindow : NSPanel {

	NSPopover* _popover;
	id _popoverAccessibilityParent;
	char _animates;
	char _nonActivating;

}

@property (assign) NSPopover * _popover;                          //@synthesize popover=_popover - In the implementation block
@property (retain) id popoverAccessibilityParent;                 //@synthesize popoverAccessibilityParent=_popoverAccessibilityParent - In the implementation block
@property (assign) unsigned long long anchorEdge; 
@property (assign) CGSize anchorSize; 
@property (assign) NSEdgeInsets contentInset; 
@property (assign) CGPoint anchorPoint; 
@property (assign) long long popoverAppearance; 
@property (assign) char animates;                                 //@synthesize animates=_animates - In the implementation block
@property (readonly) NSPopoverFrame * _popoverFrame; 
+(unsigned long long)_validateStyleMask:(unsigned long long)arg1 ;
+(Class)frameViewClassForStyleMask:(unsigned long long)arg1 ;
+(CGRect)frameRectForContentRect:(CGRect)arg1 appearance:(long long)arg2 anchorSize:(CGSize)arg3 contentInset:(NSEdgeInsets)arg4 hasTitlebar:(char)arg5 ;
+(CGRect)contentRectForFrameRect:(CGRect)arg1 appearance:(long long)arg2 anchorSize:(CGSize)arg3 contentInset:(NSEdgeInsets)arg4 hasTitlebar:(char)arg5 ;
+(id)keyPathsForValuesAffectingAnchorPoint;
-(void)dealloc;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityHelpAttribute;
-(char)accessibilityIsHelpAttributeSettable;
-(id)accessibilityParentAttribute;
-(id)accessibilityWindowAttribute;
-(char)accessibilityIsWindowAttributeSettable;
-(id)accessibilityTopLevelUIElementAttribute;
-(char)accessibilityIsTopLevelUIElementAttributeSettable;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(long long)_orderOutAnimationType;
-(void)_setOrderOutAnimationType:(long long)arg1 ;
-(unsigned long long)styleMask;
-(char)_isNonactivatingPanel;
-(char)canBecomeMainWindow;
-(void)setContentView:(id)arg1 ;
-(void)performClose:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(char)canBecomeKeyWindow;
-(void)_setNonactivatingPanel:(char)arg1 ;
-(NSEdgeInsets)contentInset;
-(void)setContentInset:(NSEdgeInsets)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(char)_allowsImplicitRemovalFromMovementGroup;
-(void)setParentWindow:(id)arg1 ;
-(void)setAnimates:(char)arg1 ;
-(char)animates;
-(double)animationResizeTime:(CGRect)arg1 ;
-(float)_backdropBleedAmount;
-(char)_ignoreForFullScreenTransition;
-(CGPoint)anchorPoint;
-(void)_setOrderFrontAnimationType:(long long)arg1 ;
-(long long)_orderFrontAnimationType;
-(id)_windowTransformAnimationForOrdering:(long long)arg1 animationType:(long long)arg2 interruptingAnimation:(id)arg3 ;
-(char)_shouldRemoveFromParentIfPossible;
-(char)_wantsSnapshotProxyWindowForOrderOutAnimation;
-(id)_parentWindowForAddingToMovementGroupWithProposedParent:(id)arg1 ;
-(long long)_childWindowOrderingPriority;
-(char)_ignoreForFullScreenTransitionSnapshot;
-(id)presentationWindowForError:(id)arg1 originatedInWindow:(id)arg2 ;
-(NSPopover *)_popover;
-(NSPopoverFrame *)_popoverFrame;
-(void)set_popover:(NSPopover *)arg1 ;
-(void)setPopoverAppearance:(long long)arg1 ;
-(unsigned long long)anchorEdge;
-(void)setAnchorEdge:(unsigned long long)arg1 ;
-(id)_initWithPopover:(id)arg1 ;
-(void)setPopoverAccessibilityParent:(id)arg1 ;
-(CGSize)anchorSize;
-(char)_hasActiveDragTypes;
-(long long)popoverAppearance;
-(void)setAnchorSize:(CGSize)arg1 ;
-(void)_fromConstraintsSetWindowFrame:(CGRect)arg1 ;
-(id)popoverAccessibilityParent;
@end

