/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:46 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSArray, NSEnumerator;

@interface _MFSmartMailboxesEnumerator : NSEnumerator {

	NSArray* _smartMailboxes;
	unsigned long long _nextMailboxIndex;
	NSEnumerator* _currentMailboxEnumerator;

}

@property (nonatomic,copy,readonly) NSArray * smartMailboxes;                      //@synthesize smartMailboxes=_smartMailboxes - In the implementation block
@property (assign,nonatomic) unsigned long long nextMailboxIndex;                  //@synthesize nextMailboxIndex=_nextMailboxIndex - In the implementation block
@property (nonatomic,retain) NSEnumerator * currentMailboxEnumerator;              //@synthesize currentMailboxEnumerator=_currentMailboxEnumerator - In the implementation block
-(NSArray *)smartMailboxes;
-(id)initWithSmartMailboxes:(id)arg1 ;
-(NSEnumerator *)currentMailboxEnumerator;
-(unsigned long long)nextMailboxIndex;
-(void)setNextMailboxIndex:(unsigned long long)arg1 ;
-(void)setCurrentMailboxEnumerator:(NSEnumerator *)arg1 ;
-(id)init;
-(id)nextObject;
@end
