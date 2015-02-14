/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SecurityInterface/SecurityInterface-Structs.h>
@class SFCertificateView, SFCertificateGroupView, NSWindow, NSButton, NSTableView, NSSplitView, NSArray, NSMutableArray, NSString;

@interface SFCertificatePanel_ivars : NSObject {

	SFCertificateView* _certView;
	SFCertificateGroupView* _certGroupView;
	NSWindow* _panel;
	NSButton* _defaultButton;
	NSButton* _alternateButton;
	NSButton* _helpButton;
	NSTableView* _certTable;
	NSSplitView* _splitView;
	NSWindow* _parentWindowForSheet;
	SEL _clientDidEndSelector;
	id _clientDelegate;
	void* _clientContextInfo;
	SecTrustRef _trust;
	unsigned _evalResult;
	NSArray* _policies;
	NSMutableArray* _certificates;
	NSMutableArray* _certDataArray;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	NSString* _helpAnchor;
	char _showsHelp;
	char _runAsSheet;
	char _noDefaultButton;
	float _splitHeight;
	float _autosizedWindowHeight;

}
-(void)dealloc;
@end

