/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableIndexSet;

@interface AVDataPool : NSObject {

	NSMutableArray* _backingDataArray;
	unsigned long long _lengthPerBackingData;
	unsigned long long _countPerBackingData;
	unsigned long long _lengthPerDataObject;
	NSMutableIndexSet* _unusedIndexes;
	int _poolLock;

}

@property (readonly) unsigned long long lengthPerDataObject;              //@synthesize lengthPerDataObject=_lengthPerDataObject - In the implementation block
-(id)initWithInitialCapacity:(unsigned long long)arg1 lengthPerDataObject:(unsigned long long)arg2 ;
-(id)dataFromPool;
-(void)reclaimIndex:(unsigned long long)arg1 ;
-(unsigned long long)lengthPerDataObject;
-(void*)mutableBytesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentCapacity;
-(id)init;
@end

