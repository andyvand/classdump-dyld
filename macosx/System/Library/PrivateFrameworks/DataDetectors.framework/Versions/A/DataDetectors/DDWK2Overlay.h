/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol DDHighlightsDelegate, DDHighlightsDataSource;
#import <DataDetectors/DataDetectors-Structs.h>
@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, DDBasicHighlightsView;

@interface DDWK2Overlay : NSObject {

	OpaqueWKBundlePageOverlayRef _overlay;
	OpaqueWKBundlePageRef _clientPage;
	id<DDHighlightsDelegate> _delegate;
	id<DDHighlightsDataSource> _dataSource;
	NSArray* _highlightedObjects;
	NSMapTable* _objectsToArrowlessViewMapping;
	NSMutableArray* _highlightQueue;
	NSMutableArray* _subviews;
	NSMutableSet* _trackingAreas;
	NSMutableSet* _enteredTrackingAreas;
	DDBasicHighlightsView* _clickedView;
	CGAffineTransform _transform;
	CGRect _visibleRect;
	char _alwaysShowHighlights;
	char _relayoutInProgress;
	char _needsLayout;

}

@property (assign) id delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign) id<DDHighlightsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) NSMutableArray * subviews;                          //@synthesize subviews=_subviews - In the implementation block
@property (retain) NSMutableSet * trackingAreas;                       //@synthesize trackingAreas=_trackingAreas - In the implementation block
@property (retain) NSMutableSet * enteredTrackingAreas;                //@synthesize enteredTrackingAreas=_enteredTrackingAreas - In the implementation block
@property (retain) DDBasicHighlightsView * clickedView;                //@synthesize clickedView=_clickedView - In the implementation block
-(void)reloadHighlights;
-(void)setAlwaysShowHighlights:(char)arg1 ;
-(void)recomputeLayout;
-(void)setHighlightedObjects:(id)arg1 ;
-(void)removeAllTrackingAreas;
-(void)setAllState:(int)arg1 disableAnimations:(char)arg2 ;
-(void)_addMultiViewForObject:(id)arg1 withArrow:(char)arg2 availableViews:(id)arg3 ;
-(void)updateHighlightStatesForMousePosition;
-(void)hideHighlights;
-(void)_mouseEnteredBasicHLView:(id)arg1 withRelatedObjects:(id)arg2 ;
-(void)_mouseExitedBasicHLView:(id)arg1 withInfos:(id)arg2 ;
-(void)removeHighlights;
-(void)switchOffHighlights;
-(void)installInPage:(OpaqueWKBundlePageRef)arg1 ;
-(void)setTrackingAreas:(NSMutableSet *)arg1 ;
-(void)setEnteredTrackingAreas:(NSMutableSet *)arg1 ;
-(void)setClickedView:(DDBasicHighlightsView *)arg1 ;
-(void)setState:(int)arg1 forHighlightView:(id)arg2 disableAnimation:(char)arg3 ;
-(void)addTrackingArea:(id)arg1 alreadyInside:(char)arg2 ;
-(void)_setTrackingAreaForBasicHighlight:(id)arg1 entering:(char)arg2 ignoreCleanup:(char)arg3 ;
-(NSMutableSet *)enteredTrackingAreas;
-(void)handleMouseClick:(char)arg1 onTriangle:(char)arg2 onView:(id)arg3 ;
-(DDBasicHighlightsView *)clickedView;
-(void)mouseExited:(id)arg1 location:(CGPoint)arg2 ;
-(BOOL)mouseMovedTo:(WKPoint)arg1 ;
-(void)willMoveToPage:(OpaqueWKBundlePageRef)arg1 ;
-(void)didMoveToPage:(OpaqueWKBundlePageRef)arg1 ;
-(void)drawDirtyRect:(WKRect)arg1 inContext:(void*)arg2 ;
-(id)hitView;
-(id)actionContextForResultAtPoint:(WKPoint)arg1 rangeHandle:(const OpaqueWKBundleRangeHandle*)arg2 ;
-(BOOL)mouseDownAt:(WKPoint)arg1 button:(int)arg2 ;
-(BOOL)mouseUpAt:(WKPoint)arg1 button:(int)arg2 ;
-(BOOL)mouseDraggedTo:(WKPoint)arg1 button:(int)arg2 ;
-(char)accessibilityDataDetectorExistsAtPoint:(CGPoint)arg1 ;
-(id)accessibilityDataDetectorTypeAtPoint:(CGPoint)arg1 ;
-(char)accessibilityShowDataDetectorMenuAtPoint:(CGPoint)arg1 ;
-(void)setNeedsRelayout;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)addSubview:(id)arg1 ;
-(id)delegate;
-(void)deactivate;
-(NSMutableArray *)subviews;
-(void)setDataSource:(id<DDHighlightsDataSource>)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)removeTrackingArea:(id)arg1 ;
-(id<DDHighlightsDataSource>)dataSource;
-(void)setSubviews:(NSMutableArray *)arg1 ;
-(NSMutableSet *)trackingAreas;
@end

