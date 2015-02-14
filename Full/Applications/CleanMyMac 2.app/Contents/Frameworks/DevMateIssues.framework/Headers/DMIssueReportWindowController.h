/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/CleanMyMac 2.app/Contents/Frameworks/DevMateIssues.framework/DevMateIssues
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>
#import <DevMateIssues/DMReportManagerDelegate.h>
#import <DevMateIssues/NSTextViewDelegate.h>

@protocol DMControllerRestartDelegate;
@class NSDictionary, NSImageView, NSTextField, NSTextView, NSButton, NSProgressIndicator, DMReportManager_ISSUES, DMInfoPopoverViewController_ISSUES, DMFeedbackContainerView_ISSUES, NSArray;

@interface DMIssueReportWindowController : NSWindowController <DMReportManagerDelegate, NSTextViewDelegate> {

	char _shouldRestartAtEnd;
	unsigned long long _controllerType;
	NSDictionary* _defaultUserInfo;
	id<DMControllerRestartDelegate> _delegate;
	NSImageView* _appIcon;
	NSTextField* _titleField;
	NSTextField* _messageField;
	NSTextField* _userNameField;
	NSTextField* _userEmailField;
	NSTextView* _commentView;
	NSButton* _attachmentButton;
	NSButton* _sendAnonymousButton;
	NSTextField* _sendAnonymousExplanationField;
	NSTextField* _anonymousInfoField;
	NSButton* _sysInfoButton;
	NSButton* _sendButton;
	NSButton* _sendRestartButton;
	NSProgressIndicator* _progressIndicator;
	DMReportManager_ISSUES* _reportsSender;
	DMInfoPopoverViewController_ISSUES* _infoPopoverController;
	DMFeedbackContainerView_ISSUES* _commentContainer;
	NSButton* _cancelButton;

}

