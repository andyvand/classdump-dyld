/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ShareKit.framework/Versions/A/ShareKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ShareKit/ShareKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <ShareKit/NSTextViewDelegate.h>
#import <ShareKit/SHKCompletionPopUpControllerDelegate.h>
#import <ShareKit/NSSharingPlugInViewControllerPrivateProtocol.h>

@class SHKShareImageView, NSLayoutConstraint, SHKShareWindowBackgroundView, NSTextView, NSTextField, NSView, NSButton, NSProgressIndicator, NSPopUpButton, NSImageView, NSSharingPlugInComposeViewService, SHKCompletionPopUpController, SHKShareLocationController, NSString, NSImage;

@interface NSSharingComposeViewController : NSViewController <NSTextViewDelegate, SHKCompletionPopUpControllerDelegate, NSSharingPlugInViewControllerPrivateProtocol> {

	NSLayoutConstraint* _constraintForAccountsPopUpWidth;
	NSLayoutConstraint* _constraintForAudiencePopUpWidth;
	NSLayoutConstraint* _constraintForImagePreviewWidth;
	NSLayoutConstraint* _NCconstraintForAccountsPopUpWidth;
	NSLayoutConstraint* _NCconstraintForAudiencePopUpWidth;
	NSLayoutConstraint* _NCconstraintForTextViewLeadingSpace;
	SHKShareWindowBackgroundView* _backgroundView;
	NSTextView* _messageTextView;
	NSTextField* _characterCountTextField;
	NSView* _locationContainerView;
	NSButton* _cancelButton;
	NSButton* _sendButton;
	NSProgressIndicator* _progressIndicator;
	NSTextField* _titleTextField;
	NSTextField* _errorTextField;
	NSTextField* _accountsFromTextField;
	NSPopUpButton* _accountsPopUpButton;
	NSTextField* _audienceTextField;
	NSPopUpButton* _audiencePopUpButton;
	NSImageView* _titleImageView;
	SHKShareImageView* _imageView;
	NSSharingPlugInComposeViewService* _service;
	double _minWindowHeight;
	double _baseWindowHeight;
	unsigned long long _mainItemIndex;
	char _showsCompletionPopUpInMessage;
	SHKCompletionPopUpController* _completionPopUpController;
	SHKShareLocationController* _locationController;

}

@property (readonly) NSButton * cancelButton;                                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (readonly) NSButton * sendButton;                                        //@synthesize sendButton=_sendButton - In the implementation block
@property (retain) NSString * message; 
@property (assign) char showsProgressIndicator; 
@property (assign) char showsAccountsPopUp; 
@property (assign) char showsAudiencePopUp; 
@property (assign) char showsRemainingCharactersCounter; 
@property (assign) char showsLocationPin; 
@property (assign) char showsCompletionPopUpInMessage;                             //@synthesize showsCompletionPopUpInMessage=_showsCompletionPopUpInMessage - In the implementation block
@property (readonly) NSTextView * messageTextView;                                 //@synthesize messageTextView=_messageTextView - In the implementation block
@property (readonly) NSPopUpButton * accountsPopUpButton;                          //@synthesize accountsPopUpButton=_accountsPopUpButton - In the implementation block
@property (readonly) NSPopUpButton * audiencePopUpButton;                          //@synthesize audiencePopUpButton=_audiencePopUpButton - In the implementation block
@property (readonly) SHKShareLocationController * locationController;              //@synthesize locationController=_locationController - In the implementation block
@property (assign) int textureStyle; 
@property (readonly) NSImage * image; 
@property (readonly) NSImage * decoratedImage; 
@property (readonly) CGRect imageFrame; 
@property (readonly) CGRect imageContentFrame; 
@property (assign) unsigned long long mainItemIndex;                               //@synthesize mainItemIndex=_mainItemIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSImage * previewImage; 
@property (getter=isPreviewImageVisible) char previewImageVisible; 
@property (readonly) SHKShareImageView * imageView; 
+(id)keyPathsForValuesAffectingImage;
-(id)displayState;
-(void)send:(id)arg1 ;
-(int)textureStyle;
-(void)setTextureStyle:(int)arg1 ;
-(void)_updateCharactersCountField;
-(NSTextView *)messageTextView;
-(char)showsRemainingCharactersCounter;
-(void)_validateUI;
-(void)setShowsLocationPin:(char)arg1 ;
-(void)adjustAccountsPopUpFrame;
-(void)adjustAudiencePopUpFrame;
-(void)_updateSpaceBetweenImageAndPopUp;
-(void)activateFirstResponder;
-(void)setShowsRemainingCharactersCounter:(char)arg1 ;
-(void)_validateSendButton;
-(NSButton *)sendButton;
-(void)setShowsProgressIndicator:(char)arg1 ;
-(char)showsAccountsPopUp;
-(char)showsAudiencePopUp;
-(void)setPreviewImageVisible:(char)arg1 ;
-(void)adjustTextFrame;
-(id)imageForItemProvider:(id)arg1 ;
-(CGRect)imageFrameForItemProvider:(id)arg1 ;
-(CGRect)imageContentFrameForItemProvider:(id)arg1 ;
-(void)displayErrorString:(id)arg1 ;
-(void)contentDidChange;
-(void)accountsPopUpChanged:(id)arg1 ;
-(void)audiencePopUpChanged:(id)arg1 ;
-(char)showsLocationPin;
-(char)showsProgressIndicator;
-(void)setShowsAccountsPopUp:(char)arg1 ;
-(void)setShowsAudiencePopUp:(char)arg1 ;
-(CGRect)_imageFrame;
-(void)setPreviewImage:(NSImage *)arg1 ;
-(NSImage *)decoratedImage;
-(CGRect)imageContentFrame;
-(char)isPreviewImageVisible;
-(id)previewImageLayer;
-(char)showsCompletionPopUpInMessage;
-(void)setShowsCompletionPopUpInMessage:(char)arg1 ;
-(NSPopUpButton *)accountsPopUpButton;
-(NSPopUpButton *)audiencePopUpButton;
-(unsigned long long)mainItemIndex;
-(void)setMainItemIndex:(unsigned long long)arg1 ;
-(SHKShareLocationController *)locationController;
-(void)makeUIBusy:(char)arg1 ;
-(void)setCompletions:(id)arg1 forText:(id)arg2 ;
-(id)composeService;
-(void)messageTextViewDidScroll:(id)arg1 ;
-(void)_validateCompletionPopUpInMessage;
-(double)getLeadingSpaceFromSuperviewForView:(id)arg1 constraints:(id)arg2 markedConstraints:(id)arg3 ;
-(id)_visibleView;
-(id)mainItemProvider;
-(void)_insertCompletion:(id)arg1 ;
-(void)completionPopUpController:(id)arg1 didSelectCompletionItem:(id)arg2 ;
-(void)startAccountSetupAndClose:(id)arg1 ;
-(NSImage *)previewImage;
-(CGRect)imageFrame;
-(NSImage *)image;
-(id)title;
-(void)loadView;
-(void)cancel:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
-(id)textView:(id)arg1 willShowSharingServicePicker:(id)arg2 forItems:(id)arg3 ;
-(id)nibName;
-(id)nibBundle;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)viewDidAppear;
-(void)viewDidDisappear;
-(void)setDisplayState:(id)arg1 ;
-(void)_setupUI;
-(NSButton *)cancelButton;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(SHKShareImageView *)imageView;
@end
