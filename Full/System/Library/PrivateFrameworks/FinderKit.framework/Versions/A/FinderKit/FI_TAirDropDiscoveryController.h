/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/SFAirDropDiscoveryControllerDelegate.h>

@class NSString;

@interface FI_TAirDropDiscoveryController : NSObject <SFAirDropDiscoveryControllerDelegate> {

	TNSRef<SFAirDropDiscoveryController *> _discoveryController;
	BOOL _isLegacyMachine;
	long long _discoverableMode;
	BOOL _isLegacyModeEnabled;
	BOOL _isLegacyModeSettable;

}

@property (getter=isLegacyMachine,nonatomic,readonly) BOOL legacyMachine;                        //@synthesize isLegacyMachine=_isLegacyMachine - In the implementation block
@property (assign,nonatomic) long long discoverableMode;                                         //@synthesize discoverableMode=_discoverableMode - In the implementation block
@property (assign,getter=isLegacyModeEnabled,nonatomic) BOOL legacyModeEnabled;                  //@synthesize isLegacyModeEnabled=_isLegacyModeEnabled - In the implementation block
@property (getter=isLegacyModeSettable,nonatomic,readonly) BOOL legacyModeSettable;              //@synthesize isLegacyModeSettable=_isLegacyModeSettable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controller;
-(BOOL)isLegacyMachine;
-(BOOL)isLegacyModeEnabled;
-(BOOL)isLegacyModeSettable;
-(void)setLegacyModeEnabled:(BOOL)arg1 ;
-(long long)discoverableMode;
-(void)setDiscoverableMode:(long long)arg1 ;
-(void)discoveryControllerSettingsDidChange:(id)arg1 ;
-(void)discoveryControllerVisibilityDidChange:(id)arg1 ;
-(void)discoveryControllerLegacyModePropertiesDidChange:(id)arg1 ;
-(void)updateState;
-(id)init;
-(void)dealloc;
-(id)_init;
@end

