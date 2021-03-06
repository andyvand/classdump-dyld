/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:48 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class NSString, CWNetwork, NSTextField, NSButton;

@interface CWErrorDialog : NSWindowController {

	NSString* _networkName;
	CWNetwork* _network;
	NSTextField* _title;
	NSTextField* _description;
	NSButton* _runDiagnosticsButton;
	NSButton* _okButton;
	NSButton* _cancelButton;
	id _delegate;
	char _installerContext;

}

@property (__weak) id delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) CWNetwork * network;                 //@synthesize network=_network - In the implementation block
@property (copy,readonly) NSString * networkName;              //@synthesize networkName=_networkName - In the implementation block
-(CWNetwork *)network;
-(void)onOKButton:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 networkName:(id)arg2 ;
-(void)onCancelButton:(id)arg1 ;
-(NSString *)networkName;
-(id)localizedStringForKey:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)awakeFromNib;
-(void)windowDidLoad;
@end

