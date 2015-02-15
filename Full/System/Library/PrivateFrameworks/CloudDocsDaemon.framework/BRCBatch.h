/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, CKDatabaseOperation;

@interface BRCBatch : NSObject {

	NSArray* _operations;
	CKDatabaseOperation* _batchOperation;

}

@property (nonatomic,retain) NSArray * operations;                              //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) CKDatabaseOperation * batchOperation;              //@synthesize batchOperation=_batchOperation - In the implementation block
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) unsigned long long transferredSize; 
-(CKDatabaseOperation *)batchOperation;
-(void)cancelIfNeeded;
-(unsigned long long)transferredSize;
-(void)setBatchOperation:(CKDatabaseOperation *)arg1 ;
-(void)setOperations:(NSArray *)arg1 ;
-(id)description;
-(unsigned long long)size;
-(NSArray *)operations;
@end
