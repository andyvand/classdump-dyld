/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:33:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFMessageLibrary.h>

@class NSMutableArray;

@interface IMAPServiceGreetingLibrary : MFMessageLibrary {

	NSMutableArray* _messages;

}
-(void)dealloc;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 addPOPUIDs:(BOOL)arg10 dataSectionsByMessage:(id)arg11 ;
-(id)messages;
-(void)resetMessages;
@end
