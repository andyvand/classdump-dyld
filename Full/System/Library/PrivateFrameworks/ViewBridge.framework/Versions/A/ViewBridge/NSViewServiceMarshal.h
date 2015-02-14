/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <AppKit/NSView.h>
#import <ViewBridge/NSXPCListenerDelegate.h>
#import <ViewBridge/NSVBXPCConnectionClient.h>
#import <ViewBridge/NSViewServiceMarshal.h>

@protocol NSViewServiceMarshal <_UIViewServiceUIBehaviorInterface>
@required
-(void)forgetAccessoryView;
-(void)setAccessoryViewSize:(CGSize)arg1 withReply:(/*^block*/id)arg2;
-(void)remoteWindowReceivedEventType:(unsigned long long)arg1;
-(void)bootstrap:(SCD_Struct_NS4)arg1 withReply:(/*^block*/id)arg2;
-(void)setAppearance:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)beginRemoteModalSession:(id)arg1 title:(id)arg2 size:(CGSize)arg3 serviceTrustsRemoteKeyEvents:(char)arg4 withReply:(/*^block*/id)arg5;
-(void)endRemoteModalSession:(id)arg1;
-(void)validateAction:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)performAction:(id)arg1 forTarget:(id)arg2;
-(void)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)handleKeyEventFromRemote:(id)arg1 eventOwner:(unsigned)arg2;
-(void)performKeyEquivalent:(id)arg1 eventOwner:(unsigned)arg2 withReply:(/*^block*/id)arg3;
-(void)cancelActionHitRemoteView:(/*^block*/id)arg1;
-(void)setServiceObject:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)syncServiceWindow:(id)arg1;
-(void)remoteViewSizeDidChange:(CGSize)arg1 transactions:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)remoteViewDidMoveToWindowWithKey:(char)arg1 inActiveApp:(char)arg2;
-(void)remoteViewBecameFirstResponder:(unsigned long long)arg1 forWindowWithKey:(char)arg2 inActiveApp:(char)arg3 reply:(/*^block*/id)arg4;
-(void)remoteViewResignedFirstResponderInActiveApp:(char)arg1 inFavorOfAccessoryView:(char)arg2;
-(void)remoteViewWillStartLiveResizeWithReply:(/*^block*/id)arg1;
-(void)remoteViewDidEndLiveResizeWithReply:(/*^block*/id)arg1;
-(void)remoteWindowBecameKeyInActiveApp:(char)arg1;
-(void)remoteWindowResignedKeyInActiveApp:(char)arg1;
-(void)remoteWindowChangedEdgeResizingRects:(id)arg1;
-(void)remoteWindowLevelDidChange:(long long)arg1;
-(void)remoteViewDidMove:(CGPoint)arg1;
-(void)remoteViewContainingWindowOcclusionStateDidChange:(unsigned long long)arg1;
-(void)advanceToRunPhase:(/*^block*/id)arg1;
-(void)willBecomeAssociatedWithRemoteWindow:(unsigned)arg1 atLevel:(long long)arg2 withReply:(/*^block*/id)arg3;
-(void)didBecomeAssociatedWithRemoteWindow:(unsigned)arg1 inActiveApp:(char)arg2;
-(void)enableScreenUpdates:(/*^block*/id)arg1;
-(void)disableScreenUpdates:(/*^block*/id)arg1;
-(void)setRemoteAccessoryViewCanBecomeKeyView:(char)arg1;
-(void)addWindow:(unsigned)arg1 toOrderingGroup:(unsigned)arg2 op:(int)arg3 withReply:(/*^block*/id)arg4;
-(void)orderOutServiceWindow:(/*^block*/id)arg1;
-(void)orderOutChildWindows:(/*^block*/id)arg1;
-(void)accessibilityTokenForFocusedUIElement:(/*^block*/id)arg1;
-(void)applicationHideUnhide:(unsigned long long)arg1;
-(void)serviceViewControllerProxy:(/*^block*/id)arg1;
-(void)allowAppNap:(char)arg1;
-(void)setFontSmoothingBackgroundColor:(id)arg1;

@end

#import <ViewBridge/NSXPCConnectionDelegate.h>

@protocol NSObject, NSXPCProxyCreating;
@class NSWindow, NSString, NSViewBridge, NSViewService, NSXPCConnection, NSAccessibilityRemoteUIElement, NSMutableArray, NSResponder, NSColor, NSXPCInterface, NSVB_ViewServiceBehaviorProxy, NSProxy, NSLayoutConstraint;

