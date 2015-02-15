/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityInterface/SecurityInterface-Structs.h>
@class SFCertificateData, NSImageCell, NSTextFieldCell, NSButton, NSView, NSPopUpButton, NSMutableArray, NSImage, NSArray;

@interface SFCertificateView_ivars : NSObject {

	SFCertificateData* _certData;
	NSImageCell* _certImage;
	CGRect _certImageRect;
	NSTextFieldCell* _titleText;
	CGRect _titleTextRect;
	NSTextFieldCell* _issuerText;
	CGRect _issuerTextRect;
	NSTextFieldCell* _dateText;
	CGRect _dateTextRect;
	NSTextFieldCell* _statusText;
	CGRect _statusTextRect;
	NSButton* _detailsButton;
	CGRect _detailsButtonRect;
	NSTextFieldCell* _detailsLabel;
	CGRect _detailsLabelRect;
	NSView* _detailsContainer;
	CGRect _detailsContainerRect;
	NSTextFieldCell* _popupLabel;
	CGRect _popupLabelRect;
	NSTextFieldCell* _popupText;
	CGRect _popupTextRect;
	NSPopUpButton* _popupButton;
	CGRect _popupButtonRect;
	NSButton* _helpButton;
	CGRect _helpButtonRect;
	NSButton* _disclosureButton;
	CGRect _disclosureButtonRect;
	NSTextFieldCell* _disclosureLabel;
	CGRect _disclosureLabelRect;
	NSView* _policyContainer;
	CGRect _policyContainerRect;
	NSMutableArray* _policyLabels;
	NSMutableArray* _policyValues;
	NSMutableArray* _policyPopUps;
	CGRect* _plrects;
	CGRect* _pvrects;
	CGRect* _pprects;
	CGRect _dividerRect;
	int _extDividerIndex;
	int _minBoundsHeight;
	int _minVisibleHeight;
	char _trustNotSet;
	char _uniformTrust;
	char _editableTrust;
	char _policiesDisplayed;
	char _policiesDisclosed;
	char _detailsDisplayed;
	char _detailsDisclosed;
	char _certPathDisplayed;
	char _certPathDisclosed;
	NSMutableArray* _labels;
	NSMutableArray* _fields;
	CGRect* _lrects;
	CGRect* _frects;
	NSImage* _dragImage;
	NSArray* _policies;
	SecTrustRef _trust;
	char _rebuildTrust;
	unsigned _domain;

}
-(void)dealloc;
@end
