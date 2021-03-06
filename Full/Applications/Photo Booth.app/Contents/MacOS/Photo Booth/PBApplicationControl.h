/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:45:07 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Photo Booth.app/Contents/MacOS/Photo Booth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photo Booth/NSOpenSavePanelDelegate.h>
#import <Photo Booth/NSFileManagerDelegate.h>
#import <Photo Booth/PBPowerSaverManagerDelegate.h>

@class PBImagePickerController, PBPhotoController, PBAnimationController, PBQTMovieController, PBView, PBTrayView, PBTabViewWithGradientBackground, PBRecordingRadioButton, PBShutterButton, NSButton, NSArray, SOAccountStatusHelper, NSXPCConnection, BuddyPictureHelper, NSURL, PBLibraryChooserController, PBMigrationController, PBPowerSaverManager, NSMenuItem, NSString;

@interface PBApplicationControl : NSObject <NSOpenSavePanelDelegate, NSFileManagerDelegate, PBPowerSaverManagerDelegate> {

	PBImagePickerController* ibImagePickerController;
	PBPhotoController* ibPhotoController;
	PBAnimationController* ibAnimationController;
	PBQTMovieController* ibQTMovieController;
	PBView* ibMainView;
	PBTrayView* ibTrayView;
	PBTabViewWithGradientBackground* ibControllerTabView;
	PBRecordingRadioButton* ibShootingOptionRadioButton;
	PBRecordingRadioButton* ibShootingOptionRadioButtonInStillMode;
	PBShutterButton* ibShutterButton;
	PBShutterButton* ibStillShutterButton;
	NSButton* ibStopRecordingButton;
	id _currentController;
	char _slowActivation;
	char _allowViewSwitchingViaMenu;
	int _allowViewSwitchingViaMenuDisableCount;
	char _videoWasRunningBeforeApplicationDeactivation;
	char _firstFrameReceivedBeforeApplicationDeactivation;
	char _alreadySavedVideoState;
	char _isMidMacBookPro;
	NSArray* _libraryTags;
	SOAccountStatusHelper* _accountStatusHelper;
	NSXPCConnection* _assistantConnection;
	BuddyPictureHelper* _buddyPictureHelper;
	NSURL* _sandboxURL;
	PBLibraryChooserController* _libraryChooser;
	PBMigrationController* _migrationController;
	PBPowerSaverManager* _powerSaverManager;
	NSMenuItem* _thermalNominal;
	NSMenuItem* _thermalHigh;
	NSMenuItem* _thermalTrapping;
	char _needsJpegEncoder;

}

