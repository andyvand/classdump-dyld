/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <iLifeMediaBrowser/ILObserverNode.h>

@class NSString, NSArray;

@interface ILWatchedQueryNode : ILObserverNode {

	NSString* query;
	MDQueryRef queryRef;
	NSArray* queryScope;
	int queryRunMode;

}
-(id)initWithObserver:(id)arg1 query:(id)arg2 ;
-(void)setQueryScope:(id)arg1 ;
-(void)setQueryRunMode:(int)arg1 ;
-(void)setQueryRef:(MDQueryRef)arg1 ;
-(id)queryScope;
-(int)queryRunMode;
-(MDQueryRef)queryRef;
-(id)query;
-(void)setQuery:(id)arg1 ;
-(void)dealloc;
@end

