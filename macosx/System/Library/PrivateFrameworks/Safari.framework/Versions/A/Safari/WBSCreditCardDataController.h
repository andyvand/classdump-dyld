/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSArray;

@interface WBSCreditCardDataController : NSObject {

	NSMapTable* _creditCardDataKeychainReferences;

}

@property (nonatomic,readonly) NSArray * creditCardData; 
+(char)hasCreditCardData;
-(void)clearCreditCardData;
-(id)savableCreditCardDataInForm:(id)arg1 ;
-(id)existingCardWithNumber:(id)arg1 ;
-(void)replaceCreditCardData:(id)arg1 withCard:(id)arg2 ;
-(void)saveCreditCardDataIfAllowed:(id)arg1 ;
-(void)neverSaveCreditCardData:(id)arg1 ;
-(void)creditCardDataDidChange;
-(NSArray *)creditCardData;
-(char)isCreditCardDataSaved:(id)arg1 ;
-(void)removeCreditCardData:(id)arg1 ;
-(void)saveCreditCardData:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1 ;
-(char)shouldNeverSaveCardWithNumber:(id)arg1 ;
-(id)_uniqueCardNameForCardName:(id)arg1 ;
-(id)defaultNameForCardOfType:(unsigned long long)arg1 cardholderName:(id)arg2 ;
-(void)_removeNeverSaveCreditCardData:(id)arg1 ;
-(char)shouldAddCardWithNumber:(id)arg1 ;
-(id)_neverSavedCreditCardSuffixFromCard:(id)arg1 ;
-(void)invalidateCreditCardData;
-(id)init;
@end

