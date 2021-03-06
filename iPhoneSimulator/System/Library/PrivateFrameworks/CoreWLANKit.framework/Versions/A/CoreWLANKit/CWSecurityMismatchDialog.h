/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:01 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@class CWNetwork, CWNetworkProfile, NSTextField, NSButton;

@interface CWSecurityMismatchDialog : NSWindowController {

	CWNetwork* _network;
	CWNetworkProfile* _profile;
	NSTextField* _title;
	NSTextField* _description;
	NSButton* _okButton;
	NSButton* _cancelButton;
	id _delegate;

}

@property (__weak) id delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) CWNetwork * network;                     //@synthesize network=_network - In the implementation block
@property (copy,readonly) CWNetworkProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(CWNetwork *)network;
-(CWNetworkProfile *)profile;
-(void)onOKButton:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 profile:(id)arg2 ;
-(void)onCancelButton:(id)arg1 ;
-(id)profileSecurityString;
-(id)networkSecurityString;
-(id)localizedStringForKey:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)windowDidLoad;
@end

