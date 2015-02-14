/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalPersistenceMonitor.h>

@interface CalBagChangeMonitor : CalPersistenceMonitor
+(void)initialize;
+(void)enable;
+(void)disableForUnitTests;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)managedObjectContextDidReset:(id)arg1 ;
-(void)registerListeners;
-(void)_managedObjectContextDidChange:(id)arg1 ;
-(void)unregisterListeners;
-(char)isInterestedInContext:(id)arg1 ;
@end

