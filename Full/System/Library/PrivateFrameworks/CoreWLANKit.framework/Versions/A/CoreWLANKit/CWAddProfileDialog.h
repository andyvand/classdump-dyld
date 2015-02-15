/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLANKit/CoreWLANKit-Structs.h>
#import <AppKit/NSWindowController.h>
#import <CoreWLANKit/NSCollectionViewDelegate.h>
#import <CoreWLANKit/NSTextFieldDelegate.h>

@class CWInterface, NSData, SFCertificateView, NSTextField, NSButton, NSView, NSPopUpButton, NSSecureTextField, NSScrollView, NSProgressIndicator, NSImageView, NSString;

@interface CWAddProfileDialog : NSWindowController <NSCollectionViewDelegate, NSTextFieldDelegate> {

	CWInterface* _interface;
	NSData* _ssidData;
	unsigned long long _securityType;
	id _delegate;
	char _showingOpen;
	char _showingPassword;
	char _showingPSK;
	char _showingEnterprise;
	char _showingCertificateSelector;
	char _showingCertificate;
	char _showingManual;
	char _optionKey;
	char _showingAutomaticEAP;
	char _showingEAPTLS;
	char _certificatesAvailable;
	SFCertificateView* certificateView;
	NSTextField* windowTitleLabel;
	NSTextField* windowDescriptionLabel;
	NSButton* okButton;
	NSButton* cancelButton;
	NSView* securityTypeView;
	NSPopUpButton* securityTypePopupButton;
	NSView* networkNameView;
	NSTextField* networkNameField;
	NSView* usernameView;
	NSTextField* usernameField;
	NSView* passwordView;
	NSSecureTextField* passwordField;
	NSTextField* revealedPasswordField;
	NSView* pskView;
	NSTextField* revealedPSKField;
	NSSecureTextField* pskField;
	NSView* certificateSelectorView;
	NSPopUpButton* certificatePopUpButton;
	NSButton* certificateDetailButton;
	NSScrollView* certificateDetailView;
	NSTextField* statusMessageLabel;
	NSButton* warningButton;
	NSProgressIndicator* progressIndicator;
	NSView* eapModeView;
	NSPopUpButton* eapModePopUpButton;
	NSView* showPasswordView;
	NSButton* showPasswordCheckboxButton;
	NSButton* chooseNetworkButton;
	NSButton* helpButton;
	NSImageView* imageView;

}

@property (retain) CWInterface * interface;                         //@synthesize interface=_interface - In the implementation block
@property (copy) NSData * ssidData;                                 //@synthesize ssidData=_ssidData - In the implementation block
@property (assign) unsigned long long securityType;                 //@synthesize securityType=_securityType - In the implementation block
@property (assign) id delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addProfileDialogWithInterface:(id)arg1 ssid:(id)arg2 securityType:(unsigned long long)arg3 ;
-(NSData *)ssidData;
-(void)setSsidData:(NSData *)arg1 ;
-(unsigned long long)securityType;
-(void)setSecurityType:(unsigned long long)arg1 ;
-(void)onOKButton:(id)arg1 ;
-(void)onHelpButton:(id)arg1 ;
-(void)onCancelButton:(id)arg1 ;
-(void)populateSecurityTypes;
-(void)removePasswordView:(CGRect*)arg1 ;
-(void)expandFrameForManualConnectView:(CGRect*)arg1 ;
-(void)insertManualConnectView;
-(char)validateEntries;
-(void)setSecurityTypeViewForTag:(long long)arg1 ;
-(void)resetSecurityEntries;
-(void)expandFrameForPasswordView:(CGRect*)arg1 ;
-(void)insertPasswordView;
-(void)removeManualConnectView:(CGRect*)arg1 ;
-(void)onSecurityTypePopupButton:(id)arg1 ;
-(char)validateSecurityTypeForTag:(long long)arg1 ;
-(void)populateCertificates;
-(void)removeCertificateDetailView:(CGRect*)arg1 ;
-(void)onCertificatePopUpButton:(id)arg1 ;
-(void)populateEAPModes;
-(char)eapCertificatesAvailable;
-(void)expandFrameForCertificateDetailView:(CGRect*)arg1 ;
-(void)insertCertificateDetailView;
-(void)onCertificateDetailButton:(id)arg1 ;
-(void)removePSKView:(CGRect*)arg1 ;
-(void)removeOpenView:(CGRect*)arg1 ;
-(void)removeEnterpriseViews:(CGRect*)arg1 ;
-(void)expandFrameForPSKView:(CGRect*)arg1 ;
-(void)insertPSKView;
-(void)expandFrameForEnterpriseViews:(CGRect*)arg1 ;
-(void)insertEnterpriseViews;
-(void)expandFrameForOpenView:(CGRect*)arg1 ;
-(void)insertOpenView;
-(void)onShowPasswordCheckboxButton:(id)arg1 ;
-(void)onEAPModePopUpButton:(id)arg1 ;
-(void)populateSecurityClasses;
-(id)initWithInterface:(id)arg1 ssid:(id)arg2 securityType:(unsigned long long)arg3 ;
-(long long)securityTagForSecurityType:(unsigned long long)arg1 ;
-(void)onConnectAutomaticallyCheckboxButton:(id)arg1 ;
-(void)onHiddenNetworkCheckboxButton:(id)arg1 ;
-(void)onChooseNetworkButton:(id)arg1 ;
-(CWInterface *)interface;
-(void)setInterface:(CWInterface *)arg1 ;
-(id)localizedStringForKey:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)close;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
-(void)windowDidLoad;
@end

