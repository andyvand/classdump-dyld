/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/Versions/A/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
#import <ProtocolBuffer/NSURLConnectionDelegate.h>

@protocol PBRequesterDelegate;
@class NSURL, NSURLConnection, NSRunLoop, NSThread, NSMutableData, PBDataReader, NSMutableArray, NSDictionary, NSMutableDictionary, NSString, NSArray;

@interface PBRequester : NSObject <NSURLConnectionDelegate> {

	NSURL* _URL;
	id<PBRequesterDelegate> _delegate;
	NSURLConnection* _connection;
	NSRunLoop* _connectionRunLoop;
	NSThread* _startThread;
	NSMutableData* _data;
	PBDataReader* _dataReader;
	unsigned long long _lastGoodDataOffset;
	unsigned long long _uploadPayloadSize;
	unsigned long long _downloadPayloadSize;
	unsigned long long _timeRequestSent;
	unsigned long long _timeResponseReceived;
	long long _responseStatusCode;
	NSMutableArray* _requests;
	NSMutableArray* _responses;
	NSMutableArray* _internalRequests;
	NSMutableArray* _internalResponses;
	NSDictionary* _httpResponseHeaders;
	NSMutableDictionary* _httpRequestHeaders;
	double _timeoutSeconds;
	CFRunLoopTimerRef _timeoutTimer;
	NSString* _logRequestToFile;
	NSString* _logResponseToFile;
	char _didNotifyRequestCompleted;
	NSArray* _clientCertificates;
	NSDictionary* _connectionProperties;
	char _shouldHandleCookies;
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	}  _flags;

}

@property (nonatomic,retain) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) id<PBRequesterDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSRunLoop * connectionRunLoop;                         //@synthesize connectionRunLoop=_connectionRunLoop - In the implementation block
@property (assign,nonatomic) char ignoresResponse; 
@property (nonatomic,retain) NSString * logRequestToFile;                           //@synthesize logRequestToFile=_logRequestToFile - In the implementation block
@property (nonatomic,retain) NSString * logResponseToFile;                          //@synthesize logResponseToFile=_logResponseToFile - In the implementation block
@property (nonatomic,readonly) NSArray * requests; 
@property (nonatomic,readonly) unsigned long long uploadPayloadSize;                //@synthesize uploadPayloadSize=_uploadPayloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadPayloadSize;              //@synthesize downloadPayloadSize=_downloadPayloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long requestResponseTime; 
@property (assign,nonatomic) double timeoutSeconds;                                 //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,retain) NSArray * clientCertificates;                          //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSDictionary * httpRequestHeaders; 
@property (nonatomic,retain) NSDictionary * httpResponseHeaders;                    //@synthesize httpResponseHeaders=_httpResponseHeaders - In the implementation block
@property (assign,nonatomic) char shouldHandleCookies;                              //@synthesize shouldHandleCookies=_shouldHandleCookies - In the implementation block
@property (assign) char needsCancel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)usesEncodedMessages;
-(void)_scheduleThrottlingError;
-(void)_removeTimeoutTimer;
-(void)setHttpResponseHeaders:(NSDictionary *)arg1 ;
-(void)setNeedsCancel:(char)arg1 ;
-(NSDictionary *)httpRequestHeaders;
-(void)_startTimeoutTimer;
-(id)newConnectionWithCFURLRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 connectionProperties:(id)arg3 ;
-(void)writeRequest:(id)arg1 into:(id)arg2 ;
-(void)encodeRequestData:(id)arg1 startRequestCallback:(/*^block*/id)arg2 ;
-(char)_sendPayload:(id)arg1 error:(id*)arg2 ;
-(void)_serializePayload:(/*^block*/id)arg1 ;
-(void)_cancelNoNotify;
-(char)needsCancel;
-(void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3 ;
-(void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3 ;
-(void)cancelWithErrorCode:(long long)arg1 ;
-(id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3 ;
-(void)handleResponse:(id)arg1 forInternalRequest:(id)arg2 ;
-(void)_resetTimeoutTimer;
-(char)readResponsePreamble:(id)arg1 ;
-(char)_tryParseData;
-(id)decodeResponseData:(id)arg1 ;
-(id)_connectionRunLoop;
-(char)ignoresResponse;
-(void)setIgnoresResponse:(char)arg1 ;
-(void)clearRequests;
-(id)internalRequests;
-(void)addInternalRequest:(id)arg1 ;
-(id)responseForInternalRequest:(id)arg1 ;
-(void)setHttpRequestHeaders:(NSDictionary *)arg1 ;
-(void)_timeoutTimerFired;
-(NSRunLoop *)connectionRunLoop;
-(void)setConnectionRunLoop:(NSRunLoop *)arg1 ;
-(double)timeoutSeconds;
-(void)setLogRequestToFile:(NSString *)arg1 ;
-(void)setLogResponseToFile:(NSString *)arg1 ;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(NSArray *)arg1 ;
-(char)shouldHandleCookies;
-(void)setShouldHandleCookies:(char)arg1 ;
-(id)connection:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 properties:(id)arg3 ;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(void)addRequest:(id)arg1 ;
-(NSURLConnection *)connection;
-(id)responseForRequest:(id)arg1 ;
-(NSArray *)requests;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 ;
-(void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2 ;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(NSDictionary *)httpResponseHeaders;
-(void)setNeedsCancel;
-(void)startWithConnectionProperties:(id)arg1 ;
-(NSString *)logRequestToFile;
-(NSString *)logResponseToFile;
-(id)_languageLocale;
-(id)_applicationID;
-(id)_osVersion;
-(id)requestPreamble;
-(CFURLRequestRef)newCFMutableURLRequestWithURL:(id)arg1 ;
-(id)newConnectionWithCFURLRequest:(CFURLRequestRef)arg1 delegate:(id)arg2 ;
-(void)_logRequestsIfNecessary:(id)arg1 ;
-(void)_logResponsesIfNecessary:(id)arg1 ;
-(void)_logErrorIfNecessary:(id)arg1 ;
-(unsigned long long)uploadPayloadSize;
-(unsigned long long)downloadPayloadSize;
-(unsigned long long)requestResponseTime;
-(void)setDelegate:(id<PBRequesterDelegate>)arg1 ;
-(void)dealloc;
-(void)_start;
-(void)start;
-(NSURL *)URL;
-(void)cancel;
-(id<PBRequesterDelegate>)delegate;
-(void)resume;
-(void)_cleanup;
-(void)setURL:(NSURL *)arg1 ;
-(void)pause;
-(char)isPaused;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end

