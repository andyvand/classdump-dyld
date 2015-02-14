/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FamilyControls.framework/Versions/A/FamilyControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface FCUserEventsManager : NSObject {

	NSString* _userName;
	NSData* _authData;
	char _registeredWithServer;

}
-(id)initWithUserName:(id)arg1 authorization:(id)arg2 ;
-(id)executeFetchRequest:(id)arg1 entityName:(id)arg2 ;
-(void)clearLogHistoryForEntityName:(id)arg1 ;
-(void)dealloc;
-(void)close;
@end

