/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSUI/MMService.h>
#import <AOSUI/MMWebKitViewControllerDelegate.h>
#import <AOSUI/MMLinkTextFieldDelegate.h>

@class NSWindow, NSImageView, NSButton, MMLinkTextField, NSLayoutConstraint, NSTextField, NSProgressIndicator, NSProgress, MMWebKitViewController, NSString;

@interface MMMediaStreamService : MMService <MMWebKitViewControllerDelegate, MMLinkTextFieldDelegate> {

	NSWindow* _photoStreamOptionsSheet;
	NSImageView* _photoStreamOptionsIcon;
	NSButton* _icloudPhotosCheckbox;
	MMLinkTextField* _icloudPhotosMessage;
	NSLayoutConstraint* _icloudPhotosMessageLeftCheckboxConstraint;
	NSLayoutConstraint* _icloudPhotosMessageLeftIconConstraint;
	NSButton* _classicPhotoStreamCheckbox;
	NSTextField* _classicPhotoStreamMessage;
	NSButton* _sharedPhotoStreamCheckbox;
	NSTextField* _sharedPhotoStreamMessage;
	NSButton* _sharedPhotoStreamConfirmButton;
	NSImageView* _iCloudPhotosWarningIcon;
	NSTextField* _iCloudPhotosProgressMessage;
	NSProgressIndicator* _iCloudPhotosProgressIndicator;
	NSProgress* _iCloudPhotosProgress;
	NSTextField* _legacyPhotoOptionsTitle;
	MMWebKitViewController* _webKitViewController;
	char _hasCheckedQuota;
	char _hasCheckedRampedState;
	char _enabledForDisplay;
	NSString* _infoButtonURLString;

}

