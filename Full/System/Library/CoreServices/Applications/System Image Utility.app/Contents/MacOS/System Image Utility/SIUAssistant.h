/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/System Image Utility.app/Contents/MacOS/System Image Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <System Image Utility/System Image Utility-Structs.h>
#import <System Image Utility/NSTabViewDelegate.h>
#import <System Image Utility/NSTableViewDataSource.h>
#import <System Image Utility/NSTextFieldDelegate.h>
#import <System Image Utility/SIUWorkflowControllerDelegate.h>

@class NSObjectController, NSView, NSTabView, NSButton, NSMatrix, NSTextField, NSImageView, NSBox, SFPasswordAssistantInspectorController, SFPasswordAssistantButton, UPPImageView, NSProgressIndicator, NSTableView, SourcesPopupButton, NSArray, NSString, SIUWorkflowController, NSImage, NSMutableArray, UserPicturePickerController;

@interface SIUAssistant : NSObject <NSTabViewDelegate, NSTableViewDataSource, NSTextFieldDelegate, SIUWorkflowControllerDelegate> {

	NSObjectController* uiController;
	NSView* _detailView;
	NSTabView* tabView;
	NSButton* backButton;
	NSButton* continueButton;
	NSMatrix* imageType;
	NSTextField* imageName;
	NSTextField* imageDescription;
	NSButton* loadBalanceButton;
	NSImageView* mNetInstallIcon;
	NSTextField* mNetInstallTitle;
	NSTextField* mNetInstallDescription;
	NSTextField* mNetInstallNoInstallerText;
	NSImageView* mNetRestoreIcon;
	NSTextField* mNetRestoreTitle;
	NSTextField* mNetRestoreDescription;
	NSTextField* mNetRestoreNoRecoveryText;
	NSBox* createUserBox;
	NSTextField* userName;
	NSTextField* shortName;
	NSTextField* password;
	NSTextField* verifyPassword;
	SFPasswordAssistantInspectorController* _passwordAsst;
	SFPasswordAssistantButton* _passwordButton;
	UPPImageView* mImageWell;
	NSProgressIndicator* creationProgress;
	NSTableView* statusTableView;
	NSTextField* createTitleText;
	SourcesPopupButton* mSourcesPopup;
	NSImageView* mSourceIcon;
	NSArray* _topLevelObjects;
	NSString* filePath;
	char isFinished;
	char _isInstallMedia;
	char _createUserAccount;
	SIUWorkflowController* _workflowController;
	NSImage* _completeImage;
	NSImage* _failedImage;
	NSImage* _runningImage;
	long long _currentIndex;
	NSMutableArray* _progressArray;
	UserPicturePickerController* _uppController;

}

@property (nonatomic,retain) NSImage * completeImage;                                  //@synthesize completeImage=_completeImage - In the implementation block
@property (nonatomic,retain) NSImage * failedImage;                                    //@synthesize failedImage=_failedImage - In the implementation block
@property (nonatomic,retain) NSImage * runningImage;                                   //@synthesize runningImage=_runningImage - In the implementation block
@property (nonatomic,retain) NSMutableArray * progressArray;                           //@synthesize progressArray=_progressArray - In the implementation block
@property (nonatomic,retain) SIUWorkflowController * workflowController;               //@synthesize workflowController=_workflowController - In the implementation block
@property (nonatomic,retain) UserPicturePickerController * uppController;              //@synthesize uppController=_uppController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)workflowWillRun;
-(void)workflowFailedWithMessage:(id)arg1 ;
-(id)assistantView;
-(void)licenseAccepted:(id)arg1 ;
-(void)setUppController:(UserPicturePickerController *)arg1 ;
-(void)setCompleteImage:(NSImage *)arg1 ;
-(void)setFailedImage:(NSImage *)arg1 ;
-(void)setRunningImage:(NSImage *)arg1 ;
-(void)setProgressArray:(NSMutableArray *)arg1 ;
-(void)sourcesChanged:(id)arg1 ;
-(void)sourceMenuChanged:(id)arg1 ;
-(void)udpateProgressIndicator:(double)arg1 forceIndeterminate:(char)arg2 ;
-(id)netBootSharePointPaths;
-(void)displayLicenseSheet:(id)arg1 ;
-(void)closePasswordAssistant;
-(void)resetUIUponCompletion;
-(void)verifyQuit;
-(void)errorSheetWithTitle:(id)arg1 message:(id)arg2 ;
-(UserPicturePickerController *)uppController;
-(void)pickUserPicture:(id)arg1 ;
-(void)setNetInstallEnabled:(char)arg1 ;
-(void)setNetRestoreEnabled:(char)arg1 ;
-(void)updateUIWithDict:(id)arg1 ;
-(void)changedType:(id)arg1 ;
-(id)lastSavePath;
-(void)createImage;
-(void)prepareProgressUI;
-(id)defaultLanguageID;
-(NSImage *)completeImage;
-(NSImage *)failedImage;
-(NSImage *)runningImage;
-(NSMutableArray *)progressArray;
-(id)entryForPhase:(id)arg1 displayKey:(id)arg2 ;
-(void)postRunCleanup;
-(void)setFailedState;
-(void)backPressed:(id)arg1 ;
-(void)continuePressed:(id)arg1 ;
-(SIUWorkflowController *)workflowController;
-(void)setWorkflowController:(SIUWorkflowController *)arg1 ;
-(void)workflowStopped;
-(void)workflowCompleted;
-(void)updateProgress:(id)arg1 ;
-(void)setEnabledState:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isRunning;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)awakeFromNib;
-(void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2 ;
@end

