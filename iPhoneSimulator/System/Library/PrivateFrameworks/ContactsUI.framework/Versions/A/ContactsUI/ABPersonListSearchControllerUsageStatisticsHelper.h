/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABPersonListSearchController;

@interface ABPersonListSearchControllerUsageStatisticsHelper : NSObject {

	unsigned long long _lastSearchStringLength;
	ABPersonListSearchController* _searchController;

}

@property (assign) unsigned long long lastSearchStringLength;                    //@synthesize lastSearchStringLength=_lastSearchStringLength - In the implementation block
@property (__weak) ABPersonListSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
+(id)helperWithSearchController:(id)arg1 ;
-(char)shouldTraceString:(id)arg1 ;
-(void)setLastSearchStringLength:(unsigned long long)arg1 ;
-(unsigned long long)lastSearchStringLength;
-(void)searchConfiguration:(id)arg1 willSearchForString:(id)arg2 ;
-(ABPersonListSearchController *)searchController;
-(void)setSearchController:(ABPersonListSearchController *)arg1 ;
@end

