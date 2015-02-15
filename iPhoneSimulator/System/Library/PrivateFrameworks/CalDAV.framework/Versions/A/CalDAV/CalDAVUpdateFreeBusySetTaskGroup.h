/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CalDAV/CoreDAVPropFindTaskDelegate.h>
#import <CalDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString, CoreDAVPropFindTask;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate> {

	int _state;
	NSURL* _inboxURL;
	NSURL* _urlToAdd;
	NSString* _suffixToFilterOut;
	CoreDAVPropFindTask* _fetchTask;

}

@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (assign,nonatomic) int state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSURL * inboxURL;                                   //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,retain) NSURL * urlToAdd;                                   //@synthesize urlToAdd=_urlToAdd - In the implementation block
@property (nonatomic,retain) NSString * suffixToFilterOut;                       //@synthesize suffixToFilterOut=_suffixToFilterOut - In the implementation block
@property (nonatomic,retain) CoreDAVPropFindTask * fetchTask;                    //@synthesize fetchTask=_fetchTask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInboxURL:(NSURL *)arg1 ;
-(void)setUrlToAdd:(NSURL *)arg1 ;
-(void)setSuffixToFilterOut:(NSString *)arg1 ;
-(void)_startFetchFreeBusySet;
-(NSString *)suffixToFilterOut;
-(NSURL *)urlToAdd;
-(void)_startPropPatchWithURLs:(id)arg1 ;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(int)state;
-(void)startTaskGroup;
-(id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 urlToAdd:(id)arg3 suffixToFilterOut:(id)arg4 taskManager:(id)arg5 ;
-(void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(NSURL *)inboxURL;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)taskGroupWillCancelWithError:(id)arg1 ;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(void)setFetchTask:(CoreDAVPropFindTask *)arg1 ;
-(CoreDAVPropFindTask *)fetchTask;
@end

