/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSSet, CoreDAVResponseItem;

@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _url;
	NSSet* _primaryElements;
	NSSet* _fallbackElements;
	CoreDAVResponseItem* _responseItem;

}

@property (nonatomic,retain) CoreDAVResponseItem * responseItem;              //@synthesize responseItem=_responseItem - In the implementation block
-(void)_proppatchAfterFailureCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5 ;
-(void)startTaskGroup;
-(void)setResponseItem:(CoreDAVResponseItem *)arg1 ;
-(CoreDAVResponseItem *)responseItem;
@end

