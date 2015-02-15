/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSMutableSet, NSURL, NSSet, NSString;

@interface CoreDAVValidatePrincipalsTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSMutableSet* _urlsToExamine;
	NSMutableSet* _principalURLs;
	NSURL* _urlBeingExamined;
	char _authError;

}

@property (nonatomic,readonly) NSSet * resultPrincipalURLs; 
@property (nonatomic,readonly) char didReceiveAuthenticationError;              //@synthesize authError=_authError - In the implementation block
@property (nonatomic,retain) NSMutableSet * urlsToExamine;                      //@synthesize urlsToExamine=_urlsToExamine - In the implementation block
@property (nonatomic,retain) NSMutableSet * principalURLs;                      //@synthesize principalURLs=_principalURLs - In the implementation block
@property (nonatomic,retain) NSURL * urlBeingExamined;                          //@synthesize urlBeingExamined=_urlBeingExamined - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_finishWithError:(id)arg1 ;
-(void)dealloc;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)cancelTaskGroup;
-(char)didReceiveAuthenticationError;
-(NSMutableSet *)principalURLs;
-(NSMutableSet *)urlsToExamine;
-(void)setUrlBeingExamined:(NSURL *)arg1 ;
-(NSURL *)urlBeingExamined;
-(void)_fetchNextURL;
-(void)setUrlsToExamine:(NSMutableSet *)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 urls:(id)arg2 taskManager:(id)arg3 ;
-(NSSet *)resultPrincipalURLs;
-(void)setPrincipalURLs:(NSMutableSet *)arg1 ;
@end

