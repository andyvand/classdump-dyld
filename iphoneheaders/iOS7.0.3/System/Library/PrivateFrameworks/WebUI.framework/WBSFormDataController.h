/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@class NSMutableDictionary;

@interface WBSFormDataController : NSObject {

	NSMutableDictionary* _completionDB;
	NSMutableDictionary* _valuesDB;
	NSMutableDictionary* _preferredLabelsMap;
	unsigned _completionDBSize;
	NSMutableDictionary* _domainToLastUsedUsername;

}
+(BOOL)formAllowsAutocompleteOfCredentials:(id)arg1 ;
+(BOOL)formContainsCreditCardNumberField:(id)arg1 ;
+(id)dontSaveMarker;
+(id)stringWithAddressBookValue:(id)arg1 key:(id)arg2 ;
+(BOOL)convertNumber:(id)arg1 toAutoFillFormType:(unsigned*)arg2 ;
+(BOOL)formContainsCreditCardData:(id)arg1 ;
+(id)valueOfControlWithName:(id)arg1 inForm:(id)arg2 ;
+(id)domainFromURL:(id)arg1 ;
+(id)_metadataForControlWithName:(id)arg1 inForm:(id)arg2 ;
+(BOOL)_autocompleteAllowedForControlWithName:(id)arg1 inForm:(id)arg2 ;
+(BOOL)stringLooksLikeCreditCardNumber:(id)arg1 ;
+(id)specifierForControl:(id)arg1 ;
+(id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned)arg2 textFieldsOnly:(BOOL)arg3 ignorePositioning:(BOOL)arg4 ;
-(void)dealloc;
-(BOOL)shouldAutoFillPasswords;
-(unsigned)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned)arg2 fieldName:(id)arg3 fromAutoFillItem:(id)arg4 toDictionary:(id)arg5 ;
-(BOOL)shouldAutoFillFromAddressBook;
-(BOOL)shouldAutoFillFromPreviousData;
-(id)matchesForControl:(id)arg1 withName:(id)arg2 atURL:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(BOOL)arg5 ;
-(id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2 ;
-(void)getFormFieldValues:(id*)arg1 andFieldToFocus:(id*)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4 ;
-(id)lastUsedUsernameForURL:(id)arg1 ;
-(id)allFormDataForSaving;
-(id)completionDBPath;
-(id)preferredIdentifierForProperty:(id)arg1 ;
-(BOOL)shouldSaveUsernamesAndPasswords;
-(void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 ;
-(id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 matches:(id*)arg4 ;
-(void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id*)arg3 password:(id*)arg4 ;
-(BOOL)hasCredentialsForPageWithMainFrame:(id)arg1 ;
-(id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(OpaqueFormAutoFillFrame*)arg2 forPrefillingCredentials:(BOOL)arg3 ;
-(void)saveCompletionDBSoon;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 ;
-(BOOL)shouldSaveFormData;
-(id)encryptOrDecryptData:(id)arg1 encrypt:(BOOL)arg2 ;
-(id)domainsWithPreviousData;
-(void)domainsWithPreviousDataChanged;
-(void)pruneCompletionDB;
-(void)loadCompletionDBIfNeeded;
-(id)infoForDomain:(id)arg1 ;
-(id)matchesForControl:(id)arg1 withName:(id)arg2 inDomain:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(BOOL)arg5 preferredLabel:(id)arg6 ;
-(void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4 ;
-(void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4 ;
-(void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3 ;
-(id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(BOOL)arg3 matches:(id*)arg4 preferredLabel:(id)arg5 ;
-(id)bestMatchForControl:(id)arg1 withName:(id)arg2 inDomain:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(BOOL)arg5 preferredLabel:(id)arg6 ;
-(id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2 ;
-(id)lastUsedUsernameForDomain:(id)arg1 ;
-(void)setLastUsedUsername:(id)arg1 forDomain:(id)arg2 ;
-(void)clearPreviousDataForDomain:(id)arg1 ;
-(void)clearPreviousDataDatabase;
-(void)setInfo:(id)arg1 forDomain:(id)arg2 ;
-(void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2 ;
-(id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2 ;
-(id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 ;
@end
