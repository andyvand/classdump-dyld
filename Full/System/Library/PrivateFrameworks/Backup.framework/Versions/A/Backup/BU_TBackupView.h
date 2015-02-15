/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <AppKit/NSView.h>

@class CABackdropLayer, CALayer, NSMutableArray, CAMediaTimingFunction, BU_TMControl, BU_TMTimeline, BU_TTimelineOverlay, BU_TMToolbarPushButton, BU_ButtonController, NSButton, BU_DateFlatControl, BU_TMFloatParameterController;

@interface BU_TBackupView : NSView {

	CABackdropLayer* fBackdropLayer;
	CALayer* fBaseLayer;
	CALayer* fBackgroundLayer;
	CALayer* fDesktopPictureLayer;
	CALayer* fDesktopTintLayer;
	unsigned long long fAnimating;
	BOOL fFinderIsClient;
	BOOL fBackgroundAnimation;
	NSMutableArray* fSnapshotLayers;
	NSMutableArray* fRestoreLayers;
	CALayer* fWindowLayer;
	CALayer* fRevealLayer;
	CALayer* fControlsLayer;
	CALayer* fHotSpotLayer;
	unsigned long long fSnapshotsToShow;
	unsigned long long fTopSnapshot;
	long long fRequestedSnapshot;
	long long fWarpPosition;
	vector<CGRect, std::__1::allocator<CGRect> >* fScaledBounds;
	CGPoint fStartPosition;
	double fHorizon;
	BOOL fCollapsed;
	BOOL fFullBackupUI;
	BOOL fExiting;
	double fLastCompletion;
	BOOL fFadeWindowLayer;
	CGPoint fLiveWindowPosition;
	double fBackgroundAnimationStartY;
	double fBackgroundAnimationEndY;
	TBackupController* fController;
	CAMediaTimingFunction* fEaseInEaseOut;
	TFCGImage* fWindowHighlightImage;
	BOOL fRestorableLocation;
	BU_TMControl* fLastHitControl;
	BU_TMTimeline* fTimelineControl;
	BU_TTimelineOverlay* fTimelineOverlay;
	BU_TMToolbarPushButton* fRestoreAllButton;
	BU_ButtonController* fButtonController;
	NSButton* fCancelButton;
	NSButton* fRestoreButton;
	NSButton* fPreviousButton;
	NSButton* fNextButton;
	BU_DateFlatControl* fDateText;
	OpaqueEventHandlerRefRef fEventMonitorHandler;
	BU_TMFloatParameterController* fStarsZOffset;
	CGRect _pixelBounds;
	TNSRef<BU_TBUStarfieldShadowLayer *> _shadowLayer;
	TNSRef<BU_DPRemoteDesktopPicture *> fRemoteDesktopPicture;
	TNSRef<NSArray *> fDesktopFilters;

}

