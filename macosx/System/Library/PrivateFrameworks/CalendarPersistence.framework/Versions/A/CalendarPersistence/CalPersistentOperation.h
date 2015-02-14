/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarPersistence/CalOperation.h>
#import <CalendarPersistence/NSCoding.h>

@class CalManagedPersistentOperation;

@interface CalPersistentOperation : CalOperation <NSCoding> {

	CalManagedPersistentOperation* _managedOperation;

}

@property (retain) CalManagedPersistentOperation * managedOperation;              //@synthesize managedOperation=_managedOperation - In the implementation block
+(id)archive:(id)arg1 inContext:(id)arg2 ;
+(id)dearchive:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)managedObjectIDForURIRepresentation:(id)arg1 ;
-(CalManagedPersistentOperation *)managedOperation;
-(void)setManagedOperation:(CalManagedPersistentOperation *)arg1 ;
-(id)managedObjectIDsForURIRepresentations:(id)arg1 ;
@end