@interface NSViewServiceMarshal : NSView <NSXPCListenerDelegate, NSVBXPCConnectionClient, NSViewServiceMarshal, NSXPCConnectionDelegate> {

	NSWindow* _serviceWindow;
	NSString* _appearanceName;
	id<NSObject> _activity;
	CGSize _sizeHint;
	CGSize _remoteViewSize;
	NSViewBridge* _bridge;
	unsigned _keyFocusTheftID;
	NSViewService* _viewController;
	NSXPCConnection* _remoteViewMarshalConnection;
	unsigned char _bridgePhase;
	unsigned _invalid : 1;
	unsigned _hasActivatedTSM : 1;
	unsigned _hostChildBootstrapping : 1;
	unsigned _notificationsRegistered : 1;
	unsigned _mayBecomeKey : 1;
	unsigned _remoteViewIsFirstResponder : 1;
	unsigned _accessoryViewContainsFirstResponder : 1;
	unsigned _remoteSizeChangeInProgress : 1;
	unsigned _remoteFirstResponderChangeInProgress : 1;
	unsigned _remoteAccessoryViewCanBecomeKeyView : 1;
	unsigned _transactionBegun : 1;
	unsigned _didOverrideStyleMask : 1;
	unsigned _willUpdateAccessibilityChildren : 1;
	unsigned _serviceOwnsWindowEventShape : 1;
	unsigned _wantWindowEventShapeForClickability : 1;
	unsigned _restoreWindowOpacity : 1;
	unsigned _grantedPresenterRightToRemote : 1;
	unsigned _applicationHiding : 1;
	unsigned _applicationUnhiding : 1;
	unsigned _allowWindowFrameOriginChange : 1;
	unsigned _setStyleMaskInProgress : 1;
	unsigned long long _serviceFlags;
	NSAccessibilityRemoteUIElement* _remoteAccessibilityParent;
	NSMutableArray* _accessoryAccessibilityChildren;
	unsigned _remoteConnectionID;
	NSString* _windowRightsToken;
	NSResponder* _suspendedFirstResponder;
	unsigned _setViewCount;
	unsigned long long _styleMask;
	NSColor* _fontSmoothingBackgroundColor;
	CGSRegionObjectRef _windowResizingRegion;
	CGSRegionObjectRef _visibleRegion;
	NSXPCInterface* _clientExportedInterface;
	NSVB_ViewServiceBehaviorProxy* _clientExportedObject;
	NSProxy*<NSXPCProxyCreating> _remoteViewControllerProxy;
	unsigned _hostWindow;
	NSLayoutConstraint* _layoutConstraintHeight;
	NSLayoutConstraint* _layoutConstraintWidth;

}

