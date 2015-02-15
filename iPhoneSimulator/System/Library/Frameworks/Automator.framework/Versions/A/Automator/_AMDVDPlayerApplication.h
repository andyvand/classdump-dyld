/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <ScriptingBridge/SBApplication.h>

@class NSString, NSColor, NSArray;

@interface _AMDVDPlayerApplication : SBApplication

@property (copy,readonly) NSString * version; 
@property (readonly) char appInitializing; 
@property (readonly) char hasMultiplePlaybackChoice; 
@property (assign) char interactionOverride; 
@property (assign) char viewerFullScreenMenuOverride; 
@property (readonly) char hasMedia; 
@property (readonly) char dvdMenuActive; 
@property (readonly) int activeDvdMenu; 
@property (readonly) int dvdState; 
@property (assign) int dvdScanRate; 
@property (assign) char controllerVisibility; 
@property (assign) CGPoint controllerPosition; 
@property (readonly) CGRect controllerBounds; 
@property (readonly) CGRect controllerScreenBounds; 
@property (assign) int controllerOrientation; 
@property (assign) int controllerDrawer; 
@property (assign) char infoVisibility; 
@property (assign) CGPoint infoPosition; 
@property (assign) CGRect infoBounds; 
@property (readonly) CGRect infoScreenBounds; 
@property (assign) int infoType; 
@property (copy) NSColor * infoTextColor; 
@property (assign) char viewerVisibility; 
@property (assign) CGPoint viewerPosition; 
@property (readonly) CGRect viewerBounds; 
@property (readonly) CGRect viewerScreenBounds; 
@property (assign) int viewerSize; 
@property (assign) char viewerFullScreen; 
@property (assign) char audioMuted; 
@property (assign) long long audioVolume; 
@property (assign) long long elapsedTime; 
@property (assign) CGPoint elapsedExtendedTime; 
@property (assign) long long remainingTime; 
@property (assign) CGPoint remainingExtendedTime; 
@property (readonly) long long titleLength; 
@property (readonly) CGPoint titleExtendedLength; 
@property (readonly) long long availableAngles; 
@property (readonly) long long availableAudioTracks; 
@property (readonly) long long availableChapters; 
@property (readonly) long long availableSubtitles; 
@property (readonly) long long availableTitles; 
@property (assign) long long angle; 
@property (assign) long long audioTrack; 
@property (assign) long long chapter; 
@property (assign) char displayingSubtitle; 
@property (assign) long long subtitle; 
@property (assign) long long title; 
@property (assign) char closedCaptioning; 
@property (assign) int closedCaptioningDisplay; 
@property (readonly) char extendedBookmarks; 
@property (readonly) long long availableBookmarks; 
@property (copy,readonly) NSArray * bookmarkList; 
@property (readonly) char hasDefaultBookmark; 
@property (copy,readonly) id hasLastPlayBookmark; 
@property (readonly) char extendedVideoClips; 
@property (readonly) long long availableVideoClips; 
@property (copy,readonly) NSArray * videoClipList; 
@property (assign) char loopVideoClip; 
@property (readonly) char clipMode; 
@property (assign) char disableStatusWindow; 
+(id)application;
-(id)classNamesForCodes;
-(id)codesForPropertyNames;
-(char)appInitializing;
-(char)hasMultiplePlaybackChoice;
-(char)interactionOverride;
-(void)setInteractionOverride:(char)arg1 ;
-(char)viewerFullScreenMenuOverride;
-(void)setViewerFullScreenMenuOverride:(char)arg1 ;
-(char)hasMedia;
-(char)dvdMenuActive;
-(int)activeDvdMenu;
-(int)dvdState;
-(int)dvdScanRate;
-(void)setDvdScanRate:(int)arg1 ;
-(char)controllerVisibility;
-(void)setControllerVisibility:(char)arg1 ;
-(CGPoint)controllerPosition;
-(void)setControllerPosition:(CGPoint)arg1 ;
-(CGRect)controllerBounds;
-(CGRect)controllerScreenBounds;
-(int)controllerOrientation;
-(void)setControllerOrientation:(int)arg1 ;
-(int)controllerDrawer;
-(void)setControllerDrawer:(int)arg1 ;
-(char)infoVisibility;
-(void)setInfoVisibility:(char)arg1 ;
-(CGPoint)infoPosition;
-(void)setInfoPosition:(CGPoint)arg1 ;
-(CGRect)infoBounds;
-(void)setInfoBounds:(CGRect)arg1 ;
-(CGRect)infoScreenBounds;
-(int)infoType;
-(void)setInfoType:(int)arg1 ;
-(NSColor *)infoTextColor;
-(void)setInfoTextColor:(NSColor *)arg1 ;
-(char)viewerVisibility;
-(void)setViewerVisibility:(char)arg1 ;
-(CGPoint)viewerPosition;
-(void)setViewerPosition:(CGPoint)arg1 ;
-(CGRect)viewerBounds;
-(CGRect)viewerScreenBounds;
-(int)viewerSize;
-(void)setViewerSize:(int)arg1 ;
-(char)viewerFullScreen;
-(void)setViewerFullScreen:(char)arg1 ;
-(char)audioMuted;
-(void)setAudioMuted:(char)arg1 ;
-(long long)audioVolume;
-(void)setAudioVolume:(long long)arg1 ;
-(void)setElapsedTime:(long long)arg1 ;
-(CGPoint)elapsedExtendedTime;
-(void)setElapsedExtendedTime:(CGPoint)arg1 ;
-(CGPoint)remainingExtendedTime;
-(void)setRemainingExtendedTime:(CGPoint)arg1 ;
-(long long)titleLength;
-(CGPoint)titleExtendedLength;
-(long long)availableAngles;
-(long long)availableAudioTracks;
-(long long)availableChapters;
-(long long)availableSubtitles;
-(long long)availableTitles;
-(long long)audioTrack;
-(void)setAudioTrack:(long long)arg1 ;
-(long long)chapter;
-(void)setChapter:(long long)arg1 ;
-(char)displayingSubtitle;
-(void)setDisplayingSubtitle:(char)arg1 ;
-(char)closedCaptioning;
-(void)setClosedCaptioning:(char)arg1 ;
-(int)closedCaptioningDisplay;
-(void)setClosedCaptioningDisplay:(int)arg1 ;
-(char)extendedBookmarks;
-(long long)availableBookmarks;
-(NSArray *)bookmarkList;
-(char)hasDefaultBookmark;
-(id)hasLastPlayBookmark;
-(char)extendedVideoClips;
-(long long)availableVideoClips;
-(NSArray *)videoClipList;
-(char)loopVideoClip;
-(void)setLoopVideoClip:(char)arg1 ;
-(char)clipMode;
-(char)disableStatusWindow;
-(void)setDisableStatusWindow:(char)arg1 ;
-(long long)fastForwardDvd;
-(long long)playDvd;
-(long long)pauseDvd;
-(long long)rewindDvd;
-(long long)stopDvd;
-(long long)stepDvd;
-(long long)go:(int)arg1 ;
-(long long)press:(int)arg1 ;
-(long long)openVIDEO_TS:(id)arg1 ;
-(long long)openDvdVideoFolder:(id)arg1 ;
-(long long)playPreviousChapter;
-(long long)playNextChapter;
-(long long)playBookmark:(long long)arg1 ;
-(long long)playNamedBookmark:(id)arg1 ;
-(long long)playVideoClip:(long long)arg1 ;
-(long long)playNamedVideoClip:(id)arg1 ;
-(long long)exitClipMode;
-(long long)obscureCursor;
-(long long)ejectDvd;
-(long long)elapsedTime;
-(void)setRemainingTime:(long long)arg1 ;
-(long long)remainingTime;
-(void)setAngle:(long long)arg1 ;
-(long long)angle;
-(void)setTitle:(long long)arg1 ;
-(long long)title;
-(NSString *)version;
-(long long)subtitle;
-(void)setSubtitle:(long long)arg1 ;
@end

