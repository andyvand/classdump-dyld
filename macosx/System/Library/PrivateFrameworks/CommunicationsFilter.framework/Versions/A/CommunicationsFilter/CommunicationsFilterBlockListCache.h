/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/Versions/A/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {

	NSMutableArray* _recentItems;
	int _notifyEmptyListToken;
	char _listIsEmpty;

}
-(void)_blockListChanged:(id)arg1 ;
-(void)syncListEmptyState;
-(long long)cachedResponseForItem:(id)arg1 ;
-(void)removeItemFromCache:(id)arg1 ;
-(void)setResponse:(char)arg1 forItem:(id)arg2 ;
-(id)init;
@end
