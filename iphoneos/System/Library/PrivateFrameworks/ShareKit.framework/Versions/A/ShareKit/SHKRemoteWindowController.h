/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <AppKit/NSWindowController.h>
#import <ShareKit/SHKHostWindowDelegate.h>
#import <ShareKit/NSWindowDelegate.h>

@class SHKRemoteView, SHKSharingService, NSWindow, SHKDimAndShadowWindow, SHKBlurWindow, NSString;

@interface SHKRemoteWindowController : NSWindowController <SHKHostWindowDelegate, NSWindowDelegate> {

	char _disableServiceWindowPresentation;
	char _isInNotificationCenter;
	char _noSourceWindow;
	SHKRemoteView* _remoteView;
	SHKSharingService* _service;
	NSWindow* _clientWindow;
	SHKDimAndShadowWindow* _dimAndShadowWindow;
	SHKBlurWindow* _blurWindow;
	CGRect _dimFrame;

}

@property (__weak) SHKRemoteView * remoteView;                              //@synthesize remoteView=_remoteView - In the implementation block
@property (__weak) SHKSharingService * service;                             //@synthesize service=_service - In the implementation block
@property (retain) NSWindow * clientWindow;                                 //@synthesize clientWindow=_clientWindow - In the implementation block
@property (assign) CGRect dimFrame;                                         //@synthesize dimFrame=_dimFrame - In the implementation block
@property (assign) CGRect blurFrame; 
@property (retain) SHKDimAndShadowWindow * dimAndShadowWindow;              //@synthesize dimAndShadowWindow=_dimAndShadowWindow - In the implementation block
@property (retain) SHKBlurWindow * blurWindow;                              //@synthesize blurWindow=_blurWindow - In the implementation block
@property (assign) char disableServiceWindowPresentation;                   //@synthesize disableServiceWindowPresentation=_disableServiceWindowPresentation - In the implementation block
@property (assign) char isInNotificationCenter;                             //@synthesize isInNotificationCenter=_isInNotificationCenter - In the implementation block
@property (assign) char noSourceWindow;                                     //@synthesize noSourceWindow=_noSourceWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SHKSharingService *)service;
-(void)setService:(SHKSharingService *)arg1 ;
-(char)isInNotificationCenter;
-(void)startMarkupTransitionInWithServiceScreenFrame:(CGRect)arg1 initialLayerTransform:(CGAffineTransform)arg2 dimmingScreenFrame:(CGRect)arg3 ;
-(void)startMarkupTransitionOut;
-(void)startInstantTransitionInWithServiceScreenFrame:(CGRect)arg1 dimmingScreenFrame:(CGRect)arg2 ;
-(void)startInstantTransitionOut;
-(void)startSharingTransitionInWithServiceScreenFrame:(CGRect)arg1 initialLayerTransform:(CGAffineTransform)arg2 dimmingScreenFrame:(CGRect)arg3 delay:(double)arg4 duration:(double)arg5 currentMediaTime:(double)arg6 ;
-(void)startSharingTransitionOutWithSuccess:(char)arg1 duration:(double)arg2 ;
-(void)setHostWindowFrame:(CGRect)arg1 withClientWindowSync:(char)arg2 blurAndShadowSync:(char)arg3 ;
-(void)setAnimatesDimAndBlur:(char)arg1 ;
-(void)requestClientWindowFrameWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)viewControllerWantsToChangeViewToSize:(CGSize)arg1 containerViewScreenFrame:(CGRect)arg2 currentViewFrame:(CGRect)arg3 transactionUUID:(id)arg4 ;
-(char)disableServiceWindowPresentation;
-(id)initWithWindow:(id)arg1 clientWindow:(id)arg2 remoteView:(id)arg3 noSourceWindow:(char)arg4 disableServiceWindowPresentation:(char)arg5 isInNotificationCenter:(char)arg6 service:(id)arg7 ;
-(void)setIsInNotificationCenter:(char)arg1 ;
-(void)setDisableServiceWindowPresentation:(char)arg1 ;
-(void)setRemoteView:(SHKRemoteView *)arg1 ;
-(void)setClientWindow:(NSWindow *)arg1 ;
-(void)setNoSourceWindow:(char)arg1 ;
-(void)setDimAndShadowWindow:(SHKDimAndShadowWindow *)arg1 ;
-(SHKDimAndShadowWindow *)dimAndShadowWindow;
-(void)setBlurWindow:(SHKBlurWindow *)arg1 ;
-(SHKBlurWindow *)blurWindow;
-(void)clientWindowBecameKey;
-(NSWindow *)clientWindow;
-(char)noSourceWindow;
-(void)setBlurFrame:(CGRect)arg1 ;
-(void)performBlockOnAnotherMainQueueRunloopIteration:(/*^block*/id)arg1 ;
-(void)readyToShowWindow;
-(CGRect)blurFrame;
-(CGRect)dimFrame;
-(void)setDimFrame:(CGRect)arg1 ;
-(void)invalidate;
-(void)windowDidBecomeKey:(id)arg1 ;
-(void)windowDidResignKey:(id)arg1 ;
-(SHKRemoteView *)remoteView;
-(void)advanceToRunPhaseIfNeeded;
@end

