/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDocumentRevisionsController, NSMapTable, NSCountedSet, NSMutableOrderedSet;

@interface _NSDocumentRevisionsCache : NSObject {

	NSDocumentRevisionsController* controller;
	NSMapTable* costs;
	NSCountedSet* pinnedRevisions;
	NSMutableOrderedSet* unpinnedRevisions;
	id vmPressureSourceID;

}

@property (getter=isEvictionEnabled) char evictionEnabled; 
-(id)init;
-(void)dealloc;
-(char)acquireRevision:(id)arg1 ;
-(void)relinquishRevision:(id)arg1 ;
-(void)addRevision:(id)arg1 cost:(unsigned long long)arg2 ;
-(void)removeRevision:(id)arg1 ;
-(char)containsRevision:(id)arg1 ;
-(void)updateCost:(unsigned long long)arg1 forRevision:(id)arg2 ;
-(void)setEvictionEnabled:(char)arg1 ;
-(id)initWithRevisionsController:(id)arg1 ;
-(char)isEvictionEnabled;
-(void)_insertUnpinnedRevision:(id)arg1 ;
@end

