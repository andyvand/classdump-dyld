/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Suggestions/Suggestions-Structs.h>
@class NSMutableArray, NSString, NSUserDefaults;

@interface SGTRecentsSuggesterReserved : NSObject {

	NSMutableArray* recentSuggestions;
	NSMutableArray* recentSuggestionValues;
	dispatch_queue_sRef queue;
	long long searchID;
	NSString* saveName;
	long long maxRecents;
	NSUserDefaults* defaults;
	char global;
	char isSaving;

}
-(void)finalize;
-(void)dealloc;
@end

