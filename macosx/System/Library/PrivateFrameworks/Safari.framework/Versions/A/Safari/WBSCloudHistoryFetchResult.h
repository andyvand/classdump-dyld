/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSData, NSArray;

@interface WBSCloudHistoryFetchResult : NSObject {

	NSMutableArray* _mutableCloudHistoryVisits;
	NSMutableArray* _mutableHistoryTombstones;
	NSData* _serverChangeTokenData;

}

@property (nonatomic,readonly) NSArray * cloudHistoryVisits; 
@property (nonatomic,readonly) NSArray * historyTombstones; 
@property (nonatomic,readonly) NSData * serverChangeTokenData;              //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
-(void)_setServerChangeTokenData:(id)arg1 ;
-(NSData *)serverChangeTokenData;
-(NSArray *)cloudHistoryVisits;
-(void)_addCloudHistoryVisit:(id)arg1 ;
-(NSArray *)historyTombstones;
-(void)_addHistoryTombstone:(id)arg1 ;
-(id)init;
-(id)description;
@end

