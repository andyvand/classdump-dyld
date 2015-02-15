/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <Accounts/NSSecureCoding.h>

@class ACAccountStore, NSString, ACAccountType, ACAccountCredential, NSMutableDictionary, NSURL, NSDate, NSArray, NSMutableSet, NSDictionary, NSSet;

@interface ACAccount : NSObject <NSSecureCoding> {

	ACAccountStore* _store;
	NSString* _identifier;
	NSString* _accountDescription;
	NSString* _owningBundleID;
	NSString* _username;
	NSString* _authenticationType;
	NSString* _credentialType;
	NSString* _clientToken;
	char _haveCheckedForClientToken;
	ACAccountType* _accountType;
	ACAccountCredential* _credential;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _dataclassProperties;
	char _accountAccessAvailable;
	char _authenticated;
	char _active;
	char _supportsAuthentication;
	char _visible;
	NSURL* _objectID;
	NSDate* _date;
	NSDate* _lastCredentialRenewalRejectionDate;
	ACAccount* _parentAccount;
	char _haveCheckedForParentAccount;
	NSString* _parentAccountIdentifier;
	char _haveCheckedForChildAccounts;
	NSArray* _childAccounts;
	NSMutableSet* _enabledDataclasses;
	NSMutableSet* _provisionedDataclasses;
	NSMutableSet* _dirtyProperties;
	NSMutableSet* _dirtyAccountProperties;
	id _credentialsDidChangeObserver;
	/*^block*/id _accountPropertiesTransformer;
	char _creatingFromManagedObject;

}