@property (assign,nonatomic) unsigned long long controllerType;                                       //@synthesize controllerType=_controllerType - In the implementation block
@property (nonatomic,retain) NSArray * logURLs; 
@property (nonatomic,retain) NSDictionary * defaultUserInfo;                                          //@synthesize defaultUserInfo=_defaultUserInfo - In the implementation block
@property (assign,nonatomic) id<DMControllerRestartDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSImageView * appIcon;                                                   //@synthesize appIcon=_appIcon - In the implementation block
@property (assign,nonatomic) NSTextField * titleField;                                                //@synthesize titleField=_titleField - In the implementation block
@property (assign,nonatomic) NSTextField * messageField;                                              //@synthesize messageField=_messageField - In the implementation block
@property (assign,nonatomic) NSTextField * userNameField;                                             //@synthesize userNameField=_userNameField - In the implementation block
@property (assign,nonatomic) NSTextField * userEmailField;                                            //@synthesize userEmailField=_userEmailField - In the implementation block
@property (assign,nonatomic) NSTextView * commentView;                                                //@synthesize commentView=_commentView - In the implementation block
@property (assign,nonatomic) NSButton * attachmentButton;                                             //@synthesize attachmentButton=_attachmentButton - In the implementation block
@property (assign,nonatomic) NSButton * sendAnonymousButton;                                          //@synthesize sendAnonymousButton=_sendAnonymousButton - In the implementation block
@property (assign,nonatomic) NSTextField * sendAnonymousExplanationField;                             //@synthesize sendAnonymousExplanationField=_sendAnonymousExplanationField - In the implementation block
@property (assign,nonatomic) NSTextField * anonymousInfoField;                                        //@synthesize anonymousInfoField=_anonymousInfoField - In the implementation block
@property (assign,nonatomic) NSButton * sysInfoButton;                                                //@synthesize sysInfoButton=_sysInfoButton - In the implementation block
@property (assign,nonatomic) NSButton * sendButton;                                                   //@synthesize sendButton=_sendButton - In the implementation block
@property (assign,nonatomic) NSButton * sendRestartButton;                                            //@synthesize sendRestartButton=_sendRestartButton - In the implementation block
@property (assign,nonatomic) NSProgressIndicator * progressIndicator;                                 //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,retain) DMReportManager_ISSUES * reportsSender;                                  //@synthesize reportsSender=_reportsSender - In the implementation block
@property (nonatomic,retain) DMInfoPopoverViewController_ISSUES * infoPopoverController;              //@synthesize infoPopoverController=_infoPopoverController - In the implementation block
@property (assign,nonatomic) DMFeedbackContainerView_ISSUES * commentContainer;                       //@synthesize commentContainer=_commentContainer - In the implementation block
@property (assign,nonatomic) char shouldRestartAtEnd;                                                 //@synthesize shouldRestartAtEnd=_shouldRestartAtEnd - In the implementation block
@property (nonatomic,retain) NSButton * cancelButton;                                                 //@synthesize cancelButton=_cancelButton - In the implementation block
+(id)defaultNibName;
+(id)defaultNibPath;
+(id)defaultController;
-(char)attachmentTextView:(id)arg1 shouldAttachFile:(id)arg2 ;
-(void)attachFile:(id)arg1 ;
-(void)reportManagerDidFinishGatheringData:(id)arg1 ;
-(id)hostApplication;
-(void)reportManagerDidStartGatheringData:(id)arg1 ;
-(NSArray *)logURLs;
-(void)setLogURLs:(NSArray *)arg1 ;
-(void)reportManagerDidUpdateLogInfo:(id)arg1 ;
-(void)reportManagerDidUpdateAppPreferencesInfo:(id)arg1 ;
-(void)reportManagerDidUpdateSystemInfo:(id)arg1 ;
-(void)reportManagerDidFailUpload:(id)arg1 errorDescription:(id)arg2 ;
-(void)reportManagerDidFinishUpload:(id)arg1 ;
-(void)setDefaultUserInfo:(NSDictionary *)arg1 ;
-(NSTextView *)commentView;
-(NSButton *)sendAnonymousButton;
-(NSButton *)sysInfoButton;
-(NSTextField *)sendAnonymousExplanationField;
-(NSTextField *)userEmailField;
-(void)prepareWindowToShow;
-(DMFeedbackContainerView_ISSUES *)commentContainer;
-(NSButton *)sendRestartButton;
-(NSTextField *)userNameField;
-(id)userComment;
-(id)userAttachmentURLs;
-(char)isWindowVisible;
-(void)uploadDidFinish:(char)arg1 ;
-(void)showSysInfo:(id)arg1 ;
-(void)sendReport:(id)arg1 ;
-(id)reportsToSend;
-(void)setInfoPopoverController:(DMInfoPopoverViewController_ISSUES *)arg1 ;
-(void)setReportsSender:(DMReportManager_ISSUES *)arg1 ;
-(void)cancelReporting:(id)arg1 ;
-(NSButton *)attachmentButton;
-(void)com_devmate_windowWillClose:(id)arg1 ;
-(DMReportManager_ISSUES *)reportsSender;
-(NSDictionary *)defaultUserInfo;
-(void)switchUIToSendingMode:(char)arg1 ;
-(void)showGratitudeAlert;
-(id)attachmentCommentView;
-(DMInfoPopoverViewController_ISSUES *)infoPopoverController;
-(void)setShouldRestartAtEnd:(char)arg1 ;
-(void)startSendingReport;
-(void)gratitudeAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(char)shouldRestartAtEnd;
-(id)emptyFieldCheck:(id)arg1 ;
-(void)showErrorWithDescription:(id)arg1 ;
-(void)showAttachmentsWarningAlert;
-(void)didChangeHostApplication;
-(void)sendAndRelaunch:(id)arg1 ;
-(void)setUserNameField:(NSTextField *)arg1 ;
-(void)setUserEmailField:(NSTextField *)arg1 ;
-(void)setCommentView:(NSTextView *)arg1 ;
-(void)setAttachmentButton:(NSButton *)arg1 ;
-(void)setSendAnonymousButton:(NSButton *)arg1 ;
-(void)setSendAnonymousExplanationField:(NSTextField *)arg1 ;
-(NSTextField *)anonymousInfoField;
-(void)setAnonymousInfoField:(NSTextField *)arg1 ;
-(void)setSysInfoButton:(NSButton *)arg1 ;
-(void)setSendButton:(NSButton *)arg1 ;
-(void)setSendRestartButton:(NSButton *)arg1 ;
-(void)setCommentContainer:(DMFeedbackContainerView_ISSUES *)arg1 ;
-(void)setProgressIndicator:(NSProgressIndicator *)arg1 ;
-(NSButton *)sendButton;
-(unsigned long long)controllerType;
-(void)setControllerType:(unsigned long long)arg1 ;
-(NSTextField *)titleField;
-(NSTextField *)messageField;
-(void)setTitleField:(NSTextField *)arg1 ;
-(void)setMessageField:(NSTextField *)arg1 ;
-(void)errorAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(NSImageView *)appIcon;
-(void)setAppIcon:(NSImageView *)arg1 ;
-(void)setDelegate:(id<DMControllerRestartDelegate>)arg1 ;
-(void)dealloc;
-(id<DMControllerRestartDelegate>)delegate;
-(void)showWindow:(id)arg1 ;
-(id)textView:(id)arg1 writablePasteboardTypesForCell:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(char)textView:(id)arg1 writeCell:(id)arg2 atIndex:(unsigned long long)arg3 toPasteboard:(id)arg4 type:(id)arg5 ;
-(void)windowDidLoad;
-(NSProgressIndicator *)progressIndicator;
-(NSButton *)cancelButton;
@end

