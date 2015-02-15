/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreFoundation/NSSecureCoding.h>

@class NSString, NSArray, NSLock, NSURLRequest, NSDictionary, NSError;

@interface SSDownloadAsset : NSObject <NSSecureCoding> {

	NSString* _downloadFileName;
	NSString* _downloadFolderName;
	long long _fileSize;
	NSString* _finalizedFileName;
	NSArray* _hashes;
	NSArray* _clearHashes;
	long long _numberOfBytesToHash;
	char _isExternal;
	NSLock* _lock;
	NSString* _processedPath;
	long long _type;
	long long _subType;
	NSURLRequest* _urlRequest;
	NSString* _customDownloadPath;
	char _useUniqueDownloadFolder;
	char _skipInstallPhase;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	char _deltaUpdateFailed;
	char _localDeltaUpdateFailed;
	NSDictionary* _deltaPackage;
	NSError* _localCachingError;
	long long _localFullPackageFailureCount;

}

@property (assign) long long type; 
@property (assign) long long subType;                                   //@synthesize subType=_subType - In the implementation block
@property (retain) NSURLRequest * URLRequest; 
@property (assign) long long fileSize;                                  //@synthesize fileSize=_fileSize - In the implementation block
@property (retain) NSString * customDownloadPath;                       //@synthesize customDownloadPath=_customDownloadPath - In the implementation block
@property (assign) char useUniqueDownloadFolder;                        //@synthesize useUniqueDownloadFolder=_useUniqueDownloadFolder - In the implementation block
@property (assign) char skipInstallPhase;                               //@synthesize skipInstallPhase=_skipInstallPhase - In the implementation block
@property (copy) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * bundleVersion;                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSDictionary * deltaPackage;                         //@synthesize deltaPackage=_deltaPackage - In the implementation block
@property (assign) char deltaUpdateFailed;                              //@synthesize deltaUpdateFailed=_deltaUpdateFailed - In the implementation block
@property (assign) char localDeltaUpdateFailed;                         //@synthesize localDeltaUpdateFailed=_localDeltaUpdateFailed - In the implementation block
@property (assign) long long localFullPackageFailureCount;              //@synthesize localFullPackageFailureCount=_localFullPackageFailureCount - In the implementation block
@property (retain) NSError * localCachingError;                         //@synthesize localCachingError=_localCachingError - In the implementation block
@property (retain) NSString * downloadFileName; 
@property (readonly) NSString * downloadPath; 
@property (retain) NSString * processedPath; 
@property (retain) NSString * finalizedFileName; 
@property (readonly) NSString * finalizedPath; 
@property (getter=isExternal) char external; 
@property (retain) NSArray * hashes; 
@property (retain) NSArray * clearHashes; 
@property (assign) long long numberOfBytesToHash; 
+(char)supportsSecureCoding;
+(id)assetWithURL:(id)arg1 type:(long long)arg2 ;
-(NSString *)downloadPath;
-(long long)subType;
-(void)setFileSize:(long long)arg1 ;
-(char)isExternal;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(long long)fileSize;
-(id)initWithURLRequest:(id)arg1 type:(long long)arg2 ;
-(NSString *)customDownloadPath;
-(char)useUniqueDownloadFolder;
-(id)downloadFolderName;
-(NSString *)downloadFileName;
-(NSString *)finalizedFileName;
-(NSURLRequest *)URLRequest;
-(void)setDownloadFileName:(NSString *)arg1 ;
-(void)setFinalizedFileName:(NSString *)arg1 ;
-(void)setDownloadFolderName:(id)arg1 ;
-(NSString *)finalizedPath;
-(NSArray *)hashes;
-(NSArray *)clearHashes;
-(long long)numberOfBytesToHash;
-(NSString *)processedPath;
-(void)setExternal:(char)arg1 ;
-(void)setHashes:(NSArray *)arg1 ;
-(void)setClearHashes:(NSArray *)arg1 ;
-(void)setLocalFileNameFromBase:(id)arg1 ;
-(void)setNumberOfBytesToHash:(long long)arg1 ;
-(void)setProcessedPath:(NSString *)arg1 ;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
-(void)setCustomDownloadPath:(NSString *)arg1 ;
-(void)setUseUniqueDownloadFolder:(char)arg1 ;
-(char)skipInstallPhase;
-(void)setSkipInstallPhase:(char)arg1 ;
-(NSDictionary *)deltaPackage;
-(void)setDeltaPackage:(NSDictionary *)arg1 ;
-(char)deltaUpdateFailed;
-(void)setDeltaUpdateFailed:(char)arg1 ;
-(char)localDeltaUpdateFailed;
-(void)setLocalDeltaUpdateFailed:(char)arg1 ;
-(long long)localFullPackageFailureCount;
-(void)setLocalFullPackageFailureCount:(long long)arg1 ;
-(NSError *)localCachingError;
-(void)setLocalCachingError:(NSError *)arg1 ;
-(void)setSubType:(long long)arg1 ;
@end

