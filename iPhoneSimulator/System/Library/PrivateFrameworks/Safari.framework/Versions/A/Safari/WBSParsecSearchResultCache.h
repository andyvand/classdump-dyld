/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface WBSParsecSearchResultCache : NSObject {

	NSMutableDictionary* _resultSetCache;
	NSMutableDictionary* _resultCache;
	unsigned long long _cachedQueriesLimit;
	unsigned long long _cachedResultsLimit;

}

@property (nonatomic,readonly) NSArray * allCachedQueries; 
@property (nonatomic,readonly) NSArray * allCachedResultIdentifiers; 
-(id)resultForIdentifier:(id)arg1 ;
-(void)cacheResult:(id)arg1 ;
-(id)initWithCachedQueriesLimit:(unsigned long long)arg1 cachedResultsLimit:(unsigned long long)arg2 ;
-(void)cacheResultSet:(id)arg1 ;
-(id)resultSetForQuery:(id)arg1 ;
-(NSArray *)allCachedQueries;
-(NSArray *)allCachedResultIdentifiers;
@end

