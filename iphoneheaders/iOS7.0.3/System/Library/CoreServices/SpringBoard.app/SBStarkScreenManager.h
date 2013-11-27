/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBScreenConnectionHandler.h>

@protocol SBStarkScreenManagerDelegate;
@class SBStarkBackgroundProviderManager, NSMapTable, SBStarkScreenController, SBStarkStatusBarStateProvider, SBSpuriousScreenUndimmingAssertion, SBPasscodeLockDisableAssertion, ;

@interface SBStarkScreenManager : NSObject <SBScreenConnectionHandler> {

	SBStarkBackgroundProviderManager* _backgroundProviderManager;
	NSMapTable* _screenToControllerMap;
	SBStarkScreenController* _activeScreenController;
	SBStarkStatusBarStateProvider* _statusBarStateProvider;
	SBSpuriousScreenUndimmingAssertion* _spuriousScreenUndimmingAssertion;
	SBPasscodeLockDisableAssertion* _deviceLockDisableAssertion;
	<SBStarkScreenManagerDelegate>* _delegate;

}

@property (assign,nonatomic) <SBStarkScreenManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)activeScreenController;
-(BOOL)screenManager:(id)arg1 shouldBindConnectionHandlerToScreen:(id)arg2 ;
-(void)screenManager:(id)arg1 didTriggerConnectionHandlerEvent:(int)arg2 forScreen:(id)arg3 ;
-(BOOL)isStarkActive;
-(id)backgroundProviderManager;
-(id)statusBarStateProvider;
-(void)_promptUnlockIfNecessary;
-(void)_setActiveController:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
@end
