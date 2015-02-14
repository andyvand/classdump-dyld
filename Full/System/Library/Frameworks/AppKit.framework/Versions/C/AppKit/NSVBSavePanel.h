/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSPanel.h>

@protocol NSOpenSavePanelDelegate;
@class NSURL, NSArray;

@interface NSVBSavePanel : NSPanel {

	id<NSOpenSavePanelDelegate> _openSaveDelegate;
	/*^block*/id _completionHandler;
	CFRunLoopRef _beginning;
	NSURL* _finalURL;
	NSArray* _finalURLs;
	unsigned _appCentric : 1;
	unsigned _observingBridge : 1;
	unsigned _expectingInvalidation : 1;
	unsigned _consumeSandboxExtensionsDone : 1;
	unsigned _runningAsSheet : 1;
	unsigned _animatingSetFrame : 1;

}
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)savePanel;
+(void)_warmUp;
+(Class)_remoteViewClass;
+(Class)_sharedListenerClass;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)URL;
-(void)setFrame:(CGRect)arg1 display:(char)arg2 ;
-(id)directoryURL;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTitle:(id)arg1 ;
-(id)_dontSaveButtonTitle;
-(id)title;
-(id)delegate;
-(long long)runModal;
-(void)beginSheetModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAccessoryView:(id)arg1 ;
-(id)accessoryView;
-(void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(id)filename;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)validateVisibleColumns;
-(id)initWithContentRect:(CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(char)arg4 ;
-(void)cancel:(id)arg1 ;
-(void)ok:(id)arg1 ;
-(void)setDirectory:(id)arg1 ;
-(void)setRequiredFileType:(id)arg1 ;
-(long long)runModalForTypes:(id)arg1 ;
-(id)tagNames;
-(void)setAllowedFileTypes:(id)arg1 ;
-(void)setTreatsFilePackagesAsDirectories:(char)arg1 ;
-(void)setNameFieldLabel:(id)arg1 ;
-(void)setCanSelectHiddenExtension:(char)arg1 ;
-(void)setShowsTagField:(char)arg1 ;
-(void)setTagNames:(id)arg1 ;
-(void)_setIsExpanded:(char)arg1 andStoreState:(char)arg2 ;
-(void)_setIsExpanded:(char)arg1 ;
-(void)_setAlertMessage:(id)arg1 ;
-(void)_setAlertInformativeMessage:(id)arg1 ;
-(void)_setUseAlertStyle:(char)arg1 ;
-(void)_setDontSaveButtonTitle:(id)arg1 ;
-(void)_setOverwritingAlertSuppressionURL:(id)arg1 ;
-(void)_setShowsRevertOriginalDocumentButton:(char)arg1 ;
-(void)_setShouldRevertOriginalDocument:(char)arg1 ;
-(void)setDirectoryURL:(id)arg1 ;
-(id)requiredFileType;
-(char)allowsOtherFileTypes;
-(void)setNameFieldStringValue:(id)arg1 ;
-(char)isExtensionHidden;
-(char)showsTagField;
-(char)_showsRevertOriginalDocumentButton;
-(char)_shouldRevertOriginalDocument;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(void)setCanChooseFiles:(char)arg1 ;
-(void)setCanChooseDirectories:(char)arg1 ;
-(void)setCanCreateDirectories:(char)arg1 ;
-(void)setExtensionHidden:(char)arg1 ;
-(long long)runModalForDirectory:(id)arg1 file:(id)arg2 ;
-(void)setURL:(id)arg1 ;
-(void)setCanResolveUbiquitousConflicts:(char)arg1 ;
-(id)URLs;
-(void)_setEnabledFileTypes:(id)arg1 ;
-(void)beginWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)filenames;
-(id)panel;
-(char)canChooseFiles;
-(char)treatsFilePackagesAsDirectories;
-(char)showsHiddenFiles;
-(char)resolvesAliases;
-(void)setResolvesAliases:(char)arg1 ;
-(void)setShowsHiddenFiles:(char)arg1 ;
-(id)directory;
-(void)_resizeKeepingPanelOnScreen:(CGRect)arg1 expand:(char)arg2 animate:(char)arg3 ;
-(char)isExpanded;
-(char)canChooseDirectories;
-(char)canResolveUbiquitousConflicts;
-(char)canDownloadUbiquitousContents;
-(void)setCanDownloadUbiquitousContents:(char)arg1 ;
-(char)_useAlertStyle;
-(char)_showNewDocumentButton;
-(id)_overwritingAlertSuppressionURL;
-(id)_tags;
-(void)_setShowsTagField:(char)arg1 ;
-(char)_showsTagField;
-(void)_setTags:(id)arg1 ;
-(double)_startRectForSheetHeightOffset;
-(void)setAllowsOtherFileTypes:(char)arg1 ;
-(char)_shouldShowOptionsButton;
-(id)nameFieldStringValue;
-(id)allowedFileTypes;
-(char)_accessoryViewDisclosed;
-(void)_configureForFilename:(id)arg1 ;
-(long long)runModalForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 ;
-(void)beginSheetForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 modalForWindow:(id)arg4 modalDelegate:(id)arg5 didEndSelector:(SEL)arg6 contextInfo:(void*)arg7 ;
-(char)canCreateDirectories;
-(char)_shouldSetTagsForClient;
-(void)_orderRemoteWindow:(long long)arg1 sender:(id)arg2 ;
-(void)_hideWindowForTimeMachineMode:(char)arg1 ;
-(void)_setShouldShowOptionsButton:(char)arg1 ;
-(void)_setAccessoryViewDisclosed:(char)arg1 ;
-(char)canSelectHiddenExtension;
-(id)nameFieldLabel;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(void)beginSheetForDirectory:(id)arg1 file:(id)arg2 modalForWindow:(id)arg3 modalDelegate:(id)arg4 didEndSelector:(SEL)arg5 contextInfo:(void*)arg6 ;
-(void)_setOkButtonDisabled:(char)arg1 ;
-(char)_okButtonDisabled;
-(void)_setShowNewDocumentButton:(char)arg1 ;
-(id)_alertMessage;
-(id)_alertInformativeMessage;
-(void*)_sheetEffect;
-(id)bridge;
-(void)_setBool:(char)arg1 forKey:(id)arg2 ;
-(char)_boolForKey:(id)arg1 ;
-(void)_setArray:(id)arg1 forKey:(id)arg2 ;
-(id)_stringForKey:(id)arg1 ;
-(void)_setString:(id)arg1 forKey:(id)arg2 ;
-(id)_arrayForKey:(id)arg1 ;
-(void)_setDict:(id)arg1 forKey:(id)arg2 ;
-(id)urlForKey:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(double)_floatForKey:(id)arg1 ;
-(id)_dictForKey:(id)arg1 ;
-(void)_setSet:(id)arg1 forKey:(id)arg2 ;
-(id)_setForKey:(id)arg1 ;
-(void)configureContentView:(id)arg1 ;
-(void)_addObservers:(char)arg1 onBridge:(id)arg2 ;
-(void)_setDefaultBridgeValues;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)remoteView;
-(void)_invalidateRemoteView;
-(void)_consumeSandboxExtensions;
-(void)refreshDelegateOptions;
-(void)completeWithReturnCode:(long long)arg1 url:(id)arg2 urls:(id)arg3 ;
-(void)induceEventLoopIterationSoon;
-(void)didEndPanelWithReturnCode:(long long)arg1 ;
-(void)completeModal:(long long)arg1 ;
-(void)completeSheet:(long long)arg1 ;
-(void)completeModeless:(long long)arg1 ;
-(void)observeMostRecentCompletion:(id)arg1 ;
-(void)observeAsynchronousDelegateMethodCallKeyPath:(id)arg1 paramDict:(id)arg2 ;
-(void)observeAsynchronousIBActionKeyPath:(id)arg1 paramDict:(id)arg2 ;
-(void)observeAsynchronousRemoteMethodCallKeyPath:(id)arg1 paramDict:(id)arg2 ;
-(void)advanceToRunPhaseIfNeeded;
-(void)_resetState;
-(void)commonPrep:(/*^block*/id)arg1 runningAsSheet:(char)arg2 ;
-(id)kvoKeys;
-(id)valueforUndefinedKey:(id)arg1 ;
-(void)viewWillInvalidate:(id)arg1 ;
-(void)viewDidInvalidate:(id)arg1 ;
-(id)_supportedDelegateMethods;
-(void)_setSupportedDelegateMethods:(id)arg1 ;
-(void)viewDidAdvanceToRunPhase:(id)arg1 ;
@end

