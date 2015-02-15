/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:47 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Mail/MFSizeEngine.h>

@class NSMutableDictionary;

@interface MFPOPSizeEngine : MFSizeEngine {

	NSMutableDictionary* _infoByMessageID;

}
-(id)initWithAccount:(id)arg1 ;
-(void)_runWorkerThread;
-(void)_messageFlagsChanged:(id)arg1 ;
-(void)_fetchCompleted:(id)arg1 ;
-(void)_deleteServerMessagesCompleted:(id)arg1 ;
-(id)_remoteMailboxURL;
-(id)_newMessageInfoFromMessageHeaders:(id)arg1 ;
-(id)allMessageIDs;
-(id)infoWithKey:(id)arg1 forMessageWithID:(id)arg2 ;
-(char)_prepareToRefresh;
-(void)dealloc;
@end

