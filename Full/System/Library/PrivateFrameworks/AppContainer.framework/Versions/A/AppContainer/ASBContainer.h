/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, ASBContainerACL, NSURL, NSData, NSDictionary;

@interface ASBContainer : NSObject {

	NSString* _homeDirPath;
	NSString* _containerPath;
	NSString* _metadataPath;
	NSString* _dataPath;
	NSMutableDictionary* _metadata;
	ASBContainerACL* _acl;

}

@property (readonly) unsigned long long version; 
@property (readonly) NSURL * baseURL; 
@property (readonly) NSURL * dataURL; 
@property (readonly) NSData * sandboxProfileData; 
@property (readonly) NSDictionary * sandboxProfileDataValidationInfo; 
+(unsigned long long)currentVersion;
+(id)containerURLForAppSigningId:(id)arg1 ;
+(void)_setUserHomeDirectory:(id)arg1 ;
+(id)_userHomeDirectory:(id*)arg1 ;
+(id)containerIdentifierForAppSigningId:(id)arg1 ;
+(id)containerURLForCodeIdentity:(id)arg1 error:(id*)arg2 ;
+(id)containerURLForApplicationAtURL:(id)arg1 error:(id*)arg2 ;
+(id)sanitizedPath:(id)arg1 ;
+(id)containerURLForCodeIdentity:(id)arg1 ;
+(id)containerURLForApplicationAtURL:(id)arg1 ;
+(id)containerWithURL:(id)arg1 error:(id*)arg2 ;
+(id)containerForAppSigningId:(id)arg1 error:(id*)arg2 ;
+(id)containerForCodeIdentity:(id)arg1 error:(id*)arg2 ;
+(id)containerForApplicationAtURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithPath:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)version;
-(NSURL *)baseURL;
-(id)initWithAppSigningId:(id)arg1 error:(id*)arg2 ;
-(id)initWithCodeIdentity:(id)arg1 error:(id*)arg2 ;
-(id)initWithApplicationAtURL:(id)arg1 error:(id*)arg2 ;
-(char)tryLoadVersionedContainer:(id*)arg1 ;
-(char)tryLoadOldContainer:(id*)arg1 ;
-(char)setError:(id*)arg1 message:(id)arg2 forPath:(id)arg3 withDomain:(id)arg4 code:(long long)arg5 ;
-(id)userHomeDirectory:(id*)arg1 ;
-(NSURL *)dataURL;
-(id)rebasedFileURL:(id)arg1 ;
-(void)resetVersion;
-(char)hasLatestSchema;
-(id)requirementACL;
-(id)archivedFilesMatchingPath:(id)arg1 error:(id*)arg2 ;
-(NSData *)sandboxProfileData;
-(NSDictionary *)sandboxProfileDataValidationInfo;
@end

