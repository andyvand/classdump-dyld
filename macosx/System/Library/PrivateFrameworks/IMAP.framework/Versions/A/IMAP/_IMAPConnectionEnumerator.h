/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary, NSArray, NSEnumerator;

@interface _IMAPConnectionEnumerator : NSEnumerator {

	NSDictionary* _connectionsByMailboxName;
	NSArray* _allMailboxNames;
	id _lastObjectKey;
	unsigned long long _allMailboxNamesCount;
	unsigned long long _positionInMailboxNames;
	NSEnumerator* _nullEnumerator;

}
-(id)init;
-(id)nextObject;
-(id)initWithConnectionDictionary:(id)arg1 ;
-(id)lastObjectKey;
@end

