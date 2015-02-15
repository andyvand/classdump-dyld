/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppContainer/ASBContainer.h>

@class CodeIdentity, NSString, NSURL;

@interface ASBMutableContainer : ASBContainer {

	CodeIdentity* _owner;
	char _created;
	NSString* _backupPath;

}

@property (readonly) NSString * containerIdentifier; 
@property (readonly) NSURL * backupURL; 
@property (readonly) CodeIdentity * ownerCode;                    //@synthesize owner=_owner - In the implementation block
@property (readonly) char isNewlyCreatedContainer;                //@synthesize created=_created - In the implementation block
+(id)containerWithURL:(id)arg1 error:(id*)arg2 ;
+(id)containerForCodeIdentity:(id)arg1 error:(id*)arg2 ;
+(id)containerForApplicationAtURL:(id)arg1 error:(id*)arg2 ;
+(id)containerForCodeIdentity:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)containerForApplicationAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(void)synchronizedContainerForCodeIdentity:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(char)saveAndReturnError:(id*)arg1 ;
-(NSString *)containerIdentifier;
-(void)dealloc;
-(id)initWithCodeIdentity:(id)arg1 error:(id*)arg2 ;
-(CodeIdentity *)ownerCode;
-(char)backupFile:(id)arg1 usingFileManager:(id)arg2 error:(id*)arg3 ;
-(char)restoreFile:(id)arg1 usingFileManager:(id)arg2 error:(id*)arg3 ;
-(id)initWithCodeIdentity:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithApplicationAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(char)upgradeAndReturnError:(id*)arg1 ;
-(char)migrateAndIgnoreActionFailures:(char)arg1 error:(id*)arg2 ;
-(id)initWithNewContainerForCodeIdentity:(id)arg1 ignoringMigrationFailures:(char)arg2 error:(id*)arg3 ;
-(char)preferenceDomain:(id)arg1 requiresMigration:(char*)arg2 error:(id*)arg3 ;
-(id)initWithPath:(id)arg1 codeIdentity:(id)arg2 error:(id*)arg3 ;
-(void)setRequirementACL:(id)arg1 ;
-(NSURL *)backupURL;
-(void)setSandboxProfileData:(id)arg1 ;
-(void)setSandboxProfileDataValidationInfo:(id)arg1 ;
-(char)isNewlyCreatedContainer;
@end

