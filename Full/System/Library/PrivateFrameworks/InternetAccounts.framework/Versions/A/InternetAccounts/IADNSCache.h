/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSMutableDictionary;

@interface IADNSCache : NSObject {

	NSDate* _lastSyncDate;
	NSMutableDictionary* _cacheDict;

}

@property (retain) NSDate * lastSyncDate;              //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
+(id)shared;
-(id)resultForHost:(id)arg1 ;
-(void)cacheResult:(id)arg1 forHost:(id)arg2 ;
-(void)_delayedSync;
-(void)_sync;
-(id)init;
-(NSDate *)lastSyncDate;
-(void)setLastSyncDate:(NSDate *)arg1 ;
@end

