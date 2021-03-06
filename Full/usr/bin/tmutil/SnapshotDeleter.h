/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:55:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/bin/tmutil
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface SnapshotDeleter : NSObject {

	NSArray* _snapshots;
	/*^block*/id _cancelBlock;
	/*^block*/id _prologueBlock;
	/*^block*/id _epilogueBlock;
	/*^block*/id _errorBlock;
	unsigned long long _totalBytesDeleted;

}

@property (readonly) NSArray * snapshots;                               //@synthesize snapshots=_snapshots - In the implementation block
@property (copy) id cancelBlock;                                        //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (copy) id prologueBlock;                                      //@synthesize prologueBlock=_prologueBlock - In the implementation block
@property (copy) id epilogueBlock;                                      //@synthesize epilogueBlock=_epilogueBlock - In the implementation block
@property (copy) id errorBlock;                                         //@synthesize errorBlock=_errorBlock - In the implementation block
@property (readonly) unsigned long long totalBytesDeleted;              //@synthesize totalBytesDeleted=_totalBytesDeleted - In the implementation block
-(NSArray *)snapshots;
-(id)initWithSnapshots:(id)arg1 ;
-(void)setCancelBlock:(id)arg1 ;
-(void)setPrologueBlock:(id)arg1 ;
-(void)setEpilogueBlock:(id)arg1 ;
-(char)deleteSnapshots;
-(unsigned long long)totalBytesDeleted;
-(id)cancelBlock;
-(id)prologueBlock;
-(id)epilogueBlock;
-(id)errorBlock;
-(void)setErrorBlock:(id)arg1 ;
-(void)dealloc;
@end

