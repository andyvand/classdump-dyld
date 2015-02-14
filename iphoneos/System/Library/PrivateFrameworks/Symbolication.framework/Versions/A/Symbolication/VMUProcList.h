/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:35 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMapTable;

@interface VMUProcList : NSObject {

	NSLock* procLock;
	NSMapTable* allProcs;
	NSMapTable* filteredProcs;
	char appsOnly;
	char ownedOnly;

}
-(char)updateFromSystem;
-(void)_populateFromSystem;
-(id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 withContext:(void*)arg3 ;
-(void)setProcInfos:(id)arg1 ;
-(void)addProcInfo:(id)arg1 ;
-(void)removeProcInfo:(id)arg1 ;
-(void)setOwnedOnly:(char)arg1 ;
-(char)ownedOnly:(char)arg1 ;
-(void)setAppsOnly:(char)arg1 ;
-(char)appsOnly;
-(id)allProcInfos;
-(id)allPIDs;
-(id)allNames;
-(id)allPathNames;
-(id)newestProcInfo;
-(id)newestProcInfoWithName:(id)arg1 ;
-(id)newestProcInfoSatisfyingCondition:(SEL)arg1 forTarget:(id)arg2 ;
-(id)procInfoWithPID:(int)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(char)update;
@end

