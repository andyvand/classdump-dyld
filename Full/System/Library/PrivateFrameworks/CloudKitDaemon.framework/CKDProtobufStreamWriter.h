/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/NSStreamDelegate.h>

@protocol OS_dispatch_queue, CKDProtobufMessageSigningDelegate;
@class NSMutableArray, NSData, NSInputStream, NSOutputStream, NSObject, NSFileHandle, NSString;

@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate> {

	NSMutableArray* _allObjects;
	NSData* _curData;
	unsigned long long _curDataPos;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	z_stream_s* _zlibStream;
	char _haveFlushedZlib;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _shouldCompress;
	char _haveFinishedCompression;
	char _haveFinishedStreaming;
	unsigned long long _bufferSize;
	id<CKDProtobufMessageSigningDelegate> _signingDelegate;
	NSFileHandle* _humanLogFileHandle;
	NSFileHandle* _binaryLogFileHandle;

}

@property (nonatomic,readonly) NSInputStream * inputStream;                                             //@synthesize inputStream=_inputStream - In the implementation block
@property (assign,nonatomic) char shouldCompress;                                                       //@synthesize shouldCompress=_shouldCompress - In the implementation block
@property (assign,nonatomic) unsigned long long bufferSize;                                             //@synthesize bufferSize=_bufferSize - In the implementation block
@property (assign,nonatomic,__weak) id<CKDProtobufMessageSigningDelegate> signingDelegate;              //@synthesize signingDelegate=_signingDelegate - In the implementation block
@property (nonatomic,retain) NSFileHandle * humanLogFileHandle;                                         //@synthesize humanLogFileHandle=_humanLogFileHandle - In the implementation block
@property (nonatomic,retain) NSFileHandle * binaryLogFileHandle;                                        //@synthesize binaryLogFileHandle=_binaryLogFileHandle - In the implementation block
@property (assign,nonatomic) char haveFinishedCompression;                                              //@synthesize haveFinishedCompression=_haveFinishedCompression - In the implementation block
@property (assign,nonatomic) char haveFinishedStreaming;                                                //@synthesize haveFinishedStreaming=_haveFinishedStreaming - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStreamedObjects:(id)arg1 ;
-(id)initWithCompression:(char)arg1 ;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(void)setSigningDelegate:(id<CKDProtobufMessageSigningDelegate>)arg1 ;
-(void)setHumanLogFileHandle:(NSFileHandle *)arg1 ;
-(void)setBinaryLogFileHandle:(NSFileHandle *)arg1 ;
-(char)haveFinishedStreaming;
-(void)setHaveFinishedStreaming:(char)arg1 ;
-(char)shouldCompress;
-(void)_tearDownOutputStream;
-(char)haveFinishedCompression;
-(void)setHaveFinishedCompression:(char)arg1 ;
-(id)_compressBodyData:(id)arg1 shouldFlush:(char)arg2 ;
-(long long)_streamNextObject:(id)arg1 ;
-(id<CKDProtobufMessageSigningDelegate>)signingDelegate;
-(id)_dataForMessage:(id)arg1 ;
-(NSFileHandle *)humanLogFileHandle;
-(NSFileHandle *)binaryLogFileHandle;
-(id)_prepareMescalSignature:(id)arg1 ;
-(void)_prepareObjectForStreaming:(id)arg1 shouldSign:(char)arg2 ;
-(long long)_writeDataToStream:(id)arg1 ;
-(char)_finishStreaming:(id)arg1 ;
-(void)setShouldCompress:(char)arg1 ;
-(unsigned long long)bufferSize;
-(NSInputStream *)inputStream;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)open;
@end
