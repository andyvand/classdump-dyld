/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVSubmittable.h>
#import <CoreDAV/CalExecutableTask.h>

@protocol CoreDAVTaskManager, CoreDAVAccountInfoProvider, CoreDAVResponseBodyParser, CoreDAVTaskDelegate;
@class NSError, NSHTTPURLResponse, NSURLConnection, NSURLRequest, NSDate, CoreDAVRequestLogger, NSURL, NSMutableDictionary, NSMutableArray, NSDictionary, NSData, CoreDAVErrorItem, NSString;

@interface CoreDAVTask : NSObject <CoreDAVSubmittable, CalExecutableTask> {

	id<CoreDAVTaskManager> _taskManager;
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;
	long long _numDownloadedElements;
	int _depth;
	NSHTTPURLResponse* _response;
	NSURLConnection* _connection;
	NSURLRequest* _request;
	double _timeoutInterval;
	long long _responseStatusCode;
	NSDate* _dateConnectionWentOut;
	char _didSendRequest;
	char _didFailWithError;
	char _didCancel;
	char _didReceiveResponse;
	char _didReceiveData;
	char _didFinishLoading;
	char _finished;
	id _context;
	char _receivedBadPasswordResponse;
	char _justTriedTokenAuth;
	char _everTriedTokenAuth;
	char _shouldRetryWithClientToken;
	char _didRetryWithClientToken;
	char _requestIsCompressed;
	char _compressedRequestFailed;
	NSError* _passwordNotificationError;
	id<CoreDAVResponseBodyParser> _responseBodyParser;
	CoreDAVRequestLogger* _logger;
	NSURL* _url;
	char _allowAutomaticRedirects;
	id<CoreDAVTaskDelegate> _delegate;
	/*^block*/id _requestProgressBlock;
	/*^block*/id _responseProgressBlock;
	/*^block*/id _completionBlock;
	NSError* _error;
	unsigned long long _totalBytesReceived;
	NSMutableDictionary* _overriddenHeaders;
	NSMutableArray* _redirectHistory;
	NSDictionary* _requestProperties;
	NSData* _fakeResponseData;
	char _haveParsedFakeResponseData;
	CoreDAVErrorItem* _forbiddenErrorItem;
	NSString* _uniqueID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id requestProgressBlock;                                           //@synthesize requestProgressBlock=_requestProgressBlock - In the implementation block
@property (nonatomic,copy) id responseProgressBlock;                                          //@synthesize responseProgressBlock=_responseProgressBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (getter=isFinished,nonatomic,readonly) char finished; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager;                              //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                                      //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) int depth;                                                       //@synthesize depth=_depth - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                          //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) char allowAutomaticRedirects;                                    //@synthesize allowAutomaticRedirects=_allowAutomaticRedirects - In the implementation block
@property (nonatomic,retain) id<CoreDAVResponseBodyParser> responseBodyParser;                //@synthesize responseBodyParser=_responseBodyParser - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaders; 
@property (assign,nonatomic) long long responseStatusCode;                                    //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * requestProperties;                                //@synthesize requestProperties=_requestProperties - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytesReceived;                           //@synthesize totalBytesReceived=_totalBytesReceived - In the implementation block
+(unsigned)uniqueQueryID;
+(id)stringFromDepth:(int)arg1 ;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(void)performTask;
-(void)finishWithError:(id)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(unsigned long long)cachePolicy;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(char)markAsFinished;
-(char)validate:(id*)arg1 ;
-(void)setDepth:(int)arg1 ;
-(void)setTotalBytesReceived:(unsigned long long)arg1 ;
-(unsigned long long)totalBytesReceived;
-(void)setDelegate:(id<CoreDAVTaskDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)context;
-(NSURL *)url;
-(id<CoreDAVTaskDelegate>)delegate;
-(void)reset;
-(char)isFinished;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
-(int)depth;
-(id)completionBlock;
-(void)setAccountInfoProvider:(id<CoreDAVAccountInfoProvider>)arg1 ;
-(id<CoreDAVTaskManager>)taskManager;
-(void)setTaskManager:(id<CoreDAVTaskManager>)arg1 ;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(NSDictionary *)responseHeaders;
-(long long)responseStatusCode;
-(id)additionalHeaderValues;
-(void)startModal;
-(void)performCoreDAVTask;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)lastRedirectURL;
-(void)overrideRequestHeader:(id)arg1 withValue:(id)arg2 ;
-(id<CoreDAVResponseBodyParser>)responseBodyParser;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(char)connectionShouldUseCredentialStorage:(id)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)setContext:(id)arg1 ;
-(void)submitWithTaskManager:(id)arg1 ;
-(void)finishEarlyWithError:(id)arg1 ;
-(id)httpMethod;
-(id)requestBody;
-(void)setAllowAutomaticRedirects:(char)arg1 ;
-(id)requestBodyStream;
-(id)_connectionForLogging;
-(id)_requestForLogging;
-(void)tearDownResources;
-(void)setResponseBodyParser:(id<CoreDAVResponseBodyParser>)arg1 ;
-(id)_compressBodyData:(id)arg1 ;
-(void)_failImmediately;
-(id)_createBodyData;
-(char)_includeGeneralHeaders;
-(id)_applyAuthenticationChain:(CFArrayRef)arg1 toRequest:(id)arg2 ;
-(id)_applyStorageSession:(CFURLStorageSessionRef)arg1 toRequest:(id)arg2 ;
-(void)reportStatusWithError:(id)arg1 ;
-(void)setRequestProgressBlock:(id)arg1 ;
-(void)setResponseProgressBlock:(id)arg1 ;
-(void)_sendTimeSpentInNetworkingToProvider;
-(void)handleWebLoginRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)requestProgressBlock;
-(id)responseProgressBlock;
-(char)shouldLogResponseBody;
-(char)_shouldHandleStatusCode:(long long)arg1 ;
-(char)allowAutomaticRedirects;
-(id)credentialForOAuthChallenge:(id)arg1 ;
-(void)setResponseStatusCode:(long long)arg1 ;
-(void)_handleBadPasswordResponse;
-(long long)numDownloadedElements;
-(NSDictionary *)requestProperties;
-(void)setRequestProperties:(NSDictionary *)arg1 ;
@end

