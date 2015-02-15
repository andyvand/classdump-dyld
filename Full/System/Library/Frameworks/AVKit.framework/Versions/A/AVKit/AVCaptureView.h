/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AppKit/NSView.h>
#import <AVKit/AVCaptureControllerDelegate.h>

@protocol AVCaptureViewDelegate;
@class AVCaptureVideoPreviewLayer, NSString, AVCameraDisabledView, AVLoadingIndicatorView, AVControlsContainerViewController, AVCaptureControlsViewController, NSTimer, NSTrackingArea, NSArray, AVCaptureController, AVCaptureDevice, AVCaptureSession, AVCaptureFileOutput;

@interface AVCaptureView : NSView <AVCaptureControllerDelegate> {

	id<AVCaptureViewDelegate> _delegate;
	int _delegateLock;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	NSString* _videoGravity;
	int _videoGravityLock;
	AVCameraDisabledView* _cameraDisabledView;
	AVLoadingIndicatorView* _loadingIndicatorView;
	AVControlsContainerViewController* _controlsContainerViewController;
	AVCaptureControlsViewController* _initialControlsViewController;
	AVCaptureControlsViewController* _captureControlsViewController;
	long long _showControlsCount;
	unsigned _isShowingControlsForMouseMovingInsideView : 1;
	NSTimer* _controlsTimer;
	NSTimer* _temporaryControlsTimer;
	NSTrackingArea* _trackingArea;
	unsigned _viewHasBeenSetup : 1;
	unsigned _showsControlsPane : 1;
	unsigned _hideControlsOnMouseUp : 1;
	unsigned _doNotMakeCurrentControlsViewControllerViewFirstResponder : 1;
	unsigned _viewNeedsResetupInViewDidMoveToWindow : 1;
	unsigned _usesDefaultSession : 1;
	NSArray* _noHideAreaViews;
	SCD_Struct_AV6 _floatingCaptureControlsMargin;
	long long _controlsStyle;
	AVCaptureController* _captureController;

}

@property (readonly) char showsControlsPane; 
@property (readonly) char prefersUnobscuredContent; 
@property (copy) NSArray * noHideAreaViews; 
@property (assign) SCD_Struct_AV6 floatingCaptureControlsMargin; 
@property (copy) NSString * selectedCompressionOptionsIdentifier; 
@property (readonly) AVCaptureDevice * videoDevice; 
@property (readonly) AVCaptureDevice * audioDevice; 
@property (getter=isFinishingRecording) char finishingRecording; 
@property (readonly) AVCaptureSession * session; 
@property (readonly) AVCaptureFileOutput * fileOutput; 
@property (__weak) id<AVCaptureViewDelegate> delegate; 
@property (assign) long long controlsStyle;                                    //@synthesize controlsStyle=_controlsStyle - In the implementation block
@property (copy) NSString * videoGravity; 
@property (retain) AVCaptureController * captureController;                    //@synthesize captureController=_captureController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingPrefersUnobscuredContent;
+(id)keyPathsForValuesAffectingVideoDevice;
+(id)keyPathsForValuesAffectingAudioDevice;
+(char)automaticallyNotifiesObserversOfSession;
+(id)keyPathsForValuesAffectingSession;
+(char)automaticallyNotifiesObserversOfFileOutput;
+(id)keyPathsForValuesAffectingFileOutput;
+(id)keyPathsForValuesAffectingSelectedCompressionOptionsIdentifier;
+(void)initialize;
-(void)_setupLoadingIndicatorView;
-(void)_setupControlsContainerView;
-(void)_showOrHideControls;
-(void)_setupTrackingAreas;
-(void)_showControlsTemporarily;
-(void)_hideControlsIfPossible;
-(void)_showControlsIfNeeded;
-(void)_fireTemporaryControlsTimer:(id)arg1 ;
-(char)showsControlsPane;
-(NSArray *)noHideAreaViews;
-(id)_noHideAreaViews;
-(long long)controlsStyle;
-(char)_mouseInNoHideArea;
-(id)_makeSelfFirstResponderIfCurrentFirstResponderIsDescendantOfSelfAndReturnCurrentFirstResponderInThatCase;
-(void)_restorePreviousFirstResponderOrMakeCurrentControlsViewControllersInitialFirstResponderFirstResponderIfSelfIsCurrentFirstResponder:(id)arg1 ;
-(id)_currentControlsViewController;
-(void)_fireControlsTimer:(id)arg1 ;
-(void)_replaceCurrentControlsViewControllerWithViewController:(id)arg1 ;
-(void)_hideControlsIfPossibleAfterDelay;
-(void)setControlsStyle:(long long)arg1 ;
-(char)prefersUnobscuredContent;
-(void)setNoHideAreaViews:(NSArray *)arg1 ;
-(void)_showControlsForPopUpButtonOrPopover;
-(void)_hideControlsForPopUpButtonOrPopover;
-(AVCaptureController *)captureController;
-(AVCaptureDevice *)videoDevice;
-(AVCaptureDevice *)audioDevice;
-(void)_setupCameraDisabledView;
-(void)_updateVideoPreviewLayerIfNeeded;
-(void)setCaptureController:(AVCaptureController *)arg1 ;
-(id)captureControlsViewController;
-(void)setCaptureControlsViewController:(id)arg1 ;
-(AVCaptureFileOutput *)fileOutput;
-(void)captureController:(id)arg1 startRecordingToFileOutput:(id)arg2 ;
-(void)setSession:(id)arg1 showVideoPreview:(char)arg2 showAudioPreview:(char)arg3 ;
-(char)isFinishingRecording;
-(void)setFinishingRecording:(char)arg1 ;
-(SCD_Struct_AV6)floatingCaptureControlsMargin;
-(void)setFloatingCaptureControlsMargin:(SCD_Struct_AV6)arg1 ;
-(void)setCompressionOptions:(id)arg1 ;
-(NSString *)selectedCompressionOptionsIdentifier;
-(void)setSelectedCompressionOptionsIdentifier:(NSString *)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(NSString *)videoGravity;
-(void)setDelegate:(id<AVCaptureViewDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<AVCaptureViewDelegate>)delegate;
-(void)rightMouseDown:(id)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)becomeFirstResponder;
-(void)scrollWheel:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)rotateWithEvent:(id)arg1 ;
-(void)tabletPoint:(id)arg1 ;
-(void)tabletProximity:(id)arg1 ;
-(void)cursorUpdate:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(void)touchesBeganWithEvent:(id)arg1 ;
-(void)touchesMovedWithEvent:(id)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(void)touchesCancelledWithEvent:(id)arg1 ;
-(AVCaptureSession *)session;
@end

