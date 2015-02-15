/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Safari/Safari-Structs.h>
@class NSMutableDictionary, NSDictionary, NSObject;

@interface WBSFormDataController : NSObject {

	NSMutableDictionary* _completionDB;
	NSMutableDictionary* _valuesDB;
	NSMutableDictionary* _preferredLabelsMap;
	unsigned long long _completionDBSize;
	NSMutableDictionary* _domainToLastUsedUsernameAndProtectionSpace;
	NSDictionary* _allCredentialsCache;
	NSObject*<OS_dispatch_queue> _allCredentialsCacheAccessQueue;
	int _keychainChangedNotificationToken;

}
+(char)convertNumber:(id)arg1 toAutoFillFormType:(unsigned long long*)arg2 ;
+(id)dontSaveMarker;
+(char)formContainsCreditCardNumberField:(id)arg1 ;
+(char)canAutocompleteTextField:(id)arg1 inForm:(id)arg2 ;
+(id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2 ;
+(id)stringWithAddressBookValue:(id)arg1 key:(id)arg2 ;
+(char)formContainsCreditCardData:(id)arg1 ;
+(char)stringLooksLikeCreditCardNumber:(id)arg1 ;
+(id)domainFromURL:(id)arg1 ;
+(id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2 ;
+(id)specifierForControl:(id)arg1 ;
+(id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 textFieldsOnly:(char)arg3 ignorePositioning:(char)arg4 ;
-(void)clearPreviousDataDatabase;
-(void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1 ;
-(id)lastUsedUsernameForURL:(id)arg1 ;
-(id)matchesForControl:(id)arg1 withName:(id)arg2 atURL:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(char)arg5 ;
-(void)getFormFieldValues:(id*)arg1 andFieldToFocus:(id*)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4 ;
-(void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 ;
-(void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(char)arg5 ;
-(id)completionDBPath;
-(id)allFormDataForSaving;
-(id)preferredIdentifierForProperty:(id)arg1 ;
-(id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(OpaqueFormAutoFillFrame*)arg2 forPrefillingCredentials:(char)arg3 ;
-(id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(char)arg3 matches:(id*)arg4 preferredLabel:(id)arg5 ;
-(id)matchForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3 ;
-(id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2 ;
-(id)infoForDomain:(id)arg1 ;
-(void)setInfo:(id)arg1 forDomain:(id)arg2 ;
-(void)saveCompletionDBSoon;
-(void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id*)arg3 password:(id*)arg4 ;
-(void)domainsWithPreviousDataChanged;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 ;
-(char)shouldAutoFillFromAddressBook;
-(char)shouldAutoFillFromPreviousData;
-(char)shouldAutoFillPasswords;
-(char)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2 ;
-(id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2 ;
-(id)encryptOrDecryptData:(id)arg1 encrypt:(char)arg2 ;
-(id)domainsWithPreviousData;
-(void)clearPreviousDataForDomain:(id)arg1 ;
-(void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2 ;
-(void)pruneCompletionDB;
-(void)loadCompletionDBIfNeeded;
-(id)matchesForControl:(id)arg1 withName:(id)arg2 inDomain:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(char)arg5 preferredLabel:(id)arg6 ;
-(void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4 ;
-(void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4 ;
-(void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3 ;
-(unsigned long long)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5 ;
-(id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(char)arg4 preferredLabel:(id)arg5 ;
-(unsigned long long)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 ;
-(id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3 ;
-(id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id*)arg2 ;
-(id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id*)arg2 ;
-(id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2 ;
-(void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3 ;
-(id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2 ;
-(id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(char)arg3 matches:(id*)arg4 ;
-(id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 ;
-(char)hasCredentialsForPageWithMainFrame:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

