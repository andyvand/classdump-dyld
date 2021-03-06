/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:15 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class _NSBindingAdaptor, NSMenu, _NSViewLayoutAux, _NSViewAnimator, NSDictionary, NSArray, CIFilter, NSShadow, NSSurface, NSColorSpace, NSMutableSet, NSString, NSBezierPath, NSAppearance, NSColor, _NSIdleTimer, NSViewController, NSMutableArray;

@interface _NSViewAuxiliary : NSObject {

	struct {
		unsigned _liveResizeImageCanBeCachedInStart : 1;
		unsigned _liveResizeActive : 1;
		unsigned _usesQuickdraw : 1;
		unsigned _hidden : 1;
		unsigned _hiddenOrHasHiddenAncestor : 1;
		unsigned _reallyNeedsDisplayForBounds : 1;
		unsigned _focusRingType : 2;
		unsigned _drawWithTintWhenHidden : 1;
		unsigned _impactsWindowMoving : 1;
		unsigned _drawsOwnDescendants : 1;
		unsigned _drawnByAncestor : 1;
		unsigned _setFrameWillAutoInvalidate : 1;
		unsigned _drawingByHIView : 1;
		unsigned _supressViewWillDrawRecursion : 1;
		unsigned _revealoverComputationEnabled : 1;
		unsigned _revealoverComputationNeeded : 1;
		unsigned _revealoversWanted : 1;
		unsigned _hasDrawDelegate : 1;
		unsigned _fontSmoothingBackgroundColorSet : 1;
		unsigned _ignoreForKeyViewLoop : 1;
		unsigned _searchingForKeyViewReplacement : 1;
		unsigned _hasMultiClipDrawingHelper : 1;
		unsigned _displayingAllDirty : 1;
		unsigned _focusRingNeedsDisplayOutsideSelf : 1;
		unsigned _invalidTrackingRects : 1;
		unsigned _invalidCursorRects : 1;
		unsigned _wantsLayer : 1;
		unsigned _layerBacked : 1;
		unsigned _layerNeedsDisplay : 1;
		unsigned _dontSuppressLayerAnimation : 1;
		unsigned _canDrawConcurrently : 1;
	}  _vFlags2;
	struct {
		unsigned _appkitManagesLayer : 1;
		unsigned _shouldRemoveAtEndOfAnimation : 1;
		unsigned _viewGoingFromHiddenToUnhidden : 1;
		unsigned _cachedVisibleRectValueIsValid : 1;
		unsigned _layerTreeRendererSurfaceGone : 1;
		unsigned _layerTreeRendererNeedsUpdate : 1;
		unsigned _layerTreeRendererPaused : 1;
		unsigned _hasDrawMatrix : 1;
		unsigned _detachingFromWindow : 1;
		unsigned _anySubviewExceedsSelfsBoundsBitIsValid : 1;
		unsigned _anySubviewExceedsSelfsBounds : 1;
		unsigned _drawsNothing : 1;
		unsigned _registeredForViewDidChangeNotification : 1;
		unsigned _overridesNeedsDisplay : 1;
		unsigned _someDescendantMightOverrideNeedsDisplay : 1;
		unsigned _isWebClipView : 1;
		unsigned _checkedIfWebFrameView : 1;
		unsigned _isWebFrameView : 1;
		unsigned _layersFrozenForTransplant : 1;
		unsigned _anyDescendantCanDrawConcurrently : 1;
		unsigned _cachedShouldUseTrackingAreasForToolTips : 1;
		unsigned _shouldUseTrackingAreasForToolTips : 1;
		unsigned _layerContentsRedrawPolicy : 3;
		unsigned _layerContentsPlacement : 4;
		unsigned _explicitSurfaceColorSpace : 1;
	}  _vFlags3;
	struct {
		unsigned _acceptsTouches : 1;
		unsigned _wantsRestingTouches : 1;
		unsigned _liveAnimationActive : 1;
		unsigned _surfaceSyncPostponed : 1;
		unsigned _needsRedrawBeforeFirstLiveResizeCache : 1;
		unsigned _viewDying : 1;
		unsigned _hasNSViewBackingLayer : 1;
		unsigned _automaticFocusRingDisabled : 1;
		unsigned _unused : 1;
		unsigned _layoutIsClean : 1;
		unsigned _subviewLayoutIsClean : 1;
		unsigned _layingOutFromConstraints : 1;
		unsigned _hasInvalidRestorableState : 1;
		unsigned _hasEverHadInvalidRestorableState : 1;
		unsigned _layoutFlushingDisabled : 1;
		unsigned _contentSizeConstraintsAreClean : 1;
		unsigned _constraintsAreClean : 1;
		unsigned _subviewLayoutConstraintsAreClean : 1;
		unsigned _hasDetectedNonSavvyLayoutOverride : 1;
		unsigned _hasEverBeenRotatedOrScaledFromBase : 1;
		unsigned _isDrawingIntoLayer : 1;
		unsigned _wantsBestResolutionOpenGLSurface : 1;
		unsigned _isSurfaceBacked : 1;
		unsigned _drewIntoBackingSurface : 1;
		unsigned _semanticContext : 3;
		unsigned _semanticContextExplicitSomewhereInChain : 1;
		unsigned _hasInputContext : 1;
		unsigned _checkedForInputContext : 1;
	}  _vFlags4;
	struct {
		unsigned _hasLastIdleLiveResizeInvalidationDate : 1;
		unsigned _hasLiveResizeCachedImage : 1;
		unsigned _supportsDirectLayerContentsCache : 2;
		unsigned _animatingFrameSize : 1;
		unsigned _hasIncompatibleAppearanceOverride : 1;
		unsigned _dontArchiveAsSubview : 1;
		unsigned _usesPointIntegralizationForLayout : 1;
		unsigned _shouldCallDrawLayer : 1;
		unsigned _hasCanDrawSubviewsIntoLayerAncestor : 1;
		unsigned _hasAutoCanDrawSubviewsIntoLayer : 1;
		unsigned _postsNeedsDisplayInRectNotification : 1;
		unsigned _unused2 : 1;
		unsigned _unused3 : 1;
		unsigned _hasAutoSetWantsLayer : 1;
		unsigned _autoSettingWantsLayer : 1;
		unsigned _backgroundFiltersUseCIFilter : 1;
		unsigned _contentFiltersUseCIFilter : 1;
		unsigned _compositingFilterIsCIFilter : 1;
		unsigned _layerUsesCIFilter : 1;
		unsigned _hasSuspendedWindowServerLayerHosting : 1;
		unsigned _clipsToBounds : 1;
		unsigned _willInvalidateFocus : 1;
		unsigned _hasAccessibilityUIElementSpecifier : 1;
	}  _vFlags5;
	unsigned _isScrolling : 1;
	unsigned _cachedWantsToPrefetchContent : 1;
	unsigned _hasCachedVisibleRect : 1;
	unsigned _descendentHasCachedVisibleRect : 1;
	unsigned _trackingAreasDirty : 4;
	unsigned _isMagnifying : 1;
	unsigned _opaqueIsPropagatedToCAView : 1;
	unsigned _gesturesEnabled : 1;
	unsigned _excludeSubviewsInCacheDisplayInRect : 1;
	unsigned _dontAskSuperForReferenceColorCheck : 1;
	unsigned _hasVibrancyFilter : 1;
	unsigned _registeredWithBackdropView : 1;
	unsigned _hasCachedContainingBackdropView : 1;
	unsigned long long _needsGeometryInWindowDidChangeNotificationCount;
	CGRect _cachedVisibleRect;
	_NSBindingAdaptor* _bindingAdaptor;
	NSViewTrackingRect* _trackingRects;
	NSMenu* _menu;
	_NSViewLayoutAux* _layoutAux;
	CGPoint topLeft;
	CGRect _errorOffsets;
	CGSize oldSize;
	_NSViewAnimator* _animator;
	NSDictionary* _animationsDictionary;
	CAViewRef _layerTreeRenderer;
	double _alphaValue;
	NSArray* _contentFilters;
	NSArray* _backgroundFilters;
	CIFilter* _compositingFilter;
	NSShadow* _shadow;
	NSSurface* _surface;
	NSColorSpace* _surfaceColorSpace;
	NSMutableSet* _trackingAreas;
	unsigned _lastCAViewFlags;
	unsigned _userInterfaceItemIdentifierInternalNumber;
	NSString* _userInterfaceItemIdentifier;
	NSBezierPath* _clipPath;
	SCD_Struct_NS95 _drawRectTimeStats;
	/*^block*/id _updateLayerHandler;
	NSAppearance* _appearance;
	NSAppearance* _cachedEffectiveAppearance;
	double _cornerRadius;
	NSColor* _backgroundColor;
	long long _enumeratingSubviewsCount;
	CGRect _preparedContentRect;
	CGRect _committedPreparedContentRect;
	_NSIdleTimer* _idleTimerMonitor;
	NSViewController* _viewController;
	NSMutableArray* _gestureRecognizers;

}
@end

