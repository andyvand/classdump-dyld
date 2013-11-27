/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:42:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SYDJournal : NSObject {

	NSMutableDictionary* store;
	NSMutableDictionary* journal;
	BOOL readonly;

}
-(id)initWithStore:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)changesSinceChangeCount:(long long)arg1 ;
-(long long)maximumChangeCount;
-(id)initWithMutableStore:(id)arg1 ;
-(void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3 ;
-(int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2 ;
-(BOOL)removeChangesUntilChangeCount:(long long)arg1 ;
@end
