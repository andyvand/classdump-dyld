/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:14 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {

	NSMutableDictionary* _storeLinksDirs;
	NSMutableDictionary* _filesToCleanUp;

}
+(id)defaultInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(id)_init__;
-(void)_deleteIfNecessary:(id)arg1 ;
-(void)_doCleanupForDir:(id)arg1 exceptURLs:(id)arg2 ;
-(char)registerURLForCleanup:(id)arg1 ;
-(id)temporaryLinksDirectoryForStore:(id)arg1 ;
-(void)doCleanupForURL:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
@end

