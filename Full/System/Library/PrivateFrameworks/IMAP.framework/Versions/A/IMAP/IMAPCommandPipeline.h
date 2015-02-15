/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface IMAPCommandPipeline : NSObject {

	id _imapCommandPipelineLock;
	char _isSending;
	unsigned _chunkSize;
	unsigned _expectedSize;
	NSMutableArray* _fetchUnits;

}

@property (assign,nonatomic) unsigned chunkSize;                       //@synthesize chunkSize=_chunkSize - In the implementation block
@property (assign,nonatomic) unsigned expectedSize;                    //@synthesize expectedSize=_expectedSize - In the implementation block
@property (assign,nonatomic) char isSending;                           //@synthesize isSending=_isSending - In the implementation block
@property (nonatomic,readonly) char isFull; 
@property (nonatomic,retain) NSMutableArray * fetchUnits;              //@synthesize fetchUnits=_fetchUnits - In the implementation block
-(void)setExpectedSize:(unsigned)arg1 ;
-(void)setChunkSize:(unsigned)arg1 ;
-(unsigned)chunkSize;
-(id)imapCommandPipelineLock;
-(char)isFull;
-(id)failureResponsesFromSendingCommandsWithGateway:(id)arg1 responseHandler:(id)arg2 highPriority:(char)arg3 ;
-(id)init;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned)expectedSize;
-(NSMutableArray *)fetchUnits;
-(char)isSending;
-(void)setFetchUnits:(NSMutableArray *)arg1 ;
-(id)_newOperationsAssigningResponseHandler:(id)arg1 ;
-(void)_removeFetchUnitMatchingResponse:(id)arg1 ;
-(void)setIsSending:(char)arg1 ;
-(void)addFetchCommandForUid:(unsigned)arg1 fetchItem:(id)arg2 expectedLength:(unsigned)arg3 ;
@end

