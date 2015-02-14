/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSResponder.h>
#import <AppKit/NSAccessibilityElement.h>
#import <AppKit/NSAccessibility.h>

@protocol NSPopoverDelegate;
@class NSView, NSViewController, NSWindow, NSString, NSURL, NSArray;

@interface NSPopover : NSResponder <NSAccessibilityElement, NSAccessibility> {

	id _bindingAdaptor;
	id<NSPopoverDelegate> _delegate;
	id _visualRepresentation;
	NSView* _positioningView;
	NSViewController* _contentViewController;
	NSWindow* _positioningWindow;
	long long _appearance;
	long long _behavior;
	id _popoverPrivateData;
	unsigned long long _preferredEdge;
	CGSize _contentSize;
	CGRect _positioningRect;
	id _postCloseBlock;
	struct {
		unsigned animates : 1;
		unsigned positioningRectIsBounds : 1;
		unsigned registeredAsTransient : 1;
		unsigned registeredAsSemitransient : 1;
		unsigned shown : 1;
		unsigned toolbarHidesAnchor : 1;
		unsigned closing : 1;
		unsigned registeredForGeometryInWindowDidChange : 1;
		unsigned keepTopStable : 1;
		unsigned implicitlyDetached : 1;
		unsigned hidesDetachedWindowOnDeactivate : 1;
		unsigned requiresCorrectContentAppearance : 1;
		unsigned reserved : 20;
	}  _flags;

}