@property (retain) NSWindow * photoStreamOptionsSheet;                                          //@synthesize photoStreamOptionsSheet=_photoStreamOptionsSheet - In the implementation block
@property (retain) NSImageView * photoStreamOptionsIcon;                                        //@synthesize photoStreamOptionsIcon=_photoStreamOptionsIcon - In the implementation block
@property (retain) NSButton * icloudPhotosCheckbox;                                             //@synthesize icloudPhotosCheckbox=_icloudPhotosCheckbox - In the implementation block
@property (retain) MMLinkTextField * icloudPhotosMessage;                                       //@synthesize icloudPhotosMessage=_icloudPhotosMessage - In the implementation block
@property (retain) NSLayoutConstraint * icloudPhotosMessageLeftCheckboxConstraint;              //@synthesize icloudPhotosMessageLeftCheckboxConstraint=_icloudPhotosMessageLeftCheckboxConstraint - In the implementation block
@property (retain) NSLayoutConstraint * icloudPhotosMessageLeftIconConstraint;                  //@synthesize icloudPhotosMessageLeftIconConstraint=_icloudPhotosMessageLeftIconConstraint - In the implementation block
@property (retain) NSButton * classicPhotoStreamCheckbox;                                       //@synthesize classicPhotoStreamCheckbox=_classicPhotoStreamCheckbox - In the implementation block
@property (retain) NSTextField * classicPhotoStreamMessage;                                     //@synthesize classicPhotoStreamMessage=_classicPhotoStreamMessage - In the implementation block
@property (retain) NSButton * sharedPhotoStreamCheckbox;                                        //@synthesize sharedPhotoStreamCheckbox=_sharedPhotoStreamCheckbox - In the implementation block
@property (retain) NSTextField * sharedPhotoStreamMessage;                                      //@synthesize sharedPhotoStreamMessage=_sharedPhotoStreamMessage - In the implementation block
@property (retain) NSImageView * iCloudPhotosWarningIcon;                                       //@synthesize iCloudPhotosWarningIcon=_iCloudPhotosWarningIcon - In the implementation block
@property (retain) NSTextField * iCloudPhotosProgressMessage;                                   //@synthesize iCloudPhotosProgressMessage=_iCloudPhotosProgressMessage - In the implementation block
@property (retain) NSProgressIndicator * iCloudPhotosProgressIndicator;                         //@synthesize iCloudPhotosProgressIndicator=_iCloudPhotosProgressIndicator - In the implementation block
@property (retain) NSButton * sharedPhotoStreamConfirmButton;                                   //@synthesize sharedPhotoStreamConfirmButton=_sharedPhotoStreamConfirmButton - In the implementation block
@property (retain) NSTextField * legacyPhotoOptionsTitle;                                       //@synthesize legacyPhotoOptionsTitle=_legacyPhotoOptionsTitle - In the implementation block
@property (retain) NSProgress * iCloudPhotosProgress;                                           //@synthesize iCloudPhotosProgress=_iCloudPhotosProgress - In the implementation block
@property (retain) MMWebKitViewController * webKitViewController;                               //@synthesize webKitViewController=_webKitViewController - In the implementation block
@property (assign) char enabledForDisplay;                                                      //@synthesize enabledForDisplay=_enabledForDisplay - In the implementation block
@property (retain) NSString * infoButtonURLString;                                              //@synthesize infoButtonURLString=_infoButtonURLString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServiceID:(id)arg1 forAccount:(id)arg2 ;
-(char)_isEnabledForDisplay;
-(void)setEnabled:(char)arg1 creating:(char)arg2 withWindow:(id)arg3 ;
-(char)canEnable;
-(void)willSelect;
-(void)willGainFocus;
-(void)clickedOnLink:(id)arg1 ;
-(void)_serviceEnableChanged:(id)arg1 ;
-(void)_servicePropertiesChanged:(id)arg1 ;
-(char)_hasCompatibleApp;
-(char)enabledForDisplay;
-(char)_isPhotosAvailable;
-(char)_isInRampState;
-(void)setEnabledForDisplay:(char)arg1 ;
-(char)_willLibraryExceedQuota:(id)arg1 ;
-(void)showWillExceedQuotaSheet:(/*^block*/id)arg1 ;
-(void)setInfoButtonURLString:(NSString *)arg1 ;
-(id)_incompatibleBundleIdentifiers;
-(void)_updatePhotoStreamOptionsUI;
-(void)showStreamOptionsSheet:(id)arg1 ;
-(NSString *)infoButtonURLString;
-(char)_isSharedPhotoSteamEnabled;
-(char)_isClassicPhotoSteamEnabled;
-(char)_isiCloudStoreStreamEnabled;
-(NSButton *)classicPhotoStreamCheckbox;
-(NSButton *)sharedPhotoStreamCheckbox;
-(NSTextField *)legacyPhotoOptionsTitle;
-(void)setLegacyPhotoOptionsTitle:(NSTextField *)arg1 ;
-(NSButton *)icloudPhotosCheckbox;
-(void)setClassicPhotosEnabled:(char)arg1 includeMessage:(char)arg2 ;
-(NSImageView *)iCloudPhotosWarningIcon;
-(MMLinkTextField *)icloudPhotosMessage;
-(void)setiCloudPhotosEnabled:(char)arg1 includeMessage:(char)arg2 ;
-(id)rampedStateString;
-(NSLayoutConstraint *)icloudPhotosMessageLeftCheckboxConstraint;
-(NSLayoutConstraint *)icloudPhotosMessageLeftIconConstraint;
-(char)_isQuotaExceeded;
-(id)exceededQuotaString;
-(NSTextField *)iCloudPhotosProgressMessage;
-(NSProgressIndicator *)iCloudPhotosProgressIndicator;
-(void)setIcloudPhotosCheckbox:(NSButton *)arg1 ;
-(void)setIcloudPhotosMessage:(MMLinkTextField *)arg1 ;
-(void)setICloudPhotosWarningIcon:(NSImageView *)arg1 ;
-(void)setICloudPhotosProgressMessage:(NSTextField *)arg1 ;
-(void)setICloudPhotosProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)_loadResourcesIfNeeded;
-(NSTextField *)classicPhotoStreamMessage;
-(NSTextField *)sharedPhotoStreamMessage;
-(NSButton *)sharedPhotoStreamConfirmButton;
-(void)setProgressEnabled:(char)arg1 ;
-(NSImageView *)photoStreamOptionsIcon;
-(NSWindow *)photoStreamOptionsSheet;
-(NSProgress *)iCloudPhotosProgress;
-(void)setICloudPhotosProgress:(NSProgress *)arg1 ;
-(void)endModalDialog:(id)arg1 ;
-(void)showStorageWebView:(/*^block*/id)arg1 ;
-(void)setiCloudPhotosEnabled;
-(id)_simulateMediaServiceLibrarySizeExceeded;
-(id)_simulateMediaServiceExceedsQuota;
-(id)_simulateMediaServiceIsRamped;
-(void)showManageWebView;
-(void)_closeWebViewWindow;
-(void)mmWebKitViewControllerDidCancel:(id)arg1 ;
-(void)mmWebKitViewControllerDidSucceed:(id)arg1 ;
-(void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2 ;
-(void)mmWebKitViewControllerDidFinishLoading:(id)arg1 ;
-(void)mmWebKitViewControllerDidDismiss:(id)arg1 ;
-(char)_hasUnimportedPhotos;
-(void)iCloudPhotosSelected:(id)arg1 ;
-(void)MyPhotoStreamSelected:(id)arg1 ;
-(void)SharedStreamsSelected:(id)arg1 ;
-(char)_isiCloudStoredAvailable;
-(void)setPhotoStreamOptionsSheet:(NSWindow *)arg1 ;
-(void)setPhotoStreamOptionsIcon:(NSImageView *)arg1 ;
-(void)setIcloudPhotosMessageLeftCheckboxConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setIcloudPhotosMessageLeftIconConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setClassicPhotoStreamCheckbox:(NSButton *)arg1 ;
-(void)setClassicPhotoStreamMessage:(NSTextField *)arg1 ;
-(void)setSharedPhotoStreamCheckbox:(NSButton *)arg1 ;
-(void)setSharedPhotoStreamMessage:(NSTextField *)arg1 ;
-(void)setSharedPhotoStreamConfirmButton:(NSButton *)arg1 ;
-(MMWebKitViewController *)webKitViewController;
-(void)setWebKitViewController:(MMWebKitViewController *)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)icon;
-(void)showMoreInfo:(id)arg1 ;
-(void)_updateUI;
@end
