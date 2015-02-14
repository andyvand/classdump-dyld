/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Suggestions/Suggestions-Structs.h>
@class NSArray, NSString, NSMutableDictionary;

@interface SGTSpotlightSuggesterReserved : NSObject {

	NSArray* attributeNames;
	NSString* baseQuery;
	dispatch_queue_sRef queryQueue;
	long long queryID;
	MDQueryRef query;
	MDQueryRef warmingQuery;
	dispatch_source_sRef warmingQueryTimer;
	NSArray* searchScope;
	NSArray* additionalAttributeNames;
	NSArray* sortingAttributeNames;
	NSMutableDictionary* shortNameToAttributes;
	dispatch_source_sRef fallbackTimer;
	char matchesFinderFilesOnly;
	char matchesSupportFiles;
	char runWarmingQuery;

}
-(void)finalize;
-(void)dealloc;
@end

