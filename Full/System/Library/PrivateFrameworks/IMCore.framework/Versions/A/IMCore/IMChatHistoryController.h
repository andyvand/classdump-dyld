/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject {

	NSMutableDictionary* _runningQueries;

}

@property (retain) NSMutableDictionary * _runningQueries;              //@synthesize runningQueries=_runningQueries - In the implementation block
+(id)sharedInstance;
-(void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3 ;
-(void)databaseFull;
-(void)databaseNoLongerFull;
-(void)loadMessageWithGUID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)_runningQueries;
-(void)set_runningQueries:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
@end

