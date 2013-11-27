/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:43:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel;
@class ;

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel> {

	<TSUStreamReadChannel>* _readChannel;

}
-(void)readWithQueue:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)initWithReadChannel:(id)arg1 ;
-(BOOL)processData:(id*)arg1 isDone:(BOOL)arg2 queue:(id)arg3 handler:(/*^block*/ id)arg4 ;
-(id)uncompressDataFromSource:(SnappySource*)arg1 ;
-(id)uncompressData:(id)arg1 ;
-(void)close;
-(void).cxx_destruct;
@end
