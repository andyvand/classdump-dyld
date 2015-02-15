/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSPreferencesModule.h>

@class NSPopUpButton, NSButton, NSBox, NSTabView, CameraPreferencesView, NSExtendedBox, NSTextField, VolumeIndicator;

@interface Prefs_Camera : NSPreferencesModule {

	NSPopUpButton* cameraPulldownMenu;
	NSPopUpButton* micPulldownMenu;
	NSPopUpButton* soundOutputDevicePulldownMenu;
	NSButton* pairHeadsetButton;
	NSBox* cameraBoxView;
	NSTabView* cameraTabView;
	CameraPreferencesView* cameraView;
	NSExtendedBox* noCameraBox;
	NSTextField* noCameraTextField;
	VolumeIndicator* volumeIndicator;
	NSPopUpButton* bandwidthPulldownMenu;
	NSButton* launchOnCameraCheckbox;
	char stayingOnVideoPrefs;
	char videoPrefsWindowWasClosed;
	char didCancel;
	char autoselectBTMic;
	char autoselectBTOutput;
	char _closeRegistered;

}
-(void)setStayingOnVideoPrefs:(char)arg1 ;
-(char)videoPrefsWindowWasClosed;
-(void)setVideoPrefsWindowWasClosed:(char)arg1 ;
-(void)_unregisterForCloseNotification;
-(void)_registerForCloseNotification;
-(void)changeLaunchOnCamera:(id)arg1 ;
-(void)_setBandwidth:(unsigned long long)arg1 ;
-(void)_updateUIElement:(int)arg1 animate:(char)arg2 hardwareChanged:(char)arg3 ;
-(void)_prefsChangedNotification:(id)arg1 ;
-(void)_startStopAV;
-(id)_firstBloothSoundDeviceInList:(id)arg1 ;
-(long long)_updateMicList;
-(long long)_updateSoundOutputDeviceList;
-(long long)_updateCameraList;
-(void)__prefsChangedNotification:(id)arg1 ;
-(long long)_updateSoundDeviceList:(id)arg1 deviceList:(id)arg2 currentDevice:(id)arg3 ;
-(id)_noneStr;
-(void)_cameraPreferencesViewSizeChanged:(id)arg1 ;
-(void)changeBandwidth:(id)arg1 ;
-(void)changeMicrophone:(id)arg1 ;
-(void)changeSoundOutputDevice:(id)arg1 ;
-(void)changeCamera:(id)arg1 ;
-(void)setDidCancel:(char)arg1 ;
-(void)dealloc;
-(void)showHelp:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(char)isResizable;
-(void)saveChanges;
-(void)moduleWillBeRemoved;
-(id)viewForPreferenceNamed:(id)arg1 ;
-(void)willBeDisplayed;
-(void)moduleWasInstalled;
-(id)imageForPreferenceNamed:(id)arg1 ;
@end
