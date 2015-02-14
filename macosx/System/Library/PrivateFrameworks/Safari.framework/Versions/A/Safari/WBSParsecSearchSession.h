/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSParsecSearchSessionDelegate;
#import <Safari/Safari-Structs.h>
@class WBSParsecSearchClient, NSURLSession, NSMutableArray, NSMutableDictionary, WBSParsecSearchResultCache, WBSCompletionQuery;

@interface WBSParsecSearchSession : NSObject {

	WBSParsecSearchClient* _client;
	NSURLSession* _urlSession;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _sessionStartTimestamp;
	NSMutableArray* _feedbackActions;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _latestQueryTimestamp;
	double _minimumIntervalBetweenQueriesFromResponseHeaders;
	NSMutableDictionary* _resultSetPrefixCache;
	WBSParsecSearchResultCache* _searchResultCache;
	char _hasRespondedToCurrentQuery;
	char _valid;
	id<WBSParsecSearchSessionDelegate> _delegate;
	WBSCompletionQuery* _currentQuery;
	double _uiScale;

}

@property (assign,nonatomic,__weak) id<WBSParsecSearchSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WBSCompletionQuery * currentQuery;                               //@synthesize currentQuery=_currentQuery - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid;                                     //@synthesize valid=_valid - In the implementation block
@property (nonatomic,readonly) WBSParsecSearchClient * client;                                //@synthesize client=_client - In the implementation block
@property (assign,setter=setUIScale:,nonatomic) double uiScale;                               //@synthesize uiScale=_uiScale - In the implementation block
-(void)didDisplayCompletionListItems:(id)arg1 hidingParsecResult:(id)arg2 forQuery:(id)arg3 ;
-(void)userDidSelectCompletionListItem:(id)arg1 hidingParsecResult:(id)arg2 ;
-(void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 ;
-(void)setCurrentQuery:(WBSCompletionQuery *)arg1 ;
-(void)didReceiveLocalResultsForQuery:(id)arg1 ;
-(void)setUIScale:(double)arg1 ;
-(void)userDidCancelSession;
-(void)_sendWarmupRequest;
-(id)_searchURLForQuery:(id)arg1 ;
-(id)_urlSession;
-(double)_timeToFirstByteForDataTask:(id)arg1 ;
-(void)_generateSearchFeedbackForResponse:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 error:(id)arg4 ;
-(id)_searchFallbackURLForQuery:(id)arg1 ;
-(unsigned long long)_addFeedbackAction:(id)arg1 ;
-(void)_endSession;
-(void)userDidCancelSession:(long long)arg1 ;
-(void)_addParsecAndSearchSuggestionDeltaForQuery:(id)arg1 toFeedbackDictionary:(id)arg2 ;
-(id)_searchURLForQuery:(id)arg1 baseURL:(id)arg2 ;
-(void)_respondToCurrentQueryIfNeededWithResults:(id)arg1 ;
-(id)_cachedResultSetForQuery:(id)arg1 ;
-(void)_generateCachedSearchFeedbackForQuery:(id)arg1 ;
-(void)_processBestResultSetOnMainThread:(id)arg1 forQuery:(id)arg2 ;
-(id)_searchRequestForQuery:(id)arg1 ;
-(char)_canSendQuery;
-(void)_searchRequestFailedForQuery:(id)arg1 ;
-(void)_processSearchResponseOnMainThread:(id)arg1 forQuery:(id)arg2 timeToFirstByte:(double)arg3 ;
-(void)_sendGeneratedFeedback;
-(void)_cacheResultSet:(id)arg1 ;
-(void)_cacheResultsFromSearchResponse:(id)arg1 ;
-(void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 ;
-(void)userDidSelectCompletionListItem:(id)arg1 ;
-(WBSCompletionQuery *)currentQuery;
-(double)uiScale;
-(void)setDelegate:(id<WBSParsecSearchSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<WBSParsecSearchSessionDelegate>)delegate;
-(void)_invalidate;
-(char)isValid;
-(WBSParsecSearchClient *)client;
-(id)initWithClient:(id)arg1 ;
@end

