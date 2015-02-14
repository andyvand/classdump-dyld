/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class CWInterface, CWNetwork, NSString, NSTextField, NSButton, NSProgressIndicator;

@interface CWWPSDialog_SL : NSWindowController {

	CWInterface* interface_;
	CWNetwork* network_;
	id delegate_;
	NSString* pin_;
	NSTextField* windowTitleLabel;
	NSTextField* windowDescriptionLabel;
	NSButton* cancelButton;
	NSTextField* pinLabel;
	NSTextField* statusMessageLabel;
	NSButton* warningButton;
	NSProgressIndicator* progressIndicator;
	NSButton* helpButton;
	char _joinInProgress;

}

@property (retain) CWInterface * interface; 
@property (copy) CWNetwork * network; 
@property (assign) id delegate; 
@property (copy) NSString * pin; 
+(id)wpsDialogWithInterface:(id)arg1 network:(id)arg2 ;
-(CWNetwork *)network;
-(void)setNetwork:(CWNetwork *)arg1 ;
-(void)onHelpButton:(id)arg1 ;
-(void)onCancelButton:(id)arg1 ;
-(id)initWithInterface:(id)arg1 network:(id)arg2 ;
-(void)setPin:(NSString *)arg1 ;
-(NSString *)pin;
-(void)updatePin;
-(CWInterface *)interface;
-(void)setInterface:(CWInterface *)arg1 ;
-(void)clearPIN;
-(id)localizedStringForKey:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)awakeFromNib;
-(void)windowDidLoad;
@end

