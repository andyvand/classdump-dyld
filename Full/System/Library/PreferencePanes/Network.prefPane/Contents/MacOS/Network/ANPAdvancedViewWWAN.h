/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Network.prefPane/Contents/MacOS/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Network/ANPAdvancedView.h>
#import <Network/NSTextFieldDelegate.h>
#import <Network/NSComboBoxDelegate.h>

@class NSPopUpButton, NSTextField, NSComboBox, NSDictionary, NSString;

@interface ANPAdvancedViewWWAN : ANPAdvancedView <NSTextFieldDelegate, NSComboBoxDelegate> {

	NSPopUpButton* o_vendorPopup;
	NSPopUpButton* o_modelPopup;
	NSTextField* o_apnTextField;
	NSComboBox* o_cidComboBox;
	NSTextField* o_apnTextLabel;
	NSTextField* o_cidTextLabel;
	NSDictionary* mOriginalConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)a_selectVendor:(id)arg1 ;
-(void)a_selectModel:(id)arg1 ;
-(void)p_updateVendor;
-(void)p_updateModel;
-(char)apply;
-(void)p_populateCIDComboBox:(id)arg1 ;
-(void)p_updateConnectType;
-(void)setService:(id)arg1 ;
-(void)revert;
-(void)updateView;
-(id)init;
-(void)dealloc;
-(id)identifier;
-(void)setEnabled:(char)arg1 ;
-(id)helpAnchor;
-(void)controlTextDidChange:(id)arg1 ;
-(void)awakeFromNib;
@end
