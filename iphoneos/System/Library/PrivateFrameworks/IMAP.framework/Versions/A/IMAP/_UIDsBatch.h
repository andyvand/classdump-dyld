/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableIndexSet;

@interface _UIDsBatch : NSObject {

	unsigned expectedLength;
	NSMutableIndexSet* _uids;

}

@property (nonatomic,retain) NSMutableIndexSet * uids;              //@synthesize uids=_uids - In the implementation block
@property (assign,nonatomic) unsigned expectedLength; 
-(NSMutableIndexSet *)uids;
-(void)setUids:(NSMutableIndexSet *)arg1 ;
-(id)init;
-(id)description;
-(void)setExpectedLength:(unsigned)arg1 ;
-(unsigned)expectedLength;
@end

