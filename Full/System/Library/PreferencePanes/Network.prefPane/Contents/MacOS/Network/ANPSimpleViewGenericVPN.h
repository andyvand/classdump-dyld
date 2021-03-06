/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Network.prefPane/Contents/MacOS/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Network/ANPSimpleViewConnector.h>

@class NSView, NSTextField, NSButton;

@interface ANPSimpleViewGenericVPN : ANPSimpleViewConnector {

	NSView* o_configureView;
	NSTextField* o_configServerAddressLabel;
	NSTextField* o_configServerAddressTextField;
	NSTextField* o_configAccountNameLabel;
	NSTextField* o_configAccountNameTextField;
	NSButton* o_connectOnDemandButton;
	char mAllowConnectOnDemand;

}
-(void)p_AwakeFromNib;
-(void)p_updateView;
-(id)menuExtraName;
-(char)apply;
-(int)menuExtraPosition;
-(id)menuExtraButtonTitle;
-(void)p_setConstraints;
-(void)p_setConstantConstraints;
-(void)a_connectOnDemandPressed:(id)arg1 ;
-(void)setService:(id)arg1 ;
-(void)updateConfiguration;
-(void)updateView;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(id)helpAnchor;
@end

