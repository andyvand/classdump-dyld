/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAlert, NSButton, NSSegmentedControl, NSBox, NSSavePanelAlertStyleContentView, NSArray, NSURL, NSView, NSTextField, FITagEditorView, NSString;

@interface NSSavePanelAuxiliary : NSObject {

	SEL modalDelegateDidEndSelector;
	void* contextInfo;
	double _distanceBetweenExtensionCheckAndNewFolderOrDocumentButton;
	id modalDelegate;
	NSAlert* currentAlert;
	id delegate;
	unsigned openProgressIndicatorScheduled : 1;
	unsigned _runningAsSheet : 1;
	unsigned _useAlertStyle : 1;
	unsigned _retained : 1;
	unsigned _showNewDocumentButton : 1;
	unsigned _showRevertOriginalDocumentButton : 1;
	unsigned _revertOriginalDocumentChanges : 1;
	unsigned _hideExtension : 1;
	unsigned _showTagField : 1;
	unsigned _clientWillSetTags : 1;
	unsigned _clientSetADirectory : 1;
	unsigned _runningAsAService : 1;
	unsigned _showOptionsButton : 1;
	unsigned _canSendSynchronousMessagesToRemote : 1;
	unsigned _animatingSetFrame : 1;
	unsigned _dismissingPanel : 1;
	unsigned _reserved : 16;
	/*^block*/id _completionHandler;
	NSButton* _dontSaveButton;
	NSButton* _newDocumentButton;
	NSSegmentedControl* _viewSwitcher;
	NSButton* _optionsButton;
	NSButton* _revertOriginalDocumentButton;
	NSBox* _appCentricAccessoryViewSeparatorBox;
	NSSavePanelAlertStyleContentView* _alertStyleContentView;
	double _alertStyleMinWidth;
	NSArray* _enabledFileTypes;
	NSArray* _fauxFilePackageTypes;
	NSURL* _overwritingAlertSuppressionURL;
	NSView* _tagFieldContainer;
	NSTextField* _tagFieldLabel;
	FITagEditorView* _tagField;
	NSArray* _tags;
	NSArray* _initialTags;
	NSString* _lastNameFieldText;
	unsigned long long _sandboxPermissions;
	NSArray* _sandboxExtensions;
	NSArray* _beginWithFileNames;
	int _seamlessOpening_ClientPID;

}
@end

