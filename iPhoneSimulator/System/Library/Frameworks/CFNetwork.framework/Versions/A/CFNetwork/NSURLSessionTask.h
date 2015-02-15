/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSCopying.h>

@class NSURLRequest, NSURLResponse, NSString, NSError, NSURL, NSURLSession, NSDictionary, NSArray, NSValue;

@interface NSURLSessionTask : NSObject <NSCopying> {

	char __shouldSkipPreferredClientCertificateLookup;
	BOOL __shouldPipelineHTTP;
	BOOL __shouldUsePipelineHeuristics;
	BOOL __shouldSkipPipelineProbe;
	BOOL __shouldHandleCookies;
	BOOL __preventsIdleSystemSleep;
	BOOL __allowsCellular;
	char __prohibitAuthUI;
	char __strictContentLength;
	BOOL __disallowCellular;
	char __connectionIsCellular;
	float __priorityHint;
	int __cachePolicy;
	int __cookieAcceptPolicy;
	int __networkServiceType;
	unsigned __powerAssertion;
	unsigned long long _taskIdentifier;
	NSURLRequest* _originalRequest;
	NSURLResponse* _response;
	long long _countOfBytesReceived;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	NSString* _taskDescription;
	long long _state;
	NSError* _error;
	NSURL* __ledBellyFallbackURL;
	CFURLRequestRef __currentCFURLRequest;
	double _startTime;
	NSURLSession* _session;
	dispatch_queue_sRef _workQueue;
	NSString* __ledBellyServiceIdentifier;
	long long __priorityValue;
	PerformanceTimingRef __performanceTiming;
	NSDictionary* __backgroundTaskTimingData;
	NSDictionary* __legacySocketStreamProperties;
	CFHSTSPolicyRef __cfHSTS;
	CFURLCacheRef __cfCache;
	CFURLCredentialStorageRef __cfCreds;
	OpaqueCFHTTPCookieStorageRef __cfCookies;
	double __timeoutInterval;
	NSDictionary* __proxySettings;
	NSDictionary* __sslSettings;
	NSDictionary* __additionalHeaders;
	NSArray* __contentDispositionFallbackArray;
	NSValue* __connectionPropertyDuet;
	long long __suspensionThreshhold;
	NSString* __boundInterfaceIdentifier;
	unsigned long long __allowedProtocolTypes;
	long long __requestPriority;
	long long __expectedWorkload;
	double __timeWindowDelay;
	double __timeWindowDuration;
	NSString* __uniqueIdentifier;
	id __protocolForTask;

}

