/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SyncServices/ISDNameNumberProvider.h>

@interface SyncClientNameNumberProvider : ISDNameNumberProvider
-(void)dealloc;
-(id)manager;
-(char)foundMappingForNewName:(id)arg1 inMap:(id)arg2 ;
-(id)initWithSyncManager:(id)arg1 ;
-(void)allowNonPersistentCreation;
-(char)canCreateNewMapping;
@end