@property (nonatomic,readonly) NSString * icaPersonID; 
@property (nonatomic,readonly) NSString * icaFirstName; 
@property (nonatomic,readonly) NSString * icaLastName; 
@property (nonatomic,readonly) NSString * icaPrimaryEmail; 
@property (nonatomic,readonly) NSString * icaAppleIDAlias; 
@property (nonatomic,readonly) NSArray * icaAppleIDAliases; 
@property (nonatomic,readonly) NSString * icaDisplayName; 
@property (nonatomic,readonly) NSString * icaAccountTypeString; 
@property (nonatomic,readonly) NSDictionary * icaTokens; 
@property (nonatomic,readonly) NSString * icaAuthToken; 
@property (nonatomic,readonly) ACAccount * icaFmfAccount; 
@property (nonatomic,readonly) ACAccount * icaFmipAccount; 
@property (nonatomic,readonly) NSString * icaBTMMInfiniteToken; 
@property (nonatomic,readonly) NSString * icsMapsToken; 
@property (nonatomic,readonly) NSString * icaCloudKitToken; 
@property (nonatomic,readonly) NSDictionary * icaAvailableFeatures; 
@property (nonatomic,readonly) char icaIsPrimaryEmailVerified; 
@property (assign,setter=icaSetDelegateParameters:,nonatomic) NSDictionary * icaDelegateParameters; 
@property (assign,setter=icaSetPrimaryAccount:,nonatomic) char icaIsPrimaryAccount; 
@property (assign,setter=icaSetNeedsToVerifyTerms:,nonatomic) char icaNeedsToVerifyTerms; 
@property (__weak,readonly) NSString * identifier; 
@property (retain) ACAccountType * accountType; 
@property (copy) NSString * accountDescription; 
@property (copy) NSString * username; 
@property (readonly) NSString * userFullName; 
@property (retain) ACAccountCredential * credential; 
@property (readonly) NSURL * objectID; 
@property (readonly) ACAccountStore * accountStore; 
@property (retain) ACAccount * parentAccount; 
@property (readonly) NSString * parentAccountIdentifier; 
@property (readonly) NSArray * childAccounts; 
@property (retain) NSMutableSet * enabledDataclasses; 
@property (retain) NSMutableSet * provisionedDataclasses; 
@property (__weak,readonly) NSDictionary * dataclassProperties; 
@property (getter=isAuthenticated) char authenticated; 
@property (__weak,readonly) NSDictionary * accountProperties; 
@property (__weak,readonly) ACAccount * displayAccount; 
@property (getter=isActive) char active; 
@property (assign) char supportsAuthentication; 
@property (getter=isDirty,readonly) char dirty; 
@property (readonly) NSSet * dirtyProperties;                                                                    //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (readonly) NSSet * dirtyAccountProperties;                                                             //@synthesize dirtyAccountProperties=_dirtyAccountProperties - In the implementation block
@property (readonly) NSString * authenticationType; 
@property (readonly) NSString * credentialType; 
@property (readonly) char supportsPush; 
@property (retain) NSDate * creationDate; 
@property (getter=isVisible) char visible; 
@property (retain) NSDate * lastCredentialRenewalRejectionDate; 
@property (nonatomic,readonly) NSString * shortDebugName; 
@property (readonly) NSString * clientToken; 
@property (copy) id accountPropertiesTransformer;                                                                //@synthesize accountPropertiesTransformer=_accountPropertiesTransformer - In the implementation block
+(id)icaAppleAccountWithAppleID:(id)arg1 password:(id)arg2 ;
+(id)_createNewAccountUID;
+(char)supportsSecureCoding;
-(id)icaAppleAccountInfo;
-(char)icaNeedsToVerifyTerms;
-(void)icaSetNeedsToVerifyTerms:(char)arg1 ;
-(NSDictionary *)icaDelegateParameters;
-(NSDictionary *)icaTokens;
-(id)icaMobileMeInfo;
-(NSString *)icaDisplayName;
-(NSString *)icaFirstName;
-(NSString *)icaLastName;
-(NSString *)icaPersonID;
-(NSString *)icaAccountTypeString;
-(char)icaIsPrimaryAccount;
-(void)icaSetPrimaryAccount:(char)arg1 ;
-(char)icaIsPrimaryEmailVerified;
-(NSString *)icaPrimaryEmail;
-(NSString *)icaAppleIDAlias;
-(NSArray *)icaAppleIDAliases;
-(void)icaSetDelegateParameters:(id)arg1 ;
-(NSString *)icaAuthToken;
-(ACAccount *)icaFmfAccount;
-(ACAccount *)icaFmipAccount;
-(NSString *)icaBTMMInfiniteToken;
-(id)icaMapsToken;
-(NSString *)icaCloudKitToken;
-(id)icaAuthTokenWithError:(id*)arg1 ;
-(NSDictionary *)icaAvailableFeatures;
-(id)icaPropertiesForDataclass:(id)arg1 ;
-(ACAccountStore *)accountStore;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(ACAccount *)parentAccount;
-(NSString *)username;
-(ACAccountCredential *)credential;
-(void)credentialsChanged:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithAccountType:(id)arg1 ;
-(void)setCredential:(ACAccountCredential *)arg1 ;
-(ACAccountType *)accountType;
-(void)setCredentialType:(NSString *)arg1 ;
-(id)initWithManagedAccount:(id)arg1 ;
-(id)owningBundleID;
-(void)setOwningBundleID:(id)arg1 ;
-(id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)_setAccountStore:(id)arg1 ;
-(void)_loadAllCachedProperties;
-(id)diffAccount:(id)arg1 ;
-(char)isPropertyDirty:(id)arg1 ;
-(NSString *)parentAccountIdentifier;
-(void)setParentAccount:(ACAccount *)arg1 ;
-(NSDictionary *)accountProperties;
-(NSSet *)dirtyAccountProperties;
-(NSDictionary *)dataclassProperties;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(NSMutableSet *)enabledDataclasses;
-(void)setEnabledDataclasses:(NSMutableSet *)arg1 ;
-(NSMutableSet *)provisionedDataclasses;
-(void)setProvisionedDataclasses:(NSMutableSet *)arg1 ;
-(void)markAllPropertiesDirty;
-(void)_setObjectID:(id)arg1 ;
-(NSArray *)childAccounts;
-(char)isEnabledForDataclass:(id)arg1 ;
-(void)setLastCredentialRenewalRejectionDate:(NSDate *)arg1 ;
-(void)setAuthenticated:(char)arg1 ;
-(id)accountByCleaningThirdPartyTransformations;
-(NSDate *)lastCredentialRenewalRejectionDate;
-(char)supportsAuthentication;
-(void)setSupportsAuthentication:(char)arg1 ;
-(char)isAuthenticated;
-(NSString *)accountDescription;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)setAuthenticationType:(NSString *)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)authenticationType;
-(void)_clearCachedChildAccounts;
-(void)_clearDirtyProperties;
-(void)_clearCachedCredentials;
-(void)_installCredentialsChangedObserver;
-(void)_markPropertyDirty:(id)arg1 ;
-(id)accountPropertiesTransformer;
-(void)_markAccountPropertyDirty:(id)arg1 ;
-(id)enabledAndSyncableDataclasses;
-(char)_useParentForCredentials;
-(id)credentialWithError:(id*)arg1 ;
-(ACAccount *)displayAccount;
-(char)addClientToken:(id)arg1 ;
-(void)_markCredentialDirty;
-(void)setAccountProperties:(NSDictionary *)arg1 ;
-(char)supportsPush;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg1 ;
-(char)isEnabledToSyncDataclass:(id)arg1 ;
-(void)setEnabled:(char)arg1 forDataclass:(id)arg2 ;
-(char)isProvisionedForDataclass:(id)arg1 ;
-(id)propertiesForDataclass:(id)arg1 ;
-(void)setProperties:(id)arg1 forDataclass:(id)arg2 ;
-(void)takeValuesFromModifiedAccount:(id)arg1 ;
-(void)setCreatingFromManagedObject:(char)arg1 ;
-(NSString *)shortDebugName;
-(void)setAccountPropertiesTransformer:(id)arg1 ;
-(void)reload;
-(NSString *)userFullName;
-(void)setAccountType:(ACAccountType *)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isDirty;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isActive;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isVisible;
-(NSURL *)objectID;
-(void)setVisible:(char)arg1 ;
-(void)setActive:(char)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)fullDescription;
-(NSSet *)dirtyProperties;
-(NSString *)clientToken;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)refresh;
-(NSString *)credentialType;
-(id)propertyForKey:(id)arg1 ;
-(char)authenticated;
@end

