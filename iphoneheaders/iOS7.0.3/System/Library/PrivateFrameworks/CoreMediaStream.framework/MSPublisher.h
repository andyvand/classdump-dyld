/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MSCupidStateMachine.h>
#import <CoreMediaStream/MSPublisher.h>

@protocol MSPublisher <NSObject>
@property (assign,nonatomic) <MSPublisherDelegate> * delegate; 
@property (assign,nonatomic) int publishBatchSize; 
@required
-(void)publish;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(void)stop;
-(void)reenqueueQuarantinedAssetCollections;
-(void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
-(void)submitAssetCollectionsForPublication:(id)arg1;
-(int)publishBatchSize;
-(void)setPublishBatchSize:(int)arg1;
-(void)abort;
@end

#import <CoreMediaStream/MSPublishStreamsProtocolDelegate.h>
#import <CoreMediaStream/MSPublishStorageProtocolDelegate.h>

@protocol MSPublisherDelegate, MSPublishStorageProtocol;
@class , MSMediaStreamDaemon, MSObjectQueue, NSArray, NSMutableArray, NSMutableDictionary, MSPublishStreamsProtocol, NSURL;

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate> {

	<MSPublisherDelegate>* _delegate;
	MSMediaStreamDaemon* _daemon;
	int _state;
	MSObjectQueue* _uploadQueue;
	MSObjectQueue* _derivativesQueue;
	MSObjectQueue* _quarantinedQueue;
	NSArray* _pendingDerivativesQueue;
	NSMutableArray* _requestAuthQueue;
	unsigned _sendingQueueCount;
	NSMutableArray* _sendingQueue;
	NSMutableDictionary* _fileHashToAssetMap;
	MSPublishStreamsProtocol* _protocol;
	<MSPublishStorageProtocol>* _storageProtocol;
	NSURL* _storageProtocolURL;
	NSMutableArray* _tempFiles;
	NSMutableDictionary* _maxSizeByUTI;
	long long _publishTargetByteCount;
	int _publishBatchSize;
	int _maxErrorCount;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                  //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSURL * storageProtocolURL;                    //@synthesize storageProtocolURL=_storageProtocolURL - In the implementation block
@property (assign,nonatomic) long long publishTargetByteCount;              //@synthesize publishTargetByteCount=_publishTargetByteCount - In the implementation block
@property (assign,nonatomic) int publishBatchSize;                          //@synthesize publishBatchSize=_publishBatchSize - In the implementation block
@property (assign,nonatomic) <MSPublisherDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)nextActivityDate;
+(id)personIDsWithOutstandingActivities;
+(BOOL)isInRetryState;
+(id)publisherForPersonID:(id)arg1 ;
+(id)existingPublisherForPersonID:(id)arg1 ;
+(void)stopAllActivities;
+(id)_clearInstantiatedPublishersByPersonID;
+(id)nextActivityDateForPersonID:(id)arg1 ;
+(void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
+(void)forgetPersonID:(id)arg1 ;
-(void)publish;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)deactivate;
-(void)stop;
-(int)_stop;
-(void)setDaemon:(id)arg1 ;
-(void)reenqueueQuarantinedAssetCollections;
-(BOOL)enqueueAssetCollections:(id)arg1 outError:(id*)arg2 ;
-(BOOL)dequeueAssetCollectionWithGUIDs:(id)arg1 outError:(id*)arg2 ;
-(void)computeHashForAsset:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)_isInRetryState;
-(void)_serverSideConfigurationDidChange:(id)arg1 ;
-(void)_refreshServerSideConfiguredParameters;
-(void)_updateMasterManifest;
-(void)_didFinishUsingAssetCollections:(id)arg1 ;
-(void)_registerAsset:(id)arg1 ;
-(BOOL)_verifyAssetFile:(id)arg1 ;
-(id)_collectionWithNoDerivatives:(id)arg1 ;
-(id)_checkAssetCollectionFiles:(id)arg1 ;
-(BOOL)_isAllowedToUpload;
-(void)_requestDerivatives;
-(void)_sendMetadataToStreams;
-(void)_sendFilesToMMCS;
-(void)_sendUploadComplete;
-(void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2 ;
-(int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2 ;
-(void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3 ;
-(void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1 ;
-(id)_checkObjectWrappers:(id)arg1 ;
-(void)_addAssetToFileHashMap:(id)arg1 ;
-(id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1 ;
-(void)setStorageProtocolURL:(id)arg1 ;
-(void)_quarantineOrDiscardWrappers:(id)arg1 withError:(id)arg2 ;
-(void)_categorizeError:(id)arg1 setOutIsIgnorable:(BOOL*)arg2 setOutIsCounted:(BOOL*)arg3 setOutIsFatal:(BOOL*)arg4 setOutNeedsBackoff:(BOOL*)arg5 setOutIsTemporary:(BOOL*)arg6 setOutIsTokenAuth:(BOOL*)arg7 setOutIsAuthError:(BOOL*)arg8 ;
-(void)_registerAllAssetsForWrapper:(id)arg1 ;
-(id)_abortedError;
-(void)_abort;
-(void)submitAssetCollectionsForPublication:(id)arg1 ;
-(int)publishBatchSize;
-(void)setPublishBatchSize:(int)arg1 ;
-(void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3 ;
-(void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2 ;
-(void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3 ;
-(void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1 ;
-(void)_removeAssetFromFileHashMap:(id)arg1 ;
-(void)_forget;
-(id)daemon;
-(id)storageProtocolURL;
-(long long)publishTargetByteCount;
-(void)setPublishTargetByteCount:(long long)arg1 ;
-(void)abort;
-(void).cxx_destruct;
@end
