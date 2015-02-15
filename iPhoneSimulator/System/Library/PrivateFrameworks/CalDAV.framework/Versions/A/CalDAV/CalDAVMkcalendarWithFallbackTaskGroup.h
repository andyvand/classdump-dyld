/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, NSDictionary;

@interface CalDAVMkcalendarWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	char _shouldSupportVEVENT;
	char _shouldSupportVTODO;
	NSSet* _primaryElements;
	NSSet* _fallbackElements;
	NSDictionary* _headersToOverride;
	NSDictionary* _responseHeaders;

}

@property (assign,nonatomic) char shouldSupportVEVENT;                      //@synthesize shouldSupportVEVENT=_shouldSupportVEVENT - In the implementation block
@property (assign,nonatomic) char shouldSupportVTODO;                       //@synthesize shouldSupportVTODO=_shouldSupportVTODO - In the implementation block
@property (nonatomic,retain) NSDictionary * headersToOverride;              //@synthesize headersToOverride=_headersToOverride - In the implementation block
@property (nonatomic,retain) NSDictionary * responseHeaders;                //@synthesize responseHeaders=_responseHeaders - In the implementation block
-(NSDictionary *)headersToOverride;
-(void)_mkcalendarAfterFailureCount:(unsigned long long)arg1 ;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(char)shouldSupportVEVENT;
-(char)shouldSupportVTODO;
-(void)dealloc;
-(NSDictionary *)responseHeaders;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(void)startTaskGroup;
-(void)setShouldSupportVEVENT:(char)arg1 ;
-(void)setShouldSupportVTODO:(char)arg1 ;
-(void)setHeadersToOverride:(NSDictionary *)arg1 ;
@end

