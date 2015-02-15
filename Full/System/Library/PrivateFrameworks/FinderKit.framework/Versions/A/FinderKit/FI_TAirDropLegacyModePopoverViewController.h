/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TViewController.h>

@class FI_TTextField, FI_TButton, NSString, FI_TAirDropDiscoveryController;

@interface FI_TAirDropLegacyModePopoverViewController : FI_TViewController {

	TNSRef<FI_TAirDropDiscoveryController *> _discoveryController;
	TKeyValueObserver* _legacyModeEnabledObserver;
	TKeyValueObserver* _legacyMachineObserver;
	TNSRef<FI_TPopoverController *> _popoverController;
	FI_TTextField* _messageTextField;
	FI_TButton* _toggleLegacyModeButton;

}

@property (nonatomic,retain,readonly) NSString * messageText; 
@property (nonatomic,retain,readonly) NSString * buttonTitle; 
@property (nonatomic,readonly) BOOL isButtonEnabled; 
@property (readonly) FI_TAirDropDiscoveryController * discoveryController; 
+(id)keyPathsForValuesAffectingIsLegacyMachine;
+(id)keyPathsForValuesAffectingIsButtonEnabled;
-(void)initCommon;
-(FI_TAirDropDiscoveryController *)discoveryController;
-(BOOL)isLegacyMachine;
-(void)setPopoverController:(id)arg1 ;
-(NSString *)buttonTitle;
-(void)viewLoaded;
-(BOOL)isButtonEnabled;
-(void)toggleAirDropLegacyMode:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)messageText;
-(id)nibName;
@end

