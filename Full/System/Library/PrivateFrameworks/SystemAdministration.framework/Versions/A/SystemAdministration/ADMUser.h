/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SystemAdministration.framework/Versions/A/SystemAdministration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SystemAdministration/SystemAdministration-Structs.h>
#import <SystemAdministration/ADMDSRecord.h>

@class NSMutableDictionary, NSMutableArray, NSString, NSNumber;

@interface ADMUser : ADMDSRecord {

	NSMutableDictionary* mCache;
	NSMutableArray* mModifiedFields;
	NSString* mCachedName;
	NSString* mCachedPassword;
	NSNumber* mIsLocal;
	CSIdentityRef mIdentityRef;

}
+(id)_findUser:(id)arg1 fullName:(char)arg2 searchParent:(char)arg3 attributes:(id)arg4 ;
+(char)isUserNameUnique:(id)arg1 searchParent:(char)arg2 ;
+(id)_findUserName:(id)arg1 searchParent:(char)arg2 ;
+(id)_userWithInfo:(id)arg1 attributes:(id)arg2 ;
+(SCD_Struct_AD2*)_createDSListFromArray:(id)arg1 ;
+(id)findUserByName:(id)arg1 searchParent:(char)arg2 ;
+(char)_isAdministrator:(id)arg1 ;
+(id)suggestUnixNameUsingString:(id)arg1 ;
+(char)removeHomeFolderOfUser:(id)arg1 async:(char)arg2 delegate:(id)arg3 ;
+(char)shouldHide500Users;
+(id)findUserByID:(unsigned long long)arg1 searchParent:(char)arg2 ;
+(CSIdentityRef)currentUserCSIdentityRef;
+(id)extendNameUntilUnique:(id)arg1 ;
+(id)findUserByFullName:(id)arg1 searchParent:(char)arg2 ;
+(id)allLocalUsers;
+(id)allLocalUserNamesWithPrimaryGroup:(id)arg1 ;
+(long long)nextFreeUserID;
+(id)newUser;
+(char)hasRootPasswordBeingSet;
+(id)generateUnixNameUsingString:(id)arg1 ;
+(char)isUnixNameValid:(id)arg1 ;
+(char)removeHomeFolderOfUser:(id)arg1 ;
+(char)shouldDisplayUser:(id)arg1 ;
+(char)isMasterPasswordEnabled;
+(int)changeMasterPassword:(id)arg1 oldPassword:(id)arg2 ;
+(id)SBSNodeName;
+(unsigned long long)sizeOfUserHomeTemplate;
+(id)defaultFamilySettings;
+(char)isCurrentUserAdministrator;
+(id)currentUser;
+(void)setMasterPassword:(id)arg1 ;
+(char)isBootVolumeCSFDE;
-(id)_initWithInfo:(id)arg1 node:(id)arg2 attributes:(id)arg3 ;
-(void)_setLocal:(char)arg1 ;
-(id)initWithRecordName:(const char*)arg1 type:(const char*)arg2 node:(id)arg3 ;
-(void)_setDefaults;
-(char)isHomeDirInStandartPlace;
-(char)isHomeDirEncrypted;
-(id)encryptedDiskImagePath;
-(long long)userID;
-(id)shell;
-(char)isDisabledUser;
-(void)_cacheUserInfo;
-(char)_hasAuthAuthority:(id)arg1 ;
-(char)userCanChangePassword;
-(char)userCanChangeHint;
-(char)userCanChangePicture;
-(char)userCanChangeCertificate;
-(char)userCanChangeDefaultLanguage;
-(void)setUserCanChangePassword:(char)arg1 ;
-(void)setUserCanChangeHint:(char)arg1 ;
-(void)setUserCanChangePicture:(char)arg1 ;
-(void)setUserCanChangeCertificate:(char)arg1 ;
-(void)setUserCanChangeDefaultLanguage:(char)arg1 ;
-(id)_cachedFirstObjectForKey:(id)arg1 ;
-(void)_setCachedObject:(id)arg1 forKey:(id)arg2 ;
-(void)_postDistributedNotification:(id)arg1 ;
-(id)_recacheAttribute:(id)arg1 ;
-(char)_checkWritersKey:(id)arg1 ;
-(void)_setUserCanChange:(char)arg1 writersKey:(id)arg2 ;
-(char)createHomeDirectoryWithParameters:(id)arg1 ;
-(id)generatedUID;
-(id)defaultHomeDirectory;
-(int)verifyPasswordReturnError:(id)arg1 ;
-(id)_authAuthorityForString:(id)arg1 ;
-(char)setHintImmideately:(id)arg1 ;
-(int)authenticateWithPassword:(id)arg1 ;
-(void)_setAdministrator:(char)arg1 postNotification:(char)arg2 ;
-(char)deleteUserWithParameters:(id)arg1 ;
-(void)revertChanges;
-(char)isAdministrator;
-(char)hasMobileHomeDirectory;
-(CFBundleRef)_AOSFrameworkBundle;
-(char)deleteHTTPConfig;
-(long long)commitChangesReturningError;
-(char)isNewUser;
-(void)setUserID:(long long)arg1 ;
-(id)HTTPConfigFilePath;
-(id)_noneStandardAttribute:(id)arg1 ;
-(void)_setNoneStandardAttribute:(id)arg1 value:(id)arg2 ;
-(void)enableUser;
-(char)isPasswordServerEnabled;
-(char)setFullNameImmideately:(id)arg1 ;
-(char)userCanChangeFullName;
-(void)setUserCanChangeFullName:(char)arg1 ;
-(id)userFullNameDidChangeExternally;
-(void)setHomeDirectory:(id)arg1 ;
-(char)createHomeDirectory;
-(void)setShadowPassword:(char)arg1 ;
-(char)shadowPassword;
-(char)hasEmptyPassword;
-(void)setNoLoginPassword;
-(char)verifyPassword:(id)arg1 ;
-(char)setSMBCompatible:(char)arg1 password:(id)arg2 ;
-(char)isSMBCompatible;
-(char)setAppleIDLoginEnabled:(char)arg1 appleID:(id)arg2 appleIDPassword:(id)arg3 ;
-(char)setAppleIDLoginEnabled:(char)arg1 appleID:(id)arg2 appleIDPassword:(id)arg3 password:(id)arg4 ;
-(void)appleIDLoginDidChangeExternally;
-(char)authenticate:(id)arg1 ;
-(id)hint;
-(void)setHint:(id)arg1 ;
-(char)setPictureImmideately:(id)arg1 ;
-(char)setPicturePathImmideately:(id)arg1 ;
-(void)userPictureDidChangeExternally;
-(char)isDirectAdministrator;
-(void)setAdministrator:(char)arg1 ;
-(void)updatePublicFolderAliasInNI;
-(char)deleteUser;
-(char)commitChanges;
-(char)createHTTPConfig;
-(id)naprivs;
-(void)setNAPrivs:(id)arg1 ;
-(id)ruid;
-(void)setruid:(id)arg1 ;
-(id)originalHomeDirectory;
-(id)originalNFSHomeDirectory;
-(id)originalNodeName;
-(id)metaNodeLocation;
-(char)isTokenAuthenticationEnabled;
-(char)isLocalCachedAccount;
-(id)homeloc;
-(void)setHomeloc:(id)arg1 ;
-(char)isExternalAccount;
-(void)setFamilySettings:(id)arg1 ;
-(id)familySettings;
-(char)hasMSXSettings;
-(char)deleteMSXSettings;
-(void)setMCXFlags:(id)arg1 ;
-(void)familySettingsDidChangeExternally;
-(void)enableUserWithPassword:(id)arg1 ;
-(void)disableUser;
-(void)setGeneratedUID:(id)arg1 ;
-(void)setGuestUser:(char)arg1 ;
-(void)setDefaultLanguage:(id)arg1 immideately:(char)arg2 ;
-(id)defaultPortableUserHomeDirectoryOnVolume:(id)arg1 ;
-(id)portableUserVolume;
-(id)homeLocURLString;
-(id)defaultEncryptedDiskImagePath;
-(void)setEncryptedDiskImagePath:(id)arg1 ;
-(id)AFPHomeDirURL;
-(void)setPortableUserVolume:(id)arg1 ;
-(id)pathToProxyFile;
-(void)setEncryptedHomeVolumeUUID:(id)arg1 ;
-(void)setHomeDirEncrypted:(char)arg1 ;
-(char)hasAFPHomeDir;
-(int)resetFileVaultPassword:(id)arg1 newPassword:(id)arg2 ;
-(id)SBSAccountName;
-(int)pairWithSBSAccount:(id)arg1 SBSPassword:(id)arg2 SBSNode:(id)arg3 password:(id)arg4 authorizationRef:(AuthorizationOpaqueRefRef)arg5 ;
-(int)unpairSBSAccountWithAuthorizationRef:(AuthorizationOpaqueRefRef)arg1 ;
-(id)linkedIdentityName;
-(long long)setLinkedIdentityName:(id)arg1 authorization:(id)arg2 ;
-(void)linkedIdentityNameDidChangeExternally;
-(char)userCanChangeLinkedIdentityName;
-(void)setUserCanChangeLinkedIdentityName:(char)arg1 ;
-(char)canUnlockFDE;
-(long long)prvisionForFDEAuthUser:(id)arg1 authPassword:(id)arg2 ;
-(void)wcSetNAPrivs:(id)arg1 ;
-(void)_cacheAttributes:(id)arg1 forKey:(id)arg2 ;
-(void)_removeCachedAttribute:(id)arg1 ;
-(id)_cachedObjectForKey:(id)arg1 ;
-(id)_authAuthorityDictForString:(id)arg1 ;
-(void)_removeAuthAuthority:(id)arg1 ;
-(id)defaultLanguage;
-(void)setShell:(id)arg1 ;
-(id)homeDirectory;
-(id)picturePath;
-(void)setPicturePath:(id)arg1 ;
-(id)picture;
-(void)setPicture:(id)arg1 ;
-(void)deauthenticate;
-(CSIdentityRef)identityRef;
-(id)groupName;
-(long long)setPassword:(id)arg1 oldPassword:(id)arg2 ;
-(char)isGuestUser;
-(char)isAppleIDLoginEnabled;
-(id)appleIDLoginAccount;
-(char)isIdentity;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(char)isHidden;
-(id)name;
-(long long)groupID;
-(void)setGroupID:(long long)arg1 ;
-(void)setPassword:(id)arg1 ;
-(id)fullName;
-(void)setFullName:(id)arg1 ;
-(char)isLocal;
@end

