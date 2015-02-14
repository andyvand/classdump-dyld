/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSTextField, NSButton, MUIWKViewController;

@interface MUILinkEditWindowController : NSWindowController {

	NSTextField* _linkTextField;
	NSButton* _okButton;
	NSButton* _removeButton;
	NSButton* _cancelButton;
	MUIWKViewController* _viewController;

}

@property (assign,nonatomic,__weak) NSTextField * linkTextField;                       //@synthesize linkTextField=_linkTextField - In the implementation block
@property (assign,nonatomic,__weak) NSButton * okButton;                               //@synthesize okButton=_okButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * removeButton;                           //@synthesize removeButton=_removeButton - In the implementation block
@property (assign,nonatomic,__weak) NSButton * cancelButton;                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) MUIWKViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(NSButton *)removeButton;
-(void)setRemoveButton:(NSButton *)arg1 ;
-(void)showSheet;
-(void)removeLink;
-(NSTextField *)linkTextField;
-(void)setLinkTextField:(NSTextField *)arg1 ;
-(NSButton *)okButton;
-(void)setOkButton:(NSButton *)arg1 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)setViewController:(MUIWKViewController *)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)ok:(id)arg1 ;
-(void)awakeFromNib;
-(id)windowNibName;
-(void)removeLink:(id)arg1 ;
-(MUIWKViewController *)viewController;
-(NSButton *)cancelButton;
@end

