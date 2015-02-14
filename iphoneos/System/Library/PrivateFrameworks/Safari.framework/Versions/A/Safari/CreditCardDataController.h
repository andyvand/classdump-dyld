/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:53 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/WBSCreditCardDataController.h>

@interface CreditCardDataController : WBSCreditCardDataController
+(id)shared;
-(void)_offerToSaveCreditCardData:(id)arg1 submittedToFrame:(const Frame*)arg2 fromFrame:(const Frame*)arg3 finishedSavingFormDataBlock:(/*^block*/id)arg4 ;
-(void)_userDidSelectSaveForCardData:(id)arg1 ;
-(void)_userDidSelectNeverSaveForCardData:(id)arg1 ;
-(void)creditCardDataDidChange;
-(void)willSubmitFormContainingCreditCardData:(id)arg1 toFrame:(const Frame*)arg2 fromFrame:(const Frame*)arg3 finishedSavingFormDataHandler:(ScopeExitHandler*)arg4 ;
@end

