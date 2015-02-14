/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CNWeakReference, NSSet;

@interface AKCardViewFaceTimeAvailabilityWatcher : NSObject {

	CNWeakReference* _dataSource;

}

@property (readonly) NSSet * uniqueIdentifiers; 
-(NSSet *)uniqueIdentifiers;
-(void)faceTimeServiceDidBecomeAvailable:(id)arg1 ;
-(id)communicationEndpoints;
-(void)startFaceTimeAvailabilityLookup;
-(void)dealloc;
-(id)dataSource;
-(id)initWithDataSource:(id)arg1 ;
@end

