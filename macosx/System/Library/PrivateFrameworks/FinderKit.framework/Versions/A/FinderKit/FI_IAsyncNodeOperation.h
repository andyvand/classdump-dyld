/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IAsyncNodeOperationDelegateProtocol;
#import <FinderKit/FinderKit-Structs.h>
@interface FI_IAsyncNodeOperation : NSObject {

	OpaqueOperationRefRef _operationRef;
	OperationMonitor* _operationMonitor;
	vector<TOperationRecord, std::__1::allocator<TOperationRecord> >* _operationRecordList;
	TFENodeVector* _nodes;
	TAsyncNodeOperationAssistant* _operationAssistant;
	OperationIterator* _operationIterator;
	wrap_iter<TOperationRecord *>* _operationRecordIter;
	OperationStatus _status;
	id<IAsyncNodeOperationDelegateProtocol> _delegate;
	unsigned _respondsToFlags;
	unsigned _options;

}

@property (assign,nonatomic) id<IAsyncNodeOperationDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned options;                                                        //@synthesize options=_options - In the implementation block
+(id)operationWithNodes:(const TFENodeVector*)arg1 ;
+(void)initialize;
-(id)initWithNodes:(const TFENodeVector*)arg1 ;
-(int)startOperation;
-(int)cancelOperation;
-(void)configureOperationRecord:(TOperationRecord*)arg1 forIndex:(unsigned long long)arg2 ;
-(void)configureOperationRecord:(TOperationRecord*)arg1 forNode:(const TFENode*)arg2 ;
-(void)configureForNodes:(const TFENodeVector*)arg1 ;
-(int)handleSuboperationCompleted:(unsigned)arg1 targetNode:(const TFENode*)arg2 ;
-(int)handleStatusNotification:(const OperationMonitor*)arg1 ;
-(int)handleCompletedNotification;
-(int)handleSuboperationStarted:(unsigned)arg1 ;
-(int)handleErrorNotification:(const OperationMonitor*)arg1 error:(const OperationErrorRecord*)arg2 ;
-(OperationRecord*)operationIterFirst;
-(OperationRecord*)operationIterNext;
-(void)resetOperationRecordIter;
-(int)cancelCurrentSuboperation;
-(void)setDelegate:(id<IAsyncNodeOperationDelegateProtocol>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id<IAsyncNodeOperationDelegateProtocol>)delegate;
-(unsigned)options;
-(void)setOptions:(unsigned)arg1 ;
-(const TFENodeVector*)nodes;
@end

