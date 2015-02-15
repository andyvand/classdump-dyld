/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/IMAPClientUIDOperation.h>

@class NSArray, NSMutableIndexSet;

@interface IMAPClientUIDSearchOperation : IMAPClientUIDOperation {

	NSArray* _terms;
	NSMutableIndexSet* _matchingUIDs;

}

@property (copy) NSArray * terms;                                 //@synthesize terms=_terms - In the implementation block
@property (retain) NSMutableIndexSet * matchingUIDs;              //@synthesize matchingUIDs=_matchingUIDs - In the implementation block
-(void)setTerms:(NSArray *)arg1 ;
-(NSArray *)terms;
-(id)activityString;
-(id)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(id)newCommandDataForLiteralPlus:(char)arg1 ;
-(id)initWithMailboxName:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 ;
-(id)_newArgumentForSearchTerm:(id)arg1 isLiteral:(char*)arg2 ;
-(id)initWithMailboxName:(id)arg1 range:(NSRange)arg2 terms:(id)arg3 ;
-(NSMutableIndexSet *)matchingUIDs;
-(void)setMatchingUIDs:(NSMutableIndexSet *)arg1 ;
@end

