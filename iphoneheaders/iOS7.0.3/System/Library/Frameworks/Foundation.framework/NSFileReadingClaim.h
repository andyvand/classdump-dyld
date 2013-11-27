/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileReadingClaim : NSFileAccessClaim {

	NSURL* _url;
	BOOL _urlDidChange;
	unsigned _options;
	NSFileAccessNode* _location;
	NSFileAccessNode* _rootNode;
	int _linkResolutionCount;

}
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/ id)arg1 crashHandler:(/*^block*/ id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(/*^block*/ id)arg3 ;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned)arg3 claimer:(/*^block*/ id)arg4 ;
-(void)dealloc;
@end
