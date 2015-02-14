/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPAccountProxy.h>
#import <Notes/NFAccountProxy.h>

@class NSString;

@interface NFIMAPAccountProxy : IMAPAccountProxy <NFAccountProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * fullName; 
-(char)hasNotes;
-(id)initWithManagedObject:(id)arg1 ;
-(unsigned long long)maximumConnectionCount;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(id)newMailboxProxyWithMailbox:(id)arg1 ;
-(char)useDefaultMailboxAsMailboxHierarchyRoot;
-(void)deleteMailboxFromPersistence:(id)arg1 ;
-(char)shouldAddMailboxToPersistence:(id)arg1 withParent:(id)arg2 ;
-(void)playOfflineActions;
-(id)mailboxProxyForMailbox:(id)arg1 ;
-(char)deleteMailboxFromServer:(id)arg1 ;
@end