@property (assign) unsigned long long taskIdentifier;                                 //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (copy) NSURLRequest * originalRequest;                                      //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy,readonly) NSURLRequest * currentRequest; 
@property (copy) NSURLResponse * response;                                            //@synthesize response=_response - In the implementation block
@property (assign) long long countOfBytesReceived;                                    //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                                        //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                              //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;                           //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (copy) NSString * taskDescription;                                          //@synthesize taskDescription=_taskDescription - In the implementation block
@property (assign) long long state;                                                   //@synthesize state=_state - In the implementation block
@property (copy) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign) float priority; 
@property (assign) long long _priority; 
@property (copy) NSURL * _ledBellyFallbackURL;                                        //@synthesize _ledBellyFallbackURL=__ledBellyFallbackURL - In the implementation block
@property (retain) CFURLRequestRef _currentCFURLRequest;                              //@synthesize _currentCFURLRequest=__currentCFURLRequest - In the implementation block
@property (retain,readonly) NSURL * currentRequest_URL; 
@property (retain,readonly) NSURL * originalRequest_mainDocumentURL; 
@property (assign) double startTime;                                                  //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSURLSession * session;                                            //@synthesize session=_session - In the implementation block
@property (assign) dispatch_queue_sRef workQueue;                                     //@synthesize workQueue=_workQueue - In the implementation block
@property (copy) NSString * _ledBellyServiceIdentifier;                               //@synthesize _ledBellyServiceIdentifier=__ledBellyServiceIdentifier - In the implementation block
@property (assign) float _priorityHint;                                               //@synthesize _priorityHint=__priorityHint - In the implementation block
@property (assign) long long _priorityValue;                                          //@synthesize _priorityValue=__priorityValue - In the implementation block
@property (assign,nonatomic) PerformanceTimingRef _performanceTiming;                 //@synthesize _performanceTiming=__performanceTiming - In the implementation block
@property (nonatomic,copy) NSDictionary * _backgroundTaskTimingData;                  //@synthesize _backgroundTaskTimingData=__backgroundTaskTimingData - In the implementation block
@property (assign) char _shouldSkipPreferredClientCertificateLookup;                  //@synthesize _shouldSkipPreferredClientCertificateLookup=__shouldSkipPreferredClientCertificateLookup - In the implementation block
@property (retain) NSDictionary * _legacySocketStreamProperties;                      //@synthesize _legacySocketStreamProperties=__legacySocketStreamProperties - In the implementation block
@property (retain) CFHSTSPolicyRef _cfHSTS;                                           //@synthesize _cfHSTS=__cfHSTS - In the implementation block
@property (retain) CFURLCacheRef _cfCache;                                            //@synthesize _cfCache=__cfCache - In the implementation block
@property (retain) CFURLCredentialStorageRef _cfCreds;                                //@synthesize _cfCreds=__cfCreds - In the implementation block
@property (retain) OpaqueCFHTTPCookieStorageRef _cfCookies;                           //@synthesize _cfCookies=__cfCookies - In the implementation block
@property (assign) int _cachePolicy;                                                  //@synthesize _cachePolicy=__cachePolicy - In the implementation block
@property (assign) double _timeoutInterval;                                           //@synthesize _timeoutInterval=__timeoutInterval - In the implementation block
@property (retain) NSDictionary * _proxySettings;                                     //@synthesize _proxySettings=__proxySettings - In the implementation block
@property (retain) NSDictionary * _sslSettings;                                       //@synthesize _sslSettings=__sslSettings - In the implementation block
@property (assign) BOOL _shouldPipelineHTTP;                                          //@synthesize _shouldPipelineHTTP=__shouldPipelineHTTP - In the implementation block
@property (assign) BOOL _shouldUsePipelineHeuristics;                                 //@synthesize _shouldUsePipelineHeuristics=__shouldUsePipelineHeuristics - In the implementation block
@property (assign) BOOL _shouldSkipPipelineProbe;                                     //@synthesize _shouldSkipPipelineProbe=__shouldSkipPipelineProbe - In the implementation block
@property (assign) BOOL _shouldHandleCookies;                                         //@synthesize _shouldHandleCookies=__shouldHandleCookies - In the implementation block
@property (assign) int _cookieAcceptPolicy;                                           //@synthesize _cookieAcceptPolicy=__cookieAcceptPolicy - In the implementation block
@property (retain) NSDictionary * _additionalHeaders;                                 //@synthesize _additionalHeaders=__additionalHeaders - In the implementation block
@property (assign) BOOL _preventsIdleSystemSleep;                                     //@synthesize _preventsIdleSystemSleep=__preventsIdleSystemSleep - In the implementation block
@property (retain) NSArray * _contentDispositionFallbackArray;                        //@synthesize _contentDispositionFallbackArray=__contentDispositionFallbackArray - In the implementation block
@property (assign) BOOL _allowsCellular;                                              //@synthesize _allowsCellular=__allowsCellular - In the implementation block
@property (assign) int _networkServiceType;                                           //@synthesize _networkServiceType=__networkServiceType - In the implementation block
@property (assign) char _prohibitAuthUI;                                              //@synthesize _prohibitAuthUI=__prohibitAuthUI - In the implementation block
@property (assign) char _strictContentLength;                                         //@synthesize _strictContentLength=__strictContentLength - In the implementation block
@property (copy) NSValue * _connectionPropertyDuet;                                   //@synthesize _connectionPropertyDuet=__connectionPropertyDuet - In the implementation block
@property (assign) long long _suspensionThreshhold;                                   //@synthesize _suspensionThreshhold=__suspensionThreshhold - In the implementation block
@property (retain) NSString * _boundInterfaceIdentifier;                              //@synthesize _boundInterfaceIdentifier=__boundInterfaceIdentifier - In the implementation block
@property (assign) BOOL _disallowCellular;                                            //@synthesize _disallowCellular=__disallowCellular - In the implementation block
@property (assign) unsigned long long _allowedProtocolTypes;                          //@synthesize _allowedProtocolTypes=__allowedProtocolTypes - In the implementation block
@property (assign) long long _requestPriority;                                        //@synthesize _requestPriority=__requestPriority - In the implementation block
@property (assign) long long _expectedWorkload;                                       //@synthesize _expectedWorkload=__expectedWorkload - In the implementation block
@property (assign) double _timeWindowDelay;                                           //@synthesize _timeWindowDelay=__timeWindowDelay - In the implementation block
@property (assign) double _timeWindowDuration;                                        //@synthesize _timeWindowDuration=__timeWindowDuration - In the implementation block
@property (copy) NSString * _uniqueIdentifier;                                        //@synthesize _uniqueIdentifier=__uniqueIdentifier - In the implementation block
@property (assign) unsigned _powerAssertion;                                          //@synthesize _powerAssertion=__powerAssertion - In the implementation block
@property (setter=_setConnectionIsCellular:) char _connectionIsCellular;              //@synthesize _connectionIsCellular=__connectionIsCellular - In the implementation block
@property (assign,nonatomic) id _protocolForTask;                                     //@synthesize _protocolForTask=__protocolForTask - In the implementation block
+(char)supportsSecureCoding;
+(id)taskForWrappedRequest:(id)arg1 ;
-(void)set_ledBellyServiceIdentifier:(NSString *)arg1 ;
-(void)set_ledBellyFallbackURL:(NSURL *)arg1 ;
-(id)_timingData;
-(dispatch_queue_sRef)workQueue;
-(id)initWithTask:(id)arg1 ;
-(double)startTime;
-(NSURLRequest *)currentRequest;
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSString *)_uniqueIdentifier;
-(NSURLRequest *)originalRequest;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)cancel;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(float)arg1 ;
-(void)resume;
-(void)suspend;
-(float)priority;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)_priority;
-(NSURLSession *)session;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(unsigned)_powerAssertion;
-(void)set_powerAssertion:(unsigned)arg1 ;
-(void)updateCurrentRequest:(id)arg1 ;
-(id)initWithOriginalRequest:(id)arg1 updatedRequest:(id)arg2 ident:(unsigned long long)arg3 session:(id)arg4 ;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage;
-(const XURLCache*)_createXURLCache;
-(CFURLRequestRef)_currentCFURLRequest;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(id)_protocolForTask;
-(void)set_protocolForTask:(id)arg1 ;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(long long)countOfBytesReceived;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(long long)_priorityValue;
-(NSURL *)currentRequest_URL;
-(void)_onqueue_releasePowerAsssertion;
-(void)_onqueue_adjustPriorityHint:(float)arg1 ;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(long long)countOfBytesExpectedToReceive;
-(long long)countOfBytesSent;
-(long long)countOfBytesExpectedToSend;
-(void)set_backgroundTaskTimingData:(NSDictionary *)arg1 ;
-(CFURLCacheRef)_cfCache;
-(NSString *)taskDescription;
-(NSDictionary *)_backgroundTaskTimingData;
-(void)setWorkQueue:(dispatch_queue_sRef)arg1 ;
-(unsigned long long)taskIdentifier;
-(void)cleanupAndBreakCycles;
-(CFURLRequestRef)_copyCurrentCFURLRequest;
-(CFURLRequestRef)_copyOriginalCFURLRequest;
-(CFDictionaryRef)_copySocketStreamProperties;
-(PerformanceTimingRef)_performanceTiming;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(void)_setExplicitStorageSession:(CFURLStorageSessionRef)arg1 ;
-(void)_setExplicitCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(CFHTTPMessageRef)_copyHTTPMessage;
-(void)set_cachePolicy:(int)arg1 ;
-(void)set_timeoutInterval:(double)arg1 ;
-(void)set_shouldPipelineHTTP:(BOOL)arg1 ;
-(void)set_shouldUsePipelineHeuristics:(BOOL)arg1 ;
-(void)set_shouldSkipPipelineProbe:(BOOL)arg1 ;
-(void)set_shouldHandleCookies:(BOOL)arg1 ;
-(void)set_cookieAcceptPolicy:(int)arg1 ;
-(void)set_additionalHeaders:(NSDictionary *)arg1 ;
-(void)set_preventsIdleSystemSleep:(BOOL)arg1 ;
-(void)set_contentDispositionFallbackArray:(NSArray *)arg1 ;
-(void)set_allowsCellular:(BOOL)arg1 ;
-(void)set_networkServiceType:(int)arg1 ;
-(void)set_proxySettings:(NSDictionary *)arg1 ;
-(void)set_sslSettings:(NSDictionary *)arg1 ;
-(void)set_boundInterfaceIdentifier:(NSString *)arg1 ;
-(void)set_disallowCellular:(BOOL)arg1 ;
-(void)set_allowedProtocolTypes:(unsigned long long)arg1 ;
-(void)set_requestPriority:(long long)arg1 ;
-(void)set_expectedWorkload:(long long)arg1 ;
-(void)set_timeWindowDelay:(double)arg1 ;
-(void)set_timeWindowDuration:(double)arg1 ;
-(int)_cachePolicy;
-(double)_timeoutInterval;
-(NSDictionary *)_proxySettings;
-(NSDictionary *)_sslSettings;
-(BOOL)_shouldPipelineHTTP;
-(BOOL)_shouldUsePipelineHeuristics;
-(BOOL)_shouldSkipPipelineProbe;
-(long long)_requestPriority;
-(unsigned long long)_allowedProtocolTypes;
-(char)_prohibitAuthUI;
-(char)_strictContentLength;
-(NSValue *)_connectionPropertyDuet;
-(long long)_suspensionThreshhold;
-(BOOL)_preventsIdleSystemSleep;
-(long long)_expectedWorkload;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(void)_setConnectionIsCellular:(char)arg1 ;
-(NSURL *)_ledBellyFallbackURL;
-(NSString *)_ledBellyServiceIdentifier;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(char)_shouldSkipPreferredClientCertificateLookup;
-(NSURL *)originalRequest_mainDocumentURL;
-(void)set_currentCFURLRequest:(CFURLRequestRef)arg1 ;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(void)_initializeTimingDataWithSessionConfiguration:(id)arg1 ;
-(void)set_suspensionThreshhold:(long long)arg1 ;
-(void)set_connectionPropertyDuet:(NSValue *)arg1 ;
-(void)set_legacySocketStreamProperties:(NSDictionary *)arg1 ;
-(void)set_strictContentLength:(char)arg1 ;
-(void)set_shouldSkipPreferredClientCertificateLookup:(char)arg1 ;
-(void)set_priorityValue:(long long)arg1 ;
-(NSDictionary *)_legacySocketStreamProperties;
-(CFHSTSPolicyRef)_cfHSTS;
-(void)set_cfHSTS:(CFHSTSPolicyRef)arg1 ;
-(void)set_cfCache:(CFURLCacheRef)arg1 ;
-(CFURLCredentialStorageRef)_cfCreds;
-(void)set_cfCreds:(CFURLCredentialStorageRef)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)_cfCookies;
-(void)set_cfCookies:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(BOOL)_shouldHandleCookies;
-(int)_cookieAcceptPolicy;
-(NSDictionary *)_additionalHeaders;
-(NSArray *)_contentDispositionFallbackArray;
-(BOOL)_allowsCellular;
-(int)_networkServiceType;
-(NSString *)_boundInterfaceIdentifier;
-(BOOL)_disallowCellular;
-(void)set_uniqueIdentifier:(NSString *)arg1 ;
-(float)_priorityHint;
-(void)set_priorityHint:(float)arg1 ;
-(void)adjustConditionalConnectionProperties:(CFDictionaryRef)arg1 ;
-(CFDictionaryRef)_copySocketStreamProperties0;
-(void)set_performanceTiming:(PerformanceTimingRef)arg1 ;
-(void)set_prohibitAuthUI:(char)arg1 ;
-(void)set_priority:(long long)arg1 ;
-(char)_connectionIsCellular;
-(NSURLResponse *)response;
-(void)setStartTime:(double)arg1 ;
@end

