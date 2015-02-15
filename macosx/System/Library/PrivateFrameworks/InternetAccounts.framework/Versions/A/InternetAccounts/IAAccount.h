/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface IAAccount : NSObject {

	NSMutableDictionary* _attrs;
	char _persistentStorage;
	NSString* _uid;
	NSString* _parentUID;
	id _private;

}

@property (retain) NSString * uid;                             //@synthesize uid=_uid - In the implementation block
@property (retain) NSString * parentUID;                       //@synthesize parentUID=_parentUID - In the implementation block
@property (readonly) NSString * provider; 
@property (readonly) NSString * loginName; 
@property (retain) NSString * fullName; 
@property (retain) NSString * accountDescription; 
@property (retain) NSString * accountType; 
@property (retain) NSString * password; 
@property (retain) NSString * acAccountID; 
@property (retain) NSString * acAccountTypeID; 
@property (assign) char persistentStorage;                     //@synthesize persistentStorage=_persistentStorage - In the implementation block
+(id)_pluginForSettings:(id)arg1 ;
+(id)_pluginIDForChatAccountType:(id)arg1 server:(id)arg2 emailHost:(id)arg3 ;
+(id)_hostLabelForServerAddress:(id)arg1 ;
+(id)accountFromXPCRepresentation:(id)arg1 ;
+(char)_isSocialProvider:(id)arg1 ;
+(id)standardizedLoginName:(id)arg1 ;
+(id)imageForPluginID:(id)arg1 imageType:(long long)arg2 ;
+(char)appleIDIsCastle:(id)arg1 ;
+(id)accountIdentifierForSettings:(id)arg1 ;
+(id)ldapLoginNameForSettings:(id)arg1 ;
+(id)protectedSocialProfileServicesForPluginID:(id)arg1 ;
+(id)defaultDescriptionForAccountSettings:(id)arg1 ;
+(id)supportURLForAccountSettings:(id)arg1 ;
+(id)brandNameForAccountSettings:(id)arg1 ;
+(id)brandIconForAccountSettings:(id)arg1 ;
+(id)aListPluginIDForSettings:(id)arg1 ;
+(id)accountWithProviderType:(id)arg1 loginName:(id)arg2 ;
-(NSString *)parentUID;
-(id)allChildAccounts;
-(char)isAList;
-(id)initWithProviderType:(id)arg1 loginName:(id)arg2 ;
-(id)_standardizedAccountType;
-(id)providerAttributeForKey:(id)arg1 ;
-(id)providerAttributes;
-(void)setProviderAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)removeAttributeForKey:(id)arg1 ;
-(char)accountIsEnabled;
-(void)setVolatileAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)removeProviderAttributeForKey:(id)arg1 ;
-(id)xpcRepresentation;
-(void)setParentUID:(NSString *)arg1 ;
-(void)mergePropertiesWithSettingDictionary:(id)arg1 replaceExisting:(char)arg2 ;
-(void)addChildAccount:(id)arg1 ;
-(void)updateWithSettingsDict:(id)arg1 keys:(id)arg2 ;
-(void)updateWithKnownSettingsFromDictionary:(id)arg1 excludingKeys:(id)arg2 ;
-(char)_aimAccountIsEqual:(id)arg1 ;
-(id)primaryHost;
-(char)_ldapIsEqual:(id)arg1 ;
-(char)_imapIsEqual:(id)arg1 ;
-(char)isMailAndNotesParent;
-(char)isCalDAVParent;
-(NSString *)acAccountTypeID;
-(void)setAcAccountTypeID:(NSString *)arg1 ;
-(void)setAccountEnabled:(char)arg1 ;
-(id)loginNamePlusProvider;
-(void)replacePropertiesWithSettingDictionary:(id)arg1 ;
-(id)allChildAppAccounts;
-(id)childAccountWithUID:(id)arg1 ;
-(id)childAccountWithProviderID:(id)arg1 ;
-(void)removeChildAccountWithUID:(id)arg1 ;
-(void)removeChildAccountWithProviderID:(id)arg1 ;
-(void)mergeWithAccount:(id)arg1 ;
-(id)enabledApplications:(char)arg1 ;
-(char)enabledForApplication:(id)arg1 ;
-(id)volatileAttributeForKey:(id)arg1 ;
-(void)storeValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeStoredData;
-(void)mergeStoredData;
-(char)parentAcceptsChildWithUID:(id)arg1 ;
-(void)saveToPersistentStore;
-(char)persistentStorage;
-(void)setPersistentStorage:(char)arg1 ;
-(NSString *)password;
-(char)isSocial;
-(NSString *)accountType;
-(NSString *)accountDescription;
-(void)setAccountDescription:(NSString *)arg1 ;
-(id)accountIdentifier;
-(void)updateWithKnownSettingsFromDictionary:(id)arg1 ;
-(char)isPlaceholder;
-(id)storedValueForKey:(id)arg1 ;
-(void)setIsPlaceholder:(char)arg1 ;
-(void)setAccountType:(NSString *)arg1 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)dictionaryRepresentation;
-(id)attributes;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)attributeForKey:(id)arg1 ;
-(NSString *)uid;
-(char)isExchange;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUid:(NSString *)arg1 ;
-(NSString *)acAccountID;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setAcAccountID:(NSString *)arg1 ;
-(NSString *)loginName;
-(NSString *)provider;
@end