@property (assign) id<NSPopoverDelegate> delegate; 
@property (assign) long long appearance; 
@property (assign) long long behavior;                                                                  //@synthesize behavior=_behavior - In the implementation block
@property (assign) char animates; 
@property (retain) NSViewController * contentViewController;                                            //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign) CGSize contentSize; 
@property (getter=isShown) char shown; 
@property (assign) CGRect positioningRect; 
@property (retain) NSView * positioningView;                                                            //@synthesize positioningView=_positioningView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isAccessibilityElement) char accessibilityElement; 
@property (assign) CGRect accessibilityFrame; 
@property (getter=isAccessibilityFocused) char accessibilityFocused; 
@property (assign) CGPoint accessibilityActivationPoint; 
@property (__weak) id accessibilityTopLevelUIElement; 
@property (copy) NSURL * accessibilityURL; 
@property (retain) id accessibilityValue; 
@property (copy) NSString * accessibilityValueDescription; 
@property (copy) NSArray * accessibilityVisibleChildren; 
@property (copy) NSString * accessibilitySubrole; 
@property (copy) NSString * accessibilityTitle; 
@property (__weak) id accessibilityTitleUIElement; 
@property (copy) NSArray * accessibilityNextContents; 
@property (assign) long long accessibilityOrientation; 
@property (retain) id accessibilityOverflowButton; 
@property (__weak) id accessibilityParent; 
@property (copy) NSString * accessibilityPlaceholderValue; 
@property (copy) NSArray * accessibilityPreviousContents; 
@property (copy) NSString * accessibilityRole; 
@property (copy) NSString * accessibilityRoleDescription; 
@property (retain) id accessibilitySearchButton; 
@property (retain) id accessibilitySearchMenu; 
@property (getter=isAccessibilitySelected) char accessibilitySelected; 
@property (copy) NSArray * accessibilitySelectedChildren; 
@property (copy) NSArray * accessibilityServesAsTitleForUIElements; 
@property (retain) id accessibilityShownMenu; 
@property (retain) id accessibilityMinValue; 
@property (retain) id accessibilityMaxValue; 
@property (copy) NSArray * accessibilityLinkedUIElements; 
@property (__weak) id accessibilityWindow; 
@property (copy) NSString * accessibilityIdentifier; 
@property (copy) NSString * accessibilityHelp; 
@property (copy) NSString * accessibilityFilename; 
@property (getter=isAccessibilityExpanded) char accessibilityExpanded; 
@property (getter=isAccessibilityEdited) char accessibilityEdited; 
@property (getter=isAccessibilityEnabled) char accessibilityEnabled; 
@property (copy) NSArray * accessibilityChildren; 
@property (retain) id accessibilityClearButton; 
@property (retain) id accessibilityCancelButton; 
@property (getter=isAccessibilityProtectedContent) char accessibilityProtectedContent; 
@property (copy) NSArray * accessibilityContents; 
@property (copy) NSString * accessibilityLabel; 
@property (getter=isAccessibilityAlternateUIVisible) char accessibilityAlternateUIVisible; 
@property (copy) NSArray * accessibilitySharedFocusElements; 
@property (retain) id accessibilityApplicationFocusedUIElement; 
@property (retain) id accessibilityMainWindow; 
@property (getter=isAccessibilityHidden) char accessibilityHidden; 
@property (getter=isAccessibilityFrontmost) char accessibilityFrontmost; 
@property (retain) id accessibilityFocusedWindow; 
@property (copy) NSArray * accessibilityWindows; 
@property (__weak) id accessibilityExtrasMenuBar; 
@property (__weak) id accessibilityMenuBar; 
@property (copy) NSArray * accessibilityColumnTitles; 
@property (getter=isAccessibilityOrderedByRow) char accessibilityOrderedByRow; 
@property (assign) long long accessibilityHorizontalUnits; 
@property (assign) long long accessibilityVerticalUnits; 
@property (copy) NSString * accessibilityHorizontalUnitDescription; 
@property (copy) NSString * accessibilityVerticalUnitDescription; 
@property (copy) NSArray * accessibilityHandles; 
@property (retain) id accessibilityWarningValue; 
@property (retain) id accessibilityCriticalValue; 
@property (getter=isAccessibilityDisclosed) char accessibilityDisclosed; 
@property (__weak) id accessibilityDisclosedByRow; 
@property (retain) id accessibilityDisclosedRows; 
@property (assign) long long accessibilityDisclosureLevel; 
@property (copy) NSArray * accessibilityMarkerUIElements; 
@property (retain) id accessibilityMarkerValues; 
@property (retain) id accessibilityMarkerGroupUIElement; 
@property (assign) long long accessibilityUnits; 
@property (copy) NSString * accessibilityUnitDescription; 
@property (assign) long long accessibilityRulerMarkerType; 
@property (copy) NSString * accessibilityMarkerTypeDescription; 
@property (retain) id accessibilityHorizontalScrollBar; 
@property (retain) id accessibilityVerticalScrollBar; 
@property (copy) NSArray * accessibilityAllowedValues; 
@property (copy) NSArray * accessibilityLabelUIElements; 
@property (assign) float accessibilityLabelValue; 
@property (copy) NSArray * accessibilitySplitters; 
@property (retain) id accessibilityDecrementButton; 
@property (retain) id accessibilityIncrementButton; 
@property (copy) NSArray * accessibilityTabs; 
@property (retain) id accessibilityHeader; 
@property (assign) long long accessibilityColumnCount; 
@property (assign) long long accessibilityRowCount; 
@property (assign) long long accessibilityIndex; 
@property (copy) NSArray * accessibilityColumns; 
@property (copy) NSArray * accessibilityRows; 
@property (copy) NSArray * accessibilityVisibleRows; 
@property (copy) NSArray * accessibilitySelectedRows; 
@property (copy) NSArray * accessibilityVisibleColumns; 
@property (copy) NSArray * accessibilitySelectedColumns; 
@property (assign) long long accessibilitySortDirection; 
@property (copy) NSArray * accessibilityRowHeaderUIElements; 
@property (copy) NSArray * accessibilitySelectedCells; 
@property (copy) NSArray * accessibilityVisibleCells; 
@property (copy) NSArray * accessibilityColumnHeaderUIElements; 
@property (assign) NSRange accessibilityRowIndexRange; 
@property (assign) NSRange accessibilityColumnIndexRange; 
@property (assign) long long accessibilityInsertionPointLineNumber; 
@property (assign) NSRange accessibilitySharedCharacterRange; 
@property (copy) NSArray * accessibilitySharedTextUIElements; 
@property (assign) NSRange accessibilityVisibleCharacterRange; 
@property (assign) long long accessibilityNumberOfCharacters; 
@property (copy) NSString * accessibilitySelectedText; 
@property (assign) NSRange accessibilitySelectedTextRange; 
@property (copy) NSArray * accessibilitySelectedTextRanges; 
@property (retain) id accessibilityToolbarButton; 
@property (getter=isAccessibilityModal) char accessibilityModal; 
@property (retain) id accessibilityProxy; 
@property (getter=isAccessibilityMain) char accessibilityMain; 
@property (retain) id accessibilityFullScreenButton; 
@property (retain) id accessibilityGrowArea; 
@property (copy) NSString * accessibilityDocument; 
@property (retain) id accessibilityDefaultButton; 
@property (retain) id accessibilityCloseButton; 
@property (retain) id accessibilityZoomButton; 
@property (retain) id accessibilityMinimizeButton; 
@property (getter=isAccessibilityMinimized) char accessibilityMinimized; 
-(id)init;
-(void)setDelegate:(id<NSPopoverDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(char)accessibilitySupportsOverriddenAttributes;
-(char)accessibilityAllowsOverriddenAttributesWhenIgnored;
-(void)setContentSize:(CGSize)arg1 ;
-(id<NSPopoverDelegate>)delegate;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(void)performClose:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityParent;
-(void)close;
-(id)_bindingAdaptor;
-(void)_setBindingAdaptor:(id)arg1 ;
-(id)effectiveAppearance;
-(CGSize)contentSize;
-(void)_commonInit;
-(void)showRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(long long)appearance;
-(void)setAppearance:(long long)arg1 ;
-(NSEdgeInsets)contentInset;
-(void)cancel:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(char)isShown;
-(NSViewController *)contentViewController;
-(void)setAnimates:(char)arg1 ;
-(char)animates;
-(void)setContentViewController:(NSViewController *)arg1 ;
-(void)setPositioningRect:(CGRect)arg1 ;
-(void)_setRequiresCorrectContentAppearance:(char)arg1 ;
-(void)setBehavior:(long long)arg1 ;
-(char)popoverShouldClose:(id)arg1 ;
-(char)popoverShouldDetach:(id)arg1 ;
-(id)detachableWindowForPopover:(id)arg1 ;
-(void)popoverWillShow:(id)arg1 ;
-(void)popoverDidShow:(id)arg1 ;
-(void)popoverWillClose:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
-(id)_positioningView;
-(id)_popoverFrame;
-(void)setPositioningView:(NSView *)arg1 ;
-(long long)_legacyAppearance;
-(id)customAppearance;
-(void)_setLegacyAppearance:(long long)arg1 ;
-(void)setCustomAppearance:(id)arg1 ;
-(id)_popoverWindow;
-(char)_requiresCorrectContentAppearance;
-(char)_shouldUseAquaAppearanceForContentView:(id)arg1 ;
-(unsigned long long)anchorEdge;
-(void)setAnchorEdge:(unsigned long long)arg1 ;
-(void)_setContentSize:(CGSize)arg1 ;
-(void)_updateAnchorPoint;
-(char)isDetached;
-(void)_setContentView:(id)arg1 size:(CGSize)arg2 ;
-(void)_updateContentViewAndSizeFromViewController;
-(void)_updateWindow:(id)arg1 withContentViewController:(id)arg2 ;
-(CGPoint)_computeAnchorPointForFrame:(CGRect)arg1 ;
-(void)_updateAnchorPointForFrame:(CGRect)arg1 reshape:(char)arg2 ;
-(void)_updateWindowProperties;
-(char)_shouldStillBeVisibleRelativeToView:(id)arg1 ;
-(void)_setCloseReason:(long long)arg1 ;
-(NSView *)positioningView;
-(void)positioningViewGeometryInWindowDidChange:(id)arg1 ;
-(void)_geometryInWindowDidChangeForView:(id)arg1 ;
-(void)_setListenToViewGeometryInWindowDidChange:(char)arg1 ;
-(id)_makePopoverWindowIfNeeded;
-(unsigned long long)_externalRectEdgeToInternalAnchorEdge:(unsigned long long)arg1 ofView:(id)arg2 ;
-(char)_validatePopoverFirstResponder:(id)arg1 ;
-(void)_repositionRelativeToRect:(CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 ;
-(void)_queueClosingBlock:(/*^block*/id)arg1 ;
-(long long)behavior;
-(void)setShown:(char)arg1 ;
-(char)_validatePopoverWindowFirstResponder;
-(long long)_closeReason;
-(void)_resetImplicitWindowDetach;
-(void)_executeClosingBlock;
-(void)_finishClosingAndShouldNotify:(char)arg1 ;
-(void)drawBackgroundInRect:(CGRect)arg1 ofView:(id)arg2 anchorEdge:(unsigned long long)arg3 anchorPoint:(CGPoint)arg4 ;
-(void)_finalizeImplicitWindowDetach;
-(char)hidesDetachedWindowOnDeactivate;
-(void)_applicationDidResignActive_detachedWindow:(id)arg1 ;
-(void)_applicationDidBecomeActive_detachedWindow:(id)arg1 ;
-(CGSize)anchorSize;
-(char)shouldHideAnchor;
-(void)setShouldHideAnchor:(char)arg1 ;
-(void)_setPopoverWindow:(id)arg1 ;
-(unsigned long long)positioningOptions;
-(void)setPositioningOptions:(unsigned long long)arg1 ;
-(char)_popoverWindow:(id)arg1 fromConstraintsSetWindowFrame:(CGRect)arg2 ;
-(CGRect)positioningRect;
-(void)showFrom:(id)arg1 ;
-(void)popoverDidDetach:(id)arg1 ;
-(void)detach;
-(void)setHidesDetachedWindowOnDeactivate:(char)arg1 ;
-(void)_dragWithEvent:(id)arg1 ;
-(void)_addForbiddenRectForBoundsOfView:(id)arg1 ;
-(void)_removeAllForbiddenRects;
-(char)_accessibilityShouldReportCancelAction;
@end

