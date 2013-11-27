/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:36:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXIPCServer.h>

@protocol GAXBackboardServerDelegate;
@class ;

@interface GAXBackboardServer : AXIPCServer {

	<GAXBackboardServerDelegate>* _backboardDelegate;

}

@property (assign,nonatomic) <GAXBackboardServerDelegate> * backboardDelegate;              //@synthesize backboardDelegate=_backboardDelegate - In the implementation block
-(id)_handleGetActiveAppInterfaceOrientation:(id)arg1 ;
-(id)_handlePasscodeChanged:(id)arg1 ;
-(id)_handleFrontmostAppChanged:(id)arg1 ;
-(id)_handleOverrideAllowAllTouch:(id)arg1 ;
-(id)_handleOverrideIgnoreAllTouch:(id)arg1 ;
-(id)_handleStateForRestrictionWithIdentifier:(id)arg1 ;
-(id)_handleDeviceWasLocked:(id)arg1 ;
-(id)_handleDidShowTripleClickAlert:(id)arg1 ;
-(id)_handleDeviceWasUnlocked:(id)arg1 ;
-(id)_handleDidFinishLaunchingApplication:(id)arg1 ;
-(id)_handleSystemDidRestartDueToLowBattery:(id)arg1 ;
-(id)_handleDidShowVoiceOverItemChooser:(id)arg1 ;
-(id)backboardDelegate;
-(void)setBackboardDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
