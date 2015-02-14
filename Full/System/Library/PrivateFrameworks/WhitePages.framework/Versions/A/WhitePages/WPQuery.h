/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/WhitePages.framework/Versions/A/WhitePages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WhitePages/ODQueryDelegate.h>

@class WPSession, ODNode, WPWorkerAgent, CMManager, NSString, NSMutableArray, NSArray, NSMutableDictionary;

@interface WPQuery : NSObject <ODQueryDelegate> {

	char _WorkerAgentWantsMeToTakeAHike;
	WPSession* _WPSession;
	ODNode* _node;
	WPWorkerAgent* _workerAgent;
	CMManager* _cmManager;
	NSString* _sessionUID;
	NSMutableArray* _recordTypes;
	NSArray* _values;
	unsigned _matchType;
	NSArray* _attributesToBeSearched;
	NSMutableArray* _attributesToBeReturned;
	long long _max;
	NSMutableDictionary* _recordTypesForQueries;
	NSMutableDictionary* _records;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanAllIVars;
-(id)convertODRecords:(id)arg1 toWPRecordsUsingRecordType:(id)arg2 ;
-(id)convertODRecords:(id)arg1 toWPRecordsUsingClass:(Class)arg2 ;
-(void)query:(id)arg1 foundResults:(id)arg2 error:(id)arg3 ;
-(id)initWithWPSession:(id)arg1 workerAgent:(id)arg2 fullNodePath:(id)arg3 recordTypes:(id)arg4 queryValues:(id)arg5 attributesToBeSearched:(id)arg6 matchType:(unsigned)arg7 attributesToBeReturned:(id)arg8 maxResults:(long long)arg9 sessionUID:(id)arg10 ;
-(id)sessionUID;
-(void)dealloc;
-(void)start;
-(void)cancel;
@end