@property (readonly) SOAccountStatusHelper * accountStatusHelper;              //@synthesize accountStatusHelper=_accountStatusHelper - In the implementation block
@property (readonly) BuddyPictureHelper * buddyPictureHelper;                  //@synthesize buddyPictureHelper=_buddyPictureHelper - In the implementation block
@property (readonly) char needsJpegEncoder;                                    //@synthesize needsJpegEncoder=_needsJpegEncoder - In the implementation block
@property (retain) NSArray * libraryTags;                                      //@synthesize libraryTags=_libraryTags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sendPBEvent:(id)arg1 ;
-(void)resetEffect:(id)arg1 ;
-(id)trayView;
-(void)recordingController:(id)arg1 recordedImageWithOriginal:(id)arg2 ;
-(id)qtMovieControllerFilenameForMovie:(id)arg1 ;
-(id)animationController:(id)arg1 setImageArrays:(id)arg2 ;
-(void)switchRecordingOption:(id)arg1 ;
-(void)showTray:(id)arg1 ;
-(char)isDisplayingLiveVideo;
-(void)saveTALState;
-(void)takeSnapshot:(id)arg1 ;
-(char)videoIsInitialized;
-(char)viewSwitchingAllowed;
-(char)isAnimatingToFromFullScreen;
-(void)powerSaverStateDidChange;
-(void)thermalPressureDidChange;
-(char)isThermalPressureHigh;
-(char)isThermalPressureTrapping;
-(void)enableFlashScreenOnOff:(id)arg1 ;
-(void)qtMovieController:(id)arg1 setMovieURL:(id)arg2 ;
-(char)needsJpegEncoder;
-(BuddyPictureHelper *)buddyPictureHelper;
-(id)_getBookmarkedURL;
-(id)_promptToSelectLibrary;
-(void)setLibraryTags:(NSArray *)arg1 ;
-(void)_saveBookmarkWithURL:(id)arg1 ;
-(void)_finishLaunching;
-(id)_promptToLibraryCreationError;
-(void)_loadTrayView;
-(id)_getSavedPath;
-(int)_typeForModelName:(id)arg1 ;
-(char)_needsJpegWithModelType:(int)arg1 majorVersion:(long long)arg2 ;
-(void)hideTray:(id)arg1 ;
-(void)toggleFrameRateMonitor:(id)arg1 ;
-(void)toggleFullPreviewGPUPreprocessing:(id)arg1 ;
-(void)toggleMiniPreviewGPUPreprocessing:(id)arg1 ;
-(void)toggleCVOpenGLTextureCache:(id)arg1 ;
-(void)toggleBypassQCForNoFX:(id)arg1 ;
-(void)setThermal:(id)arg1 ;
-(void)_handlePictureDevelopedNotification:(id)arg1 ;
-(void)_handleFUS:(id)arg1 ;
-(void)workspaceDidBecomeActive:(id)arg1 ;
-(void)workspaceDidResignActive:(id)arg1 ;
-(void)enableViewSwitchingViaMenu:(id)arg1 ;
-(void)disableViewSwitchingViaMenu:(id)arg1 ;
-(void)selectTabForIdentifier:(id)arg1 ;
-(void)_prepareScreenshot;
-(void)setupDebugMenu;
-(char)isRecordingVideo;
-(void)_displayWriteError;
-(void)setRecordingOption:(long long)arg1 ;
-(void)_updateStillShutterButton;
-(char)senderComesFromTrayContextualMenu:(id)arg1 ;
-(void)exportOriginalPhoto:(id)arg1 ;
-(void)mirrorImageButtonClicked:(id)arg1 ;
-(void)startSlideshow:(id)arg1 ;
-(void)showPicture:(id)arg1 ;
-(void)showEffects:(id)arg1 ;
-(void)showLastEffect:(id)arg1 ;
-(void)nextEffects:(id)arg1 ;
-(void)previousEffects:(id)arg1 ;
-(void)_reallyDeleteAll;
-(void)deleteAllSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)_handleDeveloped;
-(void)_disableStopRecordingButton;
-(void)_enableStopRecordingButton;
-(void)saveCurrentVideoAndEffectsState;
-(void)pauseVideoAndEffects;
-(void)restoreVideoAndEffectsState;
-(void)_handleApplicationDidBecomeActive:(id)arg1 ;
-(void)prepareToPauseVideoAfterTimeout;
-(void)frameRateShouldBecomeVisible:(char)arg1 ;
-(void)updateFrameRate:(double)arg1 ;
-(id)imagePickerController;
-(id)controllerTabView;
-(void)useTimerOnOff:(id)arg1 ;
-(void)mailSmallPhotoOnOff:(id)arg1 ;
-(void)switchToVideo:(id)arg1 ;
-(void)showAllFrames:(id)arg1 ;
-(void)showAboutBox:(id)arg1 ;
-(id)currentAsset;
-(NSArray *)libraryTags;
-(SOAccountStatusHelper *)accountStatusHelper;
-(void)_handleControllerNotificationOnMainThread:(id)arg1 ;
-(void)_handleControllerNotification:(id)arg1 ;
-(void)deleteAll:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)applicationDidHide:(id)arg1 ;
-(void)applicationWillUnhide:(id)arg1 ;
-(void)applicationWillBecomeActive:(id)arg1 ;
-(void)applicationDidResignActive:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(id)mainView;
-(void)revealInFinder:(id)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)mainWindow;
-(char)application:(id)arg1 openFile:(id)arg2 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(id)undoManager;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)awakeFromNib;
-(void)printDocument:(id)arg1 ;
-(void)windowDidMiniaturize:(id)arg1 ;
-(void)windowDidChangeOcclusionState:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(id)panel:(id)arg1 userEnteredFilename:(id)arg2 confirmed:(char)arg3 ;
-(void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2 ;
-(char)applicationShouldTerminateAfterLastWindowClosed:(id)arg1 ;
-(void)export:(id)arg1 ;
@end

