/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel, OS_dispatch_queue;
@class , SFUCryptoKey, NSObject;

@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel> {

	<TSUStreamReadChannel>* _readChannel;
	SFUCryptoKey* _encryptionKey;
	NSObject<OS_dispatch_queue>* _readQueue;

}
-(void)readWithQueue:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 encryptionKey:(id)arg3 ;
-(void)close;
-(void).cxx_destruct;
@end
