/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PackageKit/PackageKit-Structs.h>
@class NSMutableDictionary, NSString, NSArray, NSError;

@interface PKPayloadCopier : NSObject {

	void* _bomCopier;
	void* _bomSys;
	NSMutableDictionary* _bomCopierOptions;
	NSString* _sourcePath;
	unsigned long long _offset;
	NSString* _destinationPath;
	char _isDestinationArchive;
	unsigned long long _payloadFormat;
	unsigned long long _payloadSize;
	NSArray* _maskPaths;
	/*^block*/id _itemWillCopyHandler;
	/*^block*/id _itemCopiedHandler;
	dispatch_queue_sRef _itemCopiedQueue;
	unsigned long long _fullCompleteBytes;
	unsigned long long _fullCompleteCount;
	long long _partialFileLength;
	dispatch_queue_sRef _updateQueue;
	char _isExecuting;
	char _didCancel;
	NSError* _error;

}
+(id)_defaultBomCopierOptions;
+(id)_defaultBomCopierOptionsForExtraction;
+(id)_defaultBomCopierOptionsForArchiving;
-(char)isExecuting;
-(id)initWithArchivePath:(id)arg1 offset:(unsigned long long)arg2 destination:(id)arg3 ;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(id)initWithRootPath:(id)arg1 destination:(id)arg2 ;
-(id)initWithRootPath:(id)arg1 destinationArchive:(id)arg2 ;
-(void)setIndexBomPath:(id)arg1 ;
-(void)setCopiesOwnershipFromIndexBom:(char)arg1 ;
-(void)setPreservesExtAttrs:(char)arg1 ;
-(void)setPreservesACLs:(char)arg1 ;
-(unsigned long long)writtenBytesComplete;
-(void)setHFSPlusCompressionEnabled:(char)arg1 withBackwardsIncompatibleFormat:(char)arg2 ;
-(void)setMaskPaths:(id)arg1 ;
-(id)_initWithSourcePath:(id)arg1 offset:(unsigned long long)arg2 destination:(id)arg3 ;
-(void)_extractMain:(id)arg1 ;
-(char)_hasLZMABlockCompressedCPIOArchiveWithError:(id*)arg1 ;
-(id)_startLZMABlockCompressorAndSignalWhenDone:(dispatch_semaphore_sRef)arg1 ;
-(void)setPreservesSourceParentName:(char)arg1 ;
-(void)setCopiesQuarantine:(char)arg1 ;
-(void)setItemCopiedHandlerOnQueue:(dispatch_queue_sRef)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)setItemWillCopyHandlerWithBlock:(/*^block*/id)arg1 ;
-(void)setPayloadFormat:(unsigned long long)arg1 ;
-(unsigned long long)itemsComplete;
-(void)_setError:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)start;
-(void)cancel;
-(void)run;
-(id)error;
@end

