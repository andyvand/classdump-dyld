/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:29 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Application Support/ProApps/Internal Plug-Ins/BrowserKit/iLife.bkplugin/Contents/MacOS/iLife
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectContext;

@interface BKiTunesProviderDBLoader : NSObject {

	NSManagedObjectContext* _moc;

}
-(void)deleteAllEntriesForEntity:(id)arg1 ;
-(id)managedObjectForName:(id)arg1 cache:(id)arg2 entityName:(id)arg3 ;
-(void)fillDatabase;
-(id)init;
-(void)dealloc;
-(id)persistentStoreCoordinator;
@end