@property (assign) unsigned long long isAnimating; 
+(id)createBackupViewWithFrame:(CGRect)arg1 inWindow:(id)arg2 ;
+(void)initInterpolators;
+(double)fadeBackAlphaForSnapshotIndex:(unsigned long long)arg1 numberShown:(unsigned long long)arg2 ;
+(CGImageRef)invalidSnapshotImageWithSize:(CGSize)arg1 imageScalingContext:(CGContextRef)arg2 drawContext:(CGContextRef)arg3 needsLoad:(BOOL)arg4 ;
-(char)acceptsFirstMouse;
-(void)cancelPressed:(id)arg1 ;
-(void)setIsAnimating:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(unsigned long long)isAnimating;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)setController:(TBackupController*)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)renewGState;
-(void)setShadowInfo:(CGImageRef)arg1 shadowImageBounds:(CGRect)arg2 contentImageBounds:(CGRect)arg3 ;
-(void)setIsFinderClient:(BOOL)arg1 ;
-(void)stabilizeForExitWithNowImage:(CGImageRef)arg1 ;
-(void)prepareToHide:(BOOL)arg1 windowCenterPoint:(CGPoint)arg2 ;
-(void)selectTarget:(TTimeMachineTarget*)arg1 ;
-(void)gotoTarget:(TTimeMachineTarget*)arg1 ;
-(void)gotoSnapshot:(unsigned long long)arg1 ;
-(int)currentSnapshotIndex;
-(CGRect)topBounds;
-(void)startResizingWindow;
-(void)finishResizingWindow:(const CGPoint*)arg1 ;
-(void)updateButtonsEnableStateForSelection:(unsigned long long)arg1 ;
-(void)validateSnapshot:(TSnapshot*)arg1 forTargetURL:(const TString*)arg2 forTarget:(TFENode*)arg3 ;
-(void)validateTargetForURL:(const TString*)arg1 withRevisionID:(void*)arg2 ;
-(void)updateProxyImage:(CGImageRef)arg1 requestNewImages:(BOOL)arg2 ;
-(void)updateLayers:(CGImageRef)arg1 forTarget:(TTimeMachineTarget*)arg2 ;
-(void)setRevealImages:(CGPoint)arg1 window:(CGImageRef)arg2 reveal:(CGImageRef)arg3 ;
-(void)prepareToReveal:(BOOL)arg1 ;
-(void)showHideRevealAnimation:(BOOL)arg1 ;
-(void)showHideRevealAnimationCompleted:(BOOL)arg1 ;
-(void)setMaxLayerCount:(unsigned long long)arg1 bounds:(CGRect)arg2 ;
-(void)addLayer:(CGImageRef)arg1 forTarget:(TTimeMachineTarget*)arg2 ;
-(void)retargetLayer:(unsigned long long)arg1 forTarget:(TTimeMachineTarget*)arg2 ;
-(TBackupLayerList*)layersForTarget:(TTimeMachineTarget*)arg1 ;
-(void)updateLayers:(const TBackupLayerList*)arg1 forImage:(CGImageRef)arg2 ;
-(void)removeAllSnapshotLayers;
-(void)showTopSnapshotNow;
-(void)hideTopSnapshotNow;
-(void)snapshotsChanged:(BOOL)arg1 forceRefresh:(BOOL)arg2 ;
-(CGRect)topScreenLocalBounds;
-(void)setRestoreAnimationInfo:(id)arg1 ;
-(void)showTopSnapshotComplete:(id)arg1 ;
-(void)hideTopSnapshotComplete:(id)arg1 ;
-(void)prepareToRevealInAnimationComplete:(id)arg1 ;
-(void)revealInAnimationComplete:(id)arg1 ;
-(void)revealOutAnimationComplete:(id)arg1 ;
-(void)promoteDemoteSnapshotAnimationComplete:(id)arg1 withNewTopSnapshot:(id)arg2 ;
-(void)updateButtonsEnableStateForTarget:(TTimeMachineTarget*)arg1 ;
-(void)updateButtonsEnableStateForTargetIndex:(long long)arg1 ;
-(CGPoint)bigArrowsLocationForWindowBounds:(const CGPoint*)arg1 ;
-(void)positionButtonsForWindowBounds:(CGRect)arg1 ;
-(void)setupEventMonitor;
-(void)initAnimationConstants;
-(id)desktopPictureLayerForDisplay:(int)arg1 ;
-(CGRect)caRendererBounds;
-(CGRect)cgScaledViewBounds;
-(void)restorePressed:(id)arg1 ;
-(void)restoreAllPressed:(id)arg1 ;
-(void)previousPressed:(id)arg1 ;
-(void)nextPressed:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 window:(id)arg2 ;
-(void)shutDownEventMonitor;
-(CGPoint)convertPointToViewPoint:(CGPoint)arg1 ;
-(CGPoint)convertPointToControlsPoint:(CGPoint)arg1 ;
-(void)invalidateSnapshotImageFor:(id)arg1 ;
-(void)requestSnapshotImageFor:(id)arg1 ;
-(void)configureLayer:(id)arg1 forInvalidState:(BOOL)arg2 ;
-(double)backgroundOpacityForSnapshotIndex:(unsigned long long)arg1 ;
-(CGColorRef)calculateShadingFilterColorForSnapshotIndex:(unsigned long long)arg1 ;
-(id)layerForSnapshot:(TSnapshot*)arg1 ;
-(id)layerForUrl:(const TString*)arg1 ;
-(void)calculateLayerBounds:(unsigned long long)arg1 baseBounds:(CGRect)arg2 withSunRaised:(BOOL)arg3 ;
-(CGRect)layerBoundsAtPosition:(long long)arg1 ;
-(id)animationParametersForLayer:(id)arg1 atIndex:(long long)arg2 ;
-(double)divisorFor:(unsigned long long)arg1 ;
-(double)calculateNextStartTime:(int)arg1 withDivisor:(double)arg2 ;
-(void)showRestoreAnimationStartingAt:(double)arg1 withDuration:(double)arg2 ;
-(void)triggerSnapshotWarp:(unsigned long long)arg1 duration:(double)arg2 warpForward:(BOOL)arg3 ;
-(id)animationParametersForLayer:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(id)newAnimationCompleteDelegate:(int)arg1 forKey:(id)arg2 withLayer:(id)arg3 ;
-(void)promoteDemoteSnapshot:(id)arg1 ;
-(double)calculateNextStartTime:(int)arg1 ;
-(id)newAnimationCompleteDelegate:(int)arg1 forKey:(id)arg2 ;
-(void)flushFrameToDisplay;
-(double)nextStartTime;
-(void)finishAllAnimations;
-(void)animationComplete;
-(void)activateTopSnapshot;
-(void)updateAnimationEnd:(unsigned long long)arg1 ;
-(void)triggerSunriseAnimationFromY:(double)arg1 toY:(double)arg2 duration:(double)arg3 ;
-(void)setSunAnimationStart:(unsigned long long)arg1 ;
-(void)collapseOrExpand:(BOOL)arg1 startTime:(double)arg2 ;
-(void)showRestoreLayersNow;
-(void)showTopSnapshot;
-(void)showRevealLayerNow;
-(CGRect)calculateLayerBoundsAtNormalizedZ:(double)arg1 withBaseBounds:(CGRect)arg2 withTargetY:(double)arg3 ;
-(CGRect)pixelBounds;
-(CGRect)projectedBoundsAtZPosition:(double)arg1 forCameraPosition:(CGPoint)arg2 withUnscaledBounds:(CGRect)arg3 ;
-(void)toggleShowChangesPressed:(id)arg1 ;
-(BOOL)canShowBackgroundAnimation;
-(double)calculateInputIntensityForSnapshotIndex:(unsigned long long)arg1 ;
-(double)calculateExposureForSnapshotIndex:(unsigned long long)arg1 ;
-(void)hideTopSnapshot;
-(void)spacingCurveChanged;
-(void)setTargets:(const TTimeMachineTargetList*)arg1 ;
@end

