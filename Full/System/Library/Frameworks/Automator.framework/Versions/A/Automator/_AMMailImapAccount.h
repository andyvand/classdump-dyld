/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:29 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMMailAccount.h>

@interface _AMMailImapAccount : _AMMailAccount

@property (assign) char compactMailboxesWhenClosing; 
@property (assign) int messageCaching; 
@property (assign) char storeDraftsOnServer; 
@property (assign) char storeJunkMailOnServer; 
@property (assign) char storeSentMessagesOnServer; 
@property (assign) char storeDeletedMessagesOnServer; 
-(char)compactMailboxesWhenClosing;
-(void)setCompactMailboxesWhenClosing:(char)arg1 ;
-(char)storeJunkMailOnServer;
-(void)setStoreJunkMailOnServer:(char)arg1 ;
-(char)storeDeletedMessagesOnServer;
-(void)setStoreDeletedMessagesOnServer:(char)arg1 ;
-(char)storeSentMessagesOnServer;
-(void)setStoreDraftsOnServer:(char)arg1 ;
-(void)setStoreSentMessagesOnServer:(char)arg1 ;
-(int)messageCaching;
-(void)setMessageCaching:(int)arg1 ;
-(char)storeDraftsOnServer;
@end

