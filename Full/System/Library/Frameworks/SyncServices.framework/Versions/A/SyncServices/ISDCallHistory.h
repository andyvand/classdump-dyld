/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface ISDCallHistory : NSObject {

	NSMutableArray* _callHistory;
	NSString* _filename;
	NSString* _clientIdentifier;
	char _saveCallHistoryAggressively;

}
-(void)dealloc;
-(id)clientIdentifier;
-(void)addCallHistoryWithMethodName:(id)arg1 parameters:(id)arg2 ;
-(void)setException:(id)arg1 forMethodName:(id)arg2 ;
-(void)setReturnedValue:(id)arg1 forMethodName:(id)arg2 ;
-(id)initWithFilename:(id)arg1 clientIdentifier:(id)arg2 entityNames:(id)arg3 ;
-(void)saveCallHistory;
-(id)_findUnreturnedMethodForMethodName:(id)arg1 ;
@end

