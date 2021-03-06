/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@class NSMutableArray;

@interface WBSURLSuffixChecker : NSObject {

	SCD_Struct_WB118* _trie;
	unsigned _trieNodeCount;
	unsigned long long _maxLength;
	NSMutableArray* _failedSuffixes;

}
-(id)initWithSuffixes:(id)arg1 ;
-(char)insertString:(id)arg1 intoTrieWithCache:(SCD_Struct_WB120*)arg2 ;
-(void)addStringToFailedSuffixes:(id)arg1 ;
-(void)dealloc;
-(char)hasSuffix:(id)arg1 ;
@end

