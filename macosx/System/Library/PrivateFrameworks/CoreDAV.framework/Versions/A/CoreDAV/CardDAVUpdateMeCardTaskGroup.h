/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL, NSString;

@interface CardDAVUpdateMeCardTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {

	NSURL* _homeURL;
	NSURL* _cardURL;

}

@property (nonatomic,readonly) NSURL * cardURL;                     //@synthesize cardURL=_cardURL - In the implementation block
@property (nonatomic,readonly) NSURL * homeURL;                     //@synthesize homeURL=_homeURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)homeURL;
-(NSURL *)cardURL;
-(void)dealloc;
-(NSString *)description;
-(void)startTaskGroup;
-(void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3 ;
-(id)_newPropPatchTask;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 homeURL:(id)arg3 cardURL:(id)arg4 ;
@end

