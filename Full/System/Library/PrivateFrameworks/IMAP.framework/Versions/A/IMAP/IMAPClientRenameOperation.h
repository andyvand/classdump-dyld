/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:40 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPClientMailboxOperation.h>

@class NSString;

@interface IMAPClientRenameOperation : IMAPClientMailboxOperation {

	NSString* _nameForNewMailbox;
	NSString* _nameForNewMailboxArgument;

}

@property (copy) NSString * nameForNewMailbox;                      //@synthesize nameForNewMailbox=_nameForNewMailbox - In the implementation block
@property (copy) NSString * nameForNewMailboxArgument;              //@synthesize nameForNewMailboxArgument=_nameForNewMailboxArgument - In the implementation block
-(id)activityString;
-(id)initWithMailboxName:(id)arg1 ;
-(id)commandTypeString;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(id)detailsString;
-(NSString *)nameForNewMailbox;
-(NSString *)nameForNewMailboxArgument;
-(id)initWithMailboxName:(id)arg1 newMailboxName:(id)arg2 ;
-(void)setNameForNewMailbox:(NSString *)arg1 ;
-(void)setNameForNewMailboxArgument:(NSString *)arg1 ;
@end