@property (readonly) int eventRoutingCentricity; 
@property (readonly) unsigned long long serviceFlags;                                       //@synthesize serviceFlags=_serviceFlags - In the implementation block
@property (readonly) NSViewService * viewController;                                        //@synthesize viewController=_viewController - In the implementation block
@property (readonly) CGSize sizeHint; 
@property (readonly) char invalid; 
@property (readonly) NSViewBridge * bridge;                                                 //@synthesize bridge=_bridge - In the implementation block
@property (assign) unsigned char bridgePhase;                                               //@synthesize bridgePhase=_bridgePhase - In the implementation block
@property (assign) char mayBecomeKey; 
@property (readonly) CGSize remoteViewSize;                                                 //@synthesize remoteViewSize=_remoteViewSize - In the implementation block
@property (readonly) char isAssociatedWithRemoteWindow; 
@property (retain) NSAccessibilityRemoteUIElement * remoteAccessibilityParent;              //@synthesize remoteAccessibilityParent=_remoteAccessibilityParent - In the implementation block
@property (retain) NSMutableArray * accessoryAccessibilityChildren;                         //@synthesize accessoryAccessibilityChildren=_accessoryAccessibilityChildren - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceMarshalForServiceWindow:(id)arg1 ;
+(char)haveStolenKeyFocus;
+(void)windowDying:(id)arg1 ;
+(id)serviceMarshalForKeyForwarding;
+(void)lostKeyFocus;
+(id)serviceMarshalForAppModalSession;
+(char)allowSetObjectForKey:(id)arg1 bridge:(id)arg2 bridgePhase:(unsigned char)arg3 withReply:(/*^block*/id)arg4 ;
+(Class)correctionPanelClass;
+(char)serviceWindowWouldActivate:(id)arg1 ;
+(void)informHostsOfConnectionToService:(int)arg1 ;
+(id)serviceMarshalForHostWindow:(unsigned)arg1 ;
+(id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2 ;
-(int)eventRoutingCentricity;
-(CGSize)remoteViewSize;
-(void)defaultResizeBehavior;
-(void)ensureLayoutConstraints;
-(void)requestResize:(CGSize)arg1 transaction:(id)arg2 animate:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)associateMouseAndMouseCursorPosition:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)suspendInFavorOfService:(id)arg1 serviceSubclassName:(id)arg2 initialBridge:(id)arg3 completion:(/*^block*/id)arg4 ;
-(CGSize)sizeHint;
-(id)remoteViewControllerProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)retreatToConfigPhase;
-(void)didSetView;
-(void)remoteWindowReceivedMouseEventType:(unsigned long long)arg1 ;
-(char)advanceToRunPhase;
-(void)forgetAccessoryView;
-(void)setAccessoryViewSize:(CGSize)arg1 withReply:(/*^block*/id)arg2 ;
-(void)remoteWindowReceivedEventType:(unsigned long long)arg1 ;
-(void)handleEventFromService:(id)arg1 eventOwner:(unsigned)arg2 withReply:(/*^block*/id)arg3 ;
-(void)serviceWindowDidBecomeKey;
-(void)serviceWindowDidResignKey;
-(void)serviceAccessoryViewBecameFirstResponder:(char)arg1 ;
-(void)discloseAccessoryView:(char)arg1 withOffset:(CGPoint)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4 ;
-(void)serviceWindowWouldActivate;
-(void)bootstrap:(SCD_Struct_NS4)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setAppearance:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)beginRemoteModalSession:(id)arg1 title:(id)arg2 size:(CGSize)arg3 serviceTrustsRemoteKeyEvents:(char)arg4 withReply:(/*^block*/id)arg5 ;
-(void)endRemoteModalSession:(id)arg1 ;
-(void)validateAction:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)performAction:(id)arg1 forTarget:(id)arg2 ;
-(void)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)handleKeyEventFromRemote:(id)arg1 eventOwner:(unsigned)arg2 ;
-(void)performKeyEquivalent:(id)arg1 eventOwner:(unsigned)arg2 withReply:(/*^block*/id)arg3 ;
-(void)cancelActionHitRemoteView:(/*^block*/id)arg1 ;
-(void)setServiceObject:(id)arg1 forKey:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)syncServiceWindow:(id)arg1 ;
-(void)remoteViewSizeDidChange:(CGSize)arg1 transactions:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)remoteViewDidMoveToWindowWithKey:(char)arg1 inActiveApp:(char)arg2 ;
-(void)remoteViewBecameFirstResponder:(unsigned long long)arg1 forWindowWithKey:(char)arg2 inActiveApp:(char)arg3 reply:(/*^block*/id)arg4 ;
-(void)remoteViewResignedFirstResponderInActiveApp:(char)arg1 inFavorOfAccessoryView:(char)arg2 ;
-(void)remoteViewWillStartLiveResizeWithReply:(/*^block*/id)arg1 ;
-(void)remoteViewDidEndLiveResizeWithReply:(/*^block*/id)arg1 ;
-(void)remoteWindowBecameKeyInActiveApp:(char)arg1 ;
-(void)remoteWindowResignedKeyInActiveApp:(char)arg1 ;
-(void)remoteWindowChangedEdgeResizingRects:(id)arg1 ;
-(void)remoteWindowLevelDidChange:(long long)arg1 ;
-(void)remoteViewDidMove:(CGPoint)arg1 ;
-(void)remoteViewContainingWindowOcclusionStateDidChange:(unsigned long long)arg1 ;
-(void)advanceToRunPhase:(/*^block*/id)arg1 ;
-(void)willBecomeAssociatedWithRemoteWindow:(unsigned)arg1 atLevel:(long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)didBecomeAssociatedWithRemoteWindow:(unsigned)arg1 inActiveApp:(char)arg2 ;
-(void)enableScreenUpdates:(/*^block*/id)arg1 ;
-(void)disableScreenUpdates:(/*^block*/id)arg1 ;
-(void)setRemoteAccessoryViewCanBecomeKeyView:(char)arg1 ;
-(void)addWindow:(unsigned)arg1 toOrderingGroup:(unsigned)arg2 op:(int)arg3 withReply:(/*^block*/id)arg4 ;
-(void)orderOutServiceWindow:(/*^block*/id)arg1 ;
-(void)orderOutChildWindows:(/*^block*/id)arg1 ;
-(void)accessibilityTokenForFocusedUIElement:(/*^block*/id)arg1 ;
-(void)applicationHideUnhide:(unsigned long long)arg1 ;
-(void)serviceViewControllerProxy:(/*^block*/id)arg1 ;
-(void)allowAppNap:(char)arg1 ;
-(void)lostKeyFocus;
-(void)prepareToHandleKeyEvent:(id)arg1 ;
-(void)registerBridgeKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3 ;
-(unsigned char)bridgePhase;
-(void)setRemoteObject:(id)arg1 forKey:(id)arg2 ;
-(void)sendEventUpRemoteResponderChain:(id)arg1 ;
-(char)addChildWindow:(id)arg1 ordered:(long long)arg2 toParent:(id)arg3 ;
-(char)dragWindow:(id)arg1 relativeToMouseDown:(CGPoint)arg2 ;
-(char)setWindow:(id)arg1 frame:(CGRect)arg2 display:(char)arg3 stashSize:(char)arg4 ;
-(void)setEventMaskBasedOnWindow:(id)arg1 ;
-(id)orderedDrawerAndWindowKeyLoopGroupingViews:(id)arg1 ;
-(void)setWindow:(id)arg1 styleMask:(unsigned long long)arg2 ;
-(void)hierarchyDidChangeInView:(id)arg1 ;
-(void)beginRemoteSheet:(id)arg1 modalForWindow:(id)arg2 size:(CGSize)arg3 isCritical:(char)arg4 withReply:(/*^block*/id)arg5 ;
-(char)orderWindow:(id)arg1 mode:(long long)arg2 relativeTo:(long long)arg3 ;
-(NSAccessibilityRemoteUIElement *)remoteAccessibilityParent;
-(void)windowReceivedLeftMouseDown:(id)arg1 ;
-(void)windowReceivedScrollWheel:(id)arg1 ;
-(char)mayBecomeKey;
-(char)isAssociatedWithRemoteWindow;
-(char)eventResizingRegionContainsPoint:(CGPoint)arg1 ;
-(char)makeFirstResponder:(id)arg1 ofWindow:(id)arg2 ;
-(void)deallocOnAppKitThread;
-(id)semaphoreForViewBridgePrivateMode;
-(int)startWindowRightsGrant:(int)arg1 reserving:(int)arg2 ;
-(id)semaphoreForWindowRights;
-(int)grantWindowRightsToRemote:(int)arg1 reserving:(int)arg2 ;
-(void)releaseKeyFocus:(const char*)arg1 ;
-(char)hasPanel;
-(void)invalidateWindowRights;
-(void)deactivateAppAndResignKey:(char)arg1 ;
-(void)resignFirstResponderIfNecessary;
-(void)maintainNotificationsForWindow:(char)arg1 ;
-(void)invalidateAccessoryView;
-(void)bifurcateWindowOrderingGroups:(id)arg1 ;
-(void)invalidateAndReleaseConnectionOnMainThread:(char)arg1 caller:(const char*)arg2 ;
-(id)remoteViewMarshal:(const char*)arg1 ;
-(void)informHostOfConnectionToService:(int)arg1 ;
-(id)remoteViewMarshal:(const char*)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(id)ensureViewLayerContext:(id)arg1 ;
-(char)remoteViewBecameFirstResponder:(unsigned long long)arg1 ignoreDirection:(char)arg2 forWindowWithKey:(char)arg3 inActiveApp:(char)arg4 ;
-(char)responder:(id)arg1 isFieldEditorFor:(id)arg2 ;
-(void)informRemoteOfChangeToFirstResponder:(id)arg1 forWindow:(id)arg2 inDirection:(unsigned long long)arg3 ;
-(void)setFontSmoothingBackgroundColorIfNeeded;
-(id)accessibilityChildTokens;
-(void)observeValueForFirstResponder:(id)arg1 ;
-(void)observeValueForContentMinSize:(id)arg1 ;
-(void)observeValueForContentMaxSize:(id)arg1 ;
-(void)observeValueForContentView:(id)arg1 ;
-(void)observeValueForAccessoryView:(id)arg1 ;
-(void)observeValueForWindow:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)ensureWindowEventShape;
-(CGPoint)_remoteViewSizeDidChange:(id)arg1 serviceWindowSize:(CGSize*)arg2 ;
-(void)accessoryViewOriginMayHaveChanged:(CGPoint)arg1 ;
-(void)acquireKeyFocus:(const char*)arg1 ;
-(char)stoleKeyFocus;
-(char)activateTSM:(const char*)arg1 ;
-(char)deactivateTSM:(const char*)arg1 ;
-(void)orderingWindow:(/*^block*/id)arg1 ;
-(void)becomeKeyAndActivate;
-(void)_didBecomeAssociatedWithRemoteWindow:(unsigned)arg1 inActiveApp:(char)arg2 ;
-(void)_willBecomeAssociatedWithRemoteWindow:(unsigned)arg1 atLevel:(long long)arg2 ;
-(CGPoint)remoteViewSizeDidChangeInProgress:(id)arg1 serviceWindowSize:(CGSize*)arg2 ;
-(void)updateVisibleRegion:(id)arg1 ;
-(void)setMayBecomeKey:(char)arg1 ;
-(void)_remoteWindowResignedKey:(char)arg1 ;
-(void)_remoteWindowBecameKey:(char)arg1 ;
-(void)remoteViewHasKey:(char)arg1 inActiveApp:(char)arg2 ;
-(void)remoteWindowChangedEdgeResizingRectsMainThread:(id)arg1 ;
-(char)firstResponderIsAccessoryView:(id)arg1 ;
-(char)setFirstResponderForRemoteView:(unsigned long long)arg1 ;
-(void)_remoteViewResignedFirstResponderInActiveApp:(char)arg1 inFavorOfAccessoryView:(char)arg2 ;
-(void)setAppearanceBasedOnCachedName:(id)arg1 ;
-(char)hasRendezvousChildController:(id)arg1 ;
-(void)prepareWindow:(id)arg1 backingStore:(char)arg2 ;
-(void)assertPosessionOfOwnerRight:(unsigned)arg1 ;
-(void)setBridgePhase:(unsigned char)arg1 ;
-(id)_bootstrap:(SCD_Struct_NS4)arg1 replyData:(SCD_Struct_NS7*)arg2 ;
-(char)cancelActionHitRemoteView;
-(id)fakeMenuItemForTarget:(id)arg1 withAction:(SEL)arg2 ;
-(SCD_Struct_NS8)findTargetAndAction:(id)arg1 ;
-(char)validateTargetAndAction:(const SCD_Struct_NS8*)arg1 validateMenuItem:(SCD_Struct_NS9*)arg2 validateUserInterfaceItem:(SCD_Struct_NS9*)arg3 ;
-(void)setRemoteAccessibilityParent:(NSAccessibilityRemoteUIElement *)arg1 ;
-(void)setEnhancedUserInterfaceAttribute:(id)arg1 ;
-(id)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2 ;
-(void)setAccessoryAccessibilityChildren:(NSMutableArray *)arg1 ;
-(id)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2 ;
-(NSMutableArray *)accessoryAccessibilityChildren;
-(void)pushFakeClickForWindow:(id)arg1 ;
-(int)orderOutChildWindows;
-(void)setFontSmoothingBackgroundColorIfNeeded:(id)arg1 ;
-(id)accessibilityTokenForFocusedUIElement;
-(void)ensureClientExportedInterface;
-(void)ensureClientExportedObject;
-(id)orderOutServiceWindow;
-(void)sendEventUpResponderChains:(id)arg1 ;
-(void)_serviceWindowDidResize:(id)arg1 ;
-(void)_serviceWindowDidBecomeKey:(id)arg1 ;
-(void)_serviceWindowDidResignKey:(id)arg1 ;
-(void)privateEventLoop:(/*^block*/id)arg1 ;
-(char)accessoryViewCanBecomeKeyView;
-(char)forwardKeyEventFromAccessoryView:(id)arg1 ;
-(void)remoteViewReceivedLeftMouseDown;
-(unsigned long long)serviceFlags;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(char)arg3 ;
-(SCD_Struct_NS0)auditToken;
-(id)initWithConnection:(id)arg1 ;
-(oneway void)release;
-(void)dealloc;
-(void)invalidate;
-(id)window;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAccessibilityParent:(id)arg1 ;
-(char)canBecomeKeyView;
-(char)isValid;
-(int)processIdentifier;
-(void)removeChildWindow:(id)arg1 ;
-(NSViewService *)viewController;
-(void)invalidate:(char)arg1 ;
-(void)setFontSmoothingBackgroundColor:(id)arg1 ;
-(NSViewBridge *)bridge;
-(char)invalid;
@end

