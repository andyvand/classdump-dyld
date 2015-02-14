/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface IKDatasourceDiffResult : NSObject {

	NSMutableIndexSet* indexesToAdd;
	NSMutableIndexSet* indexesToRemove;
	char _needToExchangeItems;
	long long* _oldIndexToNewIndex;
	long long* _newIndexToOldIndex;
	int _indexBufferLength;

}
-(id)indexesToAdd;
-(id)indexesToRemove;
-(long long)oldIndexOfNewIndex:(long long)arg1 ;
-(char)noDifference;
-(long long)newIndexOfOldIndex:(long long)arg1 ;
-(void)allocIndexesBuffers:(int)arg1 ;
-(void)addAddOperationWithIndex:(long long)arg1 ;
-(void)addMoveOperationFrom:(long long)arg1 to:(long long)arg2 ;
-(void)addRemoveOperationWithIndex:(long long)arg1 ;
-(void)setNeedToExchangeItems:(char)arg1 ;
-(char)needToExchangeItems;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end

