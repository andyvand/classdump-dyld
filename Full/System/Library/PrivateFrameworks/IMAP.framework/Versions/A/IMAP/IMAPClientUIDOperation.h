/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/IMAPClientMailboxOperation.h>

@class NSIndexSet;

@interface IMAPClientUIDOperation : IMAPClientMailboxOperation {

	NSIndexSet* _UIDs;
	NSRange _range;

}

@property (copy) NSIndexSet * UIDs;              //@synthesize UIDs=_UIDs - In the implementation block
@property (assign) NSRange range;                //@synthesize range=_range - In the implementation block
+(id)newMessageSetForIndexSet:(id)arg1 ;
+(id)newMessageSetForRange:(NSRange)arg1 ;
+(id)newMessageSetForNumbers:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithMailboxName:(id)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(long long)minRequiredConnectionState;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(NSIndexSet *)UIDs;
-(id)initWithMailboxName:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 ;
-(void)setUIDs:(NSIndexSet *)arg1 ;
@end

