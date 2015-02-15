/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Network.prefPane/Contents/MacOS/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Network/ANPSimpleView.h>

@class NSButton, NSPopUpButton, NSProgressIndicator;

@interface ANPSimpleViewBluetoothPAN : ANPSimpleView {

	NSButton* o_connectButton;
	NSPopUpButton* o_deviceSelectorPopup;
	NSProgressIndicator* o_connectingProgressIndicator;
	char mEnabled;
	char mIsConnecting;

}
-(void)prepareViewToBeHidden;
-(void)p_updateStatusFields;
-(void)p_setupConnectButtonForState:(long long)arg1 ;
-(void)a_connectButtonPressed:(id)arg1 ;
-(void)a_disconnectButtonPressed:(id)arg1 ;
-(void)p_updateEnabledStates;
-(void)p_updateDevicesPopup;
-(void)p_updateConnectButton;
-(void)a_setupBluetoothTethering:(id)arg1 ;
-(void)updateView;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(id)helpAnchor;
-(void)awakeFromNib;
-(void)updateStatus;
@end
