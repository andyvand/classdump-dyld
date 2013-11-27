/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray;

@interface YTSubscriptionsRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _subscriptions;
	int _mode;
	int _startIndex;
	int _totalResults;
	int _resultsPerPage;

}
+(unsigned)resultsPerRequest;
+(id)displayStringForSubscription:(id)arg1 ;
+(BOOL)isSubscription:(id)arg1 channelOfUser:(id)arg2 ;
+(id)URLForSubscription:(id)arg1 ;
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)didAuthenticate:(id)arg1 ;
-(void)_doRequestWithURL:(id)arg1 ;
-(void)requestUserSubscriptionsFromIndex:(unsigned)arg1 maxResults:(unsigned)arg2 ;
-(void)requestUserPlaylistsFromIndex:(unsigned)arg1 maxResults:(unsigned)arg2 ;
-(void)requestPlaylistsFromIndex:(unsigned)arg1 maxResults:(unsigned)arg2 searchTerm:(id)arg3 ;
-(void)createPlaylistNamed:(id)arg1 ;
-(void)subscribeToUser:(id)arg1 ;
@end
