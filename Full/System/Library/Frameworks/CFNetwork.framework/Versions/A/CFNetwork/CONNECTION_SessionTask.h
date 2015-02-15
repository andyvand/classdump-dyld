/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableURLRequest, NSURLRequest, NSURLSession;

@interface CONNECTION_SessionTask : NSObject {

	CFURLRequestRef _originalRequest;
	CFURLRequestRef _currentRequest;
	CFDictionaryRef _connectionProperties;
	CFDictionaryRef _socketProperties;
	NSMutableURLRequest* _nsCurrentRequest;
	NSURLRequest* _nsOriginalRequest;
	NSURLSession* _session;
	BOOL _is_cellular;
	Class _my_protocolForTask;
	PerformanceTimingRef __performanceTiming;

}
-(dispatch_queue_sRef)workQueue;
-(id)startTime;
-(id)currentRequest;
-(id)originalRequest;
-(void)dealloc;
-(id)state;
-(float)priority;
-(id)error;
-(id)session;
-(void)updateCurrentRequest:(id)arg1 ;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage;
-(const XURLCache*)_createXURLCache;
-(id)initWithRequest:(CFURLRequestRef)arg1 mutableCurrent:(CFURLRequestRef)arg2 connProps:(CFDictionaryRef)arg3 sockProps:(CFDictionaryRef)arg4 session:(id)arg5 ;
-(CFURLRequestRef)_currentCFURLRequest;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(id)_protocolForTask;
-(void)set_protocolForTask:(id)arg1 ;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(id)countOfBytesReceived;
-(id)_priorityValue;
-(CFURLRef)currentRequest_URL;
-(id)countOfBytesExpectedToReceive;
-(id)countOfBytesSent;
-(id)countOfBytesExpectedToSend;
-(id)_cfCache;
-(id)_backgroundTaskTimingData;
-(id)taskIdentifier;
-(void)cleanupAndBreakCycles;
-(CFURLRequestRef)_copyCurrentCFURLRequest;
-(CFURLRequestRef)_copyOriginalCFURLRequest;
-(CFDictionaryRef)_copySocketStreamProperties;
-(PerformanceTimingRef)_performanceTiming;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(CFHTTPMessageRef)_copyHTTPMessage;
-(int)_cachePolicy;
-(double)_timeoutInterval;
-(CFDictionaryRef)_proxySettings;
-(CFDictionaryRef)_sslSettings;
-(unsigned char)_shouldPipelineHTTP;
-(unsigned char)_shouldUsePipelineHeuristics;
-(unsigned char)_shouldSkipPipelineProbe;
-(long long)_requestPriority;
-(unsigned long long)_allowedProtocolTypes;
-(id)_prohibitAuthUI;
-(unsigned char)_strictContentLength;
-(id)_connectionPropertyDuet;
-(long long)_suspensionThreshhold;
-(unsigned char)_preventsIdleSystemSleep;
-(id)_expectedWorkload;
-(id)_timeWindowDelay;
-(id)_timeWindowDuration;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(void)_setConnectionIsCellular:(BOOL)arg1 ;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(char)_shouldSkipPreferredClientCertificateLookup;
-(CFURLRef)originalRequest_mainDocumentURL;
-(void)_initializeTimingDataWithSessionConfiguration:(id)arg1 ;
-(id)_cfHSTS;
-(id)_cfCreds;
-(id)_cfCookies;
-(id)_shouldHandleCookies;
-(id)_cookieAcceptPolicy;
-(CFDictionaryRef)_additionalHeaders;
-(id)_contentDispositionFallbackArray;
-(id)_allowsCellular;
-(id)_networkServiceType;
-(id)_boundInterfaceIdentifier;
-(id)_disallowCellular;
@end

