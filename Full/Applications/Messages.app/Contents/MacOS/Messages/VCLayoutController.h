/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Messages/Messages-Structs.h>
@class VideoConferenceLayerView, OpenGLLayerModel, NSDate, NSTimer, NSMutableDictionary, OpenGLImageLayer;

@interface VCLayoutController : NSObject {

	VideoConferenceLayerView* _container;
	OpenGLLayerModel* _layerModel;
	char _isPreview;
	char _isFullScreen;
	char _hasPIP;
	char _theatricalLayout;
	char _PIPHiddenByUser;
	char _didMoveLocalLayerBelowBanner;
	char _forceDisablePreviewLabel;
	NSDate* _transitionStartTime;
	NSDate* _AOLFadeOutStartTime;
	NSTimer* _timer;
	NSTimer* _AOLFadeOutTimer;
	NSMutableDictionary* _flipTimers;
	float _PIPScale;
	RectPosition _PIPPosition;
	float _windowStartWidth;
	float _windowEndWidth;
	float _transitionProgress;
	CGRect _startPIPFrame;
	CGRect _endPIPFrame;
	long long _trackingRectTag;
	long long _vcLayerHit;
	char _mouseInCloseButton;
	char _mouseIsHidden;
	OpenGLImageLayer* _recordingDot;

}
+(void)showCameraOff:(char)arg1 inLayer:(id)arg2 ;
+(void)_constrainWindow:(id)arg1 frame:(CGRect*)arg2 screen:(id)arg3 andContainerSize:(CGSize*)arg4 ;
+(void)_createTextLabel:(id)arg1 layerName:(id)arg2 inLayer:(id)arg3 ;
+(id)_badgeImage:(id)arg1 atSize:(CGSize)arg2 inImageOfSize:(CGSize)arg3 atPoint:(CGPoint)arg4 ;
+(void)_showMute:(char)arg1 pause:(char)arg2 off:(char)arg3 stalled:(char)arg4 large:(char)arg5 blackOpacity:(double)arg6 inLayer:(id)arg7 ;
+(CGRect)constrainedWindow:(id)arg1 frame:(CGRect)arg2 screen:(id)arg3 withContainerSize:(CGSize)arg4 ;
+(void)initialize;
-(void)setLayerModel:(id)arg1 ;
-(id)layerModel;
-(unsigned)_autoresizingMask;
-(void)freezeFrame;
-(void)_syncPositionPrefsRead:(char)arg1 ;
-(void)_syncScalePrefRead:(char)arg1 ;
-(void)_containerDidResize:(id)arg1 ;
-(void)_didHideParticipantStatus:(id)arg1 ;
-(void)_didShowParticipantStatus:(id)arg1 ;
-(void)_windowBackingPropertiesChanged:(id)arg1 ;
-(void)_dontHideOverlay;
-(void)setShowsRecordingDot:(char)arg1 on:(char)arg2 ;
-(void)stopPreviewTransition;
-(void)stopAOLBadgeFadeOut;
-(void)_addPIPBorder;
-(void)showPreviewLabel:(char)arg1 ;
-(void)_runTheatricalTransition:(unsigned)arg1 snapToVideo:(char)arg2 auxVideoMode:(int)arg3 fullScreenAnimationTime:(double)arg4 ;
-(double)_videoWidthToSnapWithMin:(double)arg1 ;
-(CGSize)_windowSizeForRemoteLayers:(int)arg1 ofWidth:(double)arg2 ;
-(void)_showOverlay;
-(void)_hideOverlayAndCursor;
-(void)containerDidEndLiveResize;
-(void)_changeAOLLabelSize;
-(void)_setFullScreen:(char)arg1 layerWidth:(double)arg2 ;
-(double)_transitionProgressReverse:(char)arg1 ;
-(CGRect)_PIPFrameForBounds:(CGRect)arg1 ;
-(void)_updateBannerHitTesting;
-(void)_fadeOutAOLBadge;
-(double)currentLayerWidth;
-(void)_getAspectTransitionForLayers:(int)arg1 ofWidth:(double)arg2 auxVideoMode:(int)arg3 containerStart:(CGSize*)arg4 end:(CGSize*)arg5 windowStart:(CGRect*)arg6 end:(CGRect*)arg7 ;
-(CGRect)_theoreticalPIPFrameForLayers:(int)arg1 inBounds:(CGRect)arg2 auxVideoMode:(int)arg3 ;
-(void)setPIPHidden:(char)arg1 ;
-(void)_updateCursorTracking;
-(void)_runTheatricalTransition:(unsigned)arg1 snapToVideo:(char)arg2 auxVideoMode:(int)arg3 fullScreenAnimationTime:(double)arg4 sizePIPToWindow:(char)arg5 ;
-(void)removeRemoteVCLayer:(id)arg1 fullScreenAnimationTime:(double)arg2 willResultInOneWayChat:(char)arg3 ;
-(void)_stepLayerFlip:(id)arg1 ;
-(char)_startLayerFlip:(id)arg1 ;
-(id)_createVCLayerNamed:(id)arg1 vcPartyID:(id)arg2 resizes:(char)arg3 appearance:(int)arg4 atIndex:(unsigned long long)arg5 isLocal:(char)arg6 isAuxVideo:(char)arg7 isReplacement:(char)arg8 ;
-(CGRect)_banner:(id)arg1 frameInVCLayer:(id)arg2 ;
-(void)_createCloseButtonForLayer:(id)arg1 ;
-(id)createLayerWithLabel:(id)arg1 fontSize:(double)arg2 name:(id)arg3 margin:(double)arg4 bgSize:(CGSize)arg5 ;
-(void)_createAOLLabel;
-(void)_showConnectionDoctorLabelInLayer:(id)arg1 ;
-(char)canShowHidePIP;
-(void)_hideOverlay;
-(void)setPIPHidden:(char)arg1 byUser:(char)arg2 ;
-(char)isPIPHidden;
-(CGRect)_resizeCornerRect;
-(void)_setMouseInLayer:(long long)arg1 inCloseButton:(char)arg2 ;
-(void)_hideOverlayAndCursorAfterDelay;
-(void)_showCloseButton:(char)arg1 rollover:(char)arg2 inLayer:(id)arg3 ;
-(void)_doBannerHitTest:(CGPoint)arg1 ;
-(void)_mainThreadPerformAnimateLayerFromDictionary:(id)arg1 ;
-(void)_performMainThreadAnimateLayer:(id)arg1 frame:(CGRect)arg2 ;
-(void)_backgroundThreadAnimateLayerFromDictionary:(id)arg1 ;
-(void)_animateLayer:(id)arg1 from:(CGRect)arg2 to:(CGRect)arg3 ;
-(void)_animatePIPFrom:(CGRect)arg1 to:(CGRect)arg2 ;
-(char)_trackMouseDown:(id)arg1 inCloseButtonAt:(CGPoint)arg2 ;
-(void)mouseMovedAt:(CGPoint)arg1 ;
-(void)_resizePIPWithOriginalSize:(CGSize)arg1 ;
-(void)_movePIPWithStartFrame:(CGRect)arg1 baseOffset:(CGSize)arg2 useFistCursor:(char)arg3 ;
-(id)bannerForParticipant:(id)arg1 ;
-(id)initWithContainer:(id)arg1 videoOut:(char)arg2 videoIn:(char)arg3 ;
-(void)clearContainer;
-(double)PIPScale;
-(RectPosition)PIPPosition;
-(void)setPreview:(char)arg1 snapToVideo:(char)arg2 ;
-(void)setHasPIP;
-(void)setNotFullScreen:(double)arg1 ;
-(void)fitWindowToLocalBannerHorizOnly:(char)arg1 ;
-(CGSize)standardWindowSize;
-(void)shouldFullscreenPillarbox:(char*)arg1 letterbox:(char*)arg2 aspect:(double*)arg3 forSize:(CGSize)arg4 ;
-(void)animateAdditionOfRemoteLayerAtIndex:(unsigned long long)arg1 resizeTime:(double)arg2 ;
-(void)removeRemoteVCLayer:(id)arg1 fullScreenAnimationTime:(double)arg2 ;
-(char)startLocalLayerFlip;
-(char)startRemoteLayerFlip:(int)arg1 ;
-(id)createLayerForParticipant:(id)arg1 appearance:(int)arg2 atIndex:(unsigned long long)arg3 isAuxVideo:(char)arg4 isReplacement:(char)arg5 ;
-(id)createBannerForParticipant:(id)arg1 ;
-(void)repositionBannerForParticipant:(id)arg1 ;
-(void)removeBannerForParticipant:(id)arg1 ;
-(void)createCloseButtonForParticipant:(id)arg1 ;
-(void)createCloseButtonForAuxVideo:(id)arg1 ;
-(void)removeCloseButtonForParticipant:(id)arg1 ;
-(void)createWhitePreviewLayerForLocalParticipant:(id)arg1 ;
-(void)createAOLBadge;
-(void)forceDisablePreviewLabel:(char)arg1 ;
-(void)removeAllBanners;
-(void)disableBackdropsUpdates;
-(void)showLocalConnectionDoctorLabel;
-(void)showRemoteConnectionDoctorLabel:(id)arg1 ;
-(void)showLocalMute:(char)arg1 pause:(char)arg2 off:(char)arg3 stalled:(char)arg4 ;
-(void)showRemoteParty:(id)arg1 mute:(char)arg2 pause:(char)arg3 stalled:(char)arg4 ;
-(void)mouseDown:(id)arg1 at:(CGPoint)arg2 ;
-(void)mouseUpAt:(CGPoint)arg1 ;
-(void)mouseDraggedAt:(CGPoint)arg1 ;
-(void)scrollWheel:(id)arg1 at:(CGPoint)arg2 ;
-(char)isPreview;
-(void)dealloc;
-(void)resetCursorRects;
-(void)setFullScreen;
-(id)container;
-(char)isFullScreen;
-(void)updateLayout;
@end

