/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:50 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PSFeedURLUtils : NSObject
+(id)sourceURLForFeedURL:(id)arg1 ;
+(char)_webIsFeedProtocolURL:(id)arg1 ;
+(char)_webIsFeedsProtocolURL:(id)arg1 ;
+(char)isKnownURL:(id)arg1 ;
+(id)feedURLForSourceURL:(id)arg1 ;
+(id)aggregateFeedURLForURLs:(id)arg1 named:(id)arg2 UUID:(id)arg3 filter:(id)arg4 ;
+(id)unfilteredAggregateURL:(id)arg1 ;
+(id)unfilteredAggregateURLString:(id)arg1 ;
+(id)parseAggregateFeedURL:(id)arg1 name:(id*)arg2 UUID:(id*)arg3 filter:(id*)arg4 ;
@end
